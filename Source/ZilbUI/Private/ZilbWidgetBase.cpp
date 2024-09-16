#include "ZilbWidgetBase.h"

#include "ZilbUI.h"
#include "Input/CommonUIInputTypes.h"
#include "Widgets/SViewport.h"

UZilbWidgetBase::UZilbWidgetBase(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UZilbWidgetBase::NativeConstruct()
{
	Super::NativeConstruct();
	ActivatedAnimFinishedEvent.BindDynamic(this, &UZilbWidgetBase::OnActivatedAnimFinished);
	DeactivatedAnimFinishedEvent.BindDynamic(this, &UZilbWidgetBase::OnDeactivatedAnimFinished);

	BindToAnimationFinished(ActivatedAnim, ActivatedAnimFinishedEvent);
	BindToAnimationFinished(DeactivatedAnim, DeactivatedAnimFinishedEvent);
}

void UZilbWidgetBase::NativeDestruct()
{
	Super::NativeDestruct();

	OnDestroyedDelegate.Broadcast(this);
	for (auto BindingHandle : BindingHandles)
	{
		if (BindingHandle.IsValid())
		{
			BindingHandle.Unregister();
		}
	}
}

void UZilbWidgetBase::FadeOut(float Duration)
{
	StartFade(Duration, false);
}

void UZilbWidgetBase::FadeIn(float Duration)
{
	StartFade(Duration, true);
}

void UZilbWidgetBase::BP_RegisterUIActionBinding(FDataTableRowHandle Action, bool bConsumeInput, EInputEvent KeyEvent, FOnInputAction Callback)
{
	FSimpleDelegate Delegate;
	Delegate.BindUObject( this, &ThisClass::OnInputAction, Callback);

	FBindUIActionArgs BindArgs(Action, false, Delegate);
	BindArgs.bConsumeInput = bConsumeInput;
	BindArgs.KeyEvent = KeyEvent;

	FUIActionBindingHandle BindingHandle = RegisterUIActionBinding(BindArgs);
	BindingHandles.Add(BindingHandle);
}


void UZilbWidgetBase::StartFade(float Duration, bool bFadeIn)
{
	// Check if already fading
	if (FadeTimerTickHandle.IsValid() && bFadingIn == bFadeIn)
		return;

	if (Duration < 0)
		Duration = DefaultFadeDuration;
	FadeTimePassed = 0;
	FadeDuration = Duration;
	bFadingIn = bFadeIn;
	SetRenderOpacity(bFadingIn ? 0 : 1);
	if (UWorld* const World = GetWorld())
	{
		LastFadeTimerTickTime = World->GetTimeSeconds();
		if (FadeTimerTickHandle.IsValid())
		{
			World->GetTimerManager().ClearTimer(FadeTimerTickHandle);
		}
		FadeTimerTickHandle = World->GetTimerManager().SetTimerForNextTick(this, &ThisClass::OnFadeTimerTick);
	}
}

void UZilbWidgetBase::OnFadeTimerTick_Implementation()
{
	OnFadeTimerTick_Internal();
}

void UZilbWidgetBase::OnFadeTimerTick_Internal()
{
	UWorld* const World = GetWorld();
	if (!World)
		return;

	const float CurrentTickTime = World->GetTimeSeconds();
	const float DeltaSeconds = CurrentTickTime - LastFadeTimerTickTime;

	if (DeltaSeconds > FadeUpdateInterval)
	{
		FadeTimePassed += DeltaSeconds;

		if (FadeTimePassed >= FadeDuration)
		{
			OnFadeComplete();
			return;
		}
		SetRenderOpacity((bFadingIn ? FadeTimePassed : FadeDuration - FadeTimePassed) / FadeDuration);

		LastFadeTimerTickTime = CurrentTickTime;
	}

	// If we're not done fading, try again next frame.
	FadeTimerTickHandle = World->GetTimerManager().SetTimerForNextTick(this, &ThisClass::OnFadeTimerTick);
}

void UZilbWidgetBase::OnFadeComplete()
{
	UWorld* const World = GetWorld();
	if (!World)
		return;

	World->GetTimerManager().ClearTimer(FadeTimerTickHandle);
	SetRenderOpacity(bFadingIn ? 1 : 0);
	if (bFadingIn && bDelayActivationForFade && IsActivated())
	{
		Super::NativeOnActivated();
	}
	else if (!bFadingIn && bDelayDeactivationForFade && !IsActivated())
	{
		Super::NativeOnDeactivated();
	}
}

void UZilbWidgetBase::OnActivatedAnimFinished()
{
	if (IsActivated())
	{
		Super::NativeOnActivated();
	}
}

void UZilbWidgetBase::OnDeactivatedAnimFinished()
{
	if (!IsActivated())
	{
		Super::NativeOnDeactivated();
	}
}

void UZilbWidgetBase::NativeOnActivated()
{
	bool bDelayActivation = false;
	if (ActivatedAnim)
	{
		StopAnimation(DeactivatedAnim);
		PlayAnimation(ActivatedAnim);
		if (bDelayActivationForAnim)
		{
			if (bSetVisibilityOnActivated)
			{
				SetVisibility(ESlateVisibility::HitTestInvisible);
			}
			bDelayActivation = true;
		}
	}
	if (bFadeInOnActivate)
	{
		FadeIn(DefaultFadeDuration);
		if (bDelayActivationForFade)
		{
			if (bSetVisibilityOnActivated)
			{
				SetVisibility(ESlateVisibility::HitTestInvisible);
			}
			bDelayActivation = true;
		}
	}
	if (!bDelayActivation)
	{
		UE_LOG(Log_ZUI, Log, TEXT("Activated Widget %s"), *GetFullName());
		Super::NativeOnActivated();
	}
}

void UZilbWidgetBase::NativeOnDeactivated()
{
	bool bDelayDeactivation = false;
	if (DeactivatedAnim)
	{
		StopAnimation(ActivatedAnim);
		PlayAnimation(DeactivatedAnim);
		if (bDelayDeactivationForAnim)
		{
			if (bSetVisibilityOnDeactivated)
			{
				SetVisibility(ESlateVisibility::HitTestInvisible);
			}
			bDelayDeactivation = true;
		}
	}
	if (bFadeOutOnDeactivate)
	{
		FadeOut(DefaultFadeDuration);
		if (bDelayDeactivationForFade)
		{
			if (bSetVisibilityOnDeactivated)
			{
				SetVisibility(ESlateVisibility::HitTestInvisible);
			}
			bDelayDeactivation = true;
		}
	}
	if (!bDelayDeactivation)
	{
		UE_LOG(Log_ZUI, Log, TEXT("Deactivated Widget %s"), *GetFullName());
		Super::NativeOnDeactivated();
	}
}

FReply UZilbWidgetBase::NativeOnFocusReceived(const FGeometry& InGeometry, const FFocusEvent& InFocusEvent)
{
	UE_LOG(Log_ZUI, Log, TEXT("Focus Received %s"), *GetFullName());
	if (UWidget* FocusTarget = GetDesiredFocusTarget())
	{
		UE_LOG(Log_ZUI, Log, TEXT("Focus Redirected %s"), *FocusTarget->GetFullName());
		FocusTarget->SetFocus();
		// If controller focuses the viewport (eg: clicked with no focusable widgets)
		// due to a bug in FSceneViewport's OnMouseButtonUp it won't release mouse capture.
		// To account for this, force it to release mouse capture when we try focusing a widget
		// if it's currently capturing.
		TSharedPtr<SViewport> GameViewport = FSlateApplication::Get().GetGameViewport();
		if (GameViewport.IsValid() && GameViewport.ToSharedRef()->HasMouseCapture())
		{
			return FReply::Handled().ReleaseMouseCapture();
		}
		return FReply::Handled();
	}
	return Super::NativeOnFocusReceived(InGeometry, InFocusEvent);
}

void UZilbWidgetBase::NativeOnFocusLost(const FFocusEvent& InFocusEvent)
{
	UE_LOG(Log_ZUI, Log, TEXT("Focus Lost %s"), *GetFullName());
	Super::NativeOnFocusLost(InFocusEvent);
}
