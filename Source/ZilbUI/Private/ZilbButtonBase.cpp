#include "ZilbButtonBase.h"
#include "ZilbUI.h"

#include "CommonActionWidget.h"
#include "CommonTextBlock.h"
#include "CommonInputSubsystem.h"
#include "CommonUITypes.h"
#include "Input/CommonUIInputTypes.h"

UZilbButtonBase::UZilbButtonBase(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	TextLabel = FText::AsCultureInvariant("UNLOCALIZED");
	GamepadTextLabel = FText::AsCultureInvariant("UNLOCALIZED");
	DisabledTextLabel = FText::AsCultureInvariant("UNLOCALIZED");
	TransformPolicy = ETextTransformPolicy::None;
	NormalTextColor = FSlateColor(FLinearColor::White);
	HoveredTextColor = FSlateColor(FLinearColor::White);
	PressedTextColor = FSlateColor(FLinearColor::White);
	SelectedNormalTextColor = FSlateColor(FLinearColor::White);
	SelectedHoveredTextColor = FSlateColor(FLinearColor::White);
	SelectedPressedTextColor = FSlateColor(FLinearColor::White);
}

void UZilbButtonBase::NativePreConstruct()
{
	Super::NativePreConstruct();

	Invalidate(EInvalidateWidget::Layout);
	UpdateButtonText();

	if (bSetRenderOpacityOnDisable)
	{
		SetRenderOpacity(EnabledRenderOpacity);
}
}

void UZilbButtonBase::NativeConstruct()
{
	Super::NativeConstruct();
	UpdateButtonText();
	UpdateWidgetContainers();
	UCommonInputSubsystem* CommonInputSubsystem = GetInputSubsystem();
	if (CommonInputSubsystem)
	{
		OnInputMethodChanged(CommonInputSubsystem->GetCurrentInputType());
	}
	if (HoveredAnim || PressedAnim || SelectedAnim)
	{
		bAlwaysTickWhenAnimating = true;
	}
}

void UZilbButtonBase::SetIsEnabled(bool bInIsEnabled)
{
	Super::SetIsEnabled(bInIsEnabled);
	UpdateButtonText();
	if (bSetRenderOpacityOnDisable)
	{
		SetRenderOpacity(GetIsEnabled() ? EnabledRenderOpacity : DisabledRenderOpacity);
	}
}

void UZilbButtonBase::SetIsInteractionEnabled(bool bInIsInteractionEnabled)
{
	if (IsHovered() && !bInIsInteractionEnabled)
	{
		NativeOnUnhovered();
	}
	Super::SetIsInteractionEnabled(bInIsInteractionEnabled);
}

void UZilbButtonBase::SetVisibility(ESlateVisibility InVisibility)
{
	Super::SetVisibility(InVisibility);
	UpdateInputActionWidgetVisibility();
}

void UZilbButtonBase::NativeOnCurrentTextStyleChanged()
{
	Super::NativeOnCurrentTextStyleChanged();
	if (ButtonText)
	{
		ButtonText->SetStyle(GetCurrentTextStyleClass());
		if (bOverrideTextStyleColors)
		{
			EButtonState State = GetCurrentButtonState();
			switch (State)
			{
			case Normal:
				ButtonText->SetColorAndOpacity(NormalTextColor);
				break;
			case Hovered:
				ButtonText->SetColorAndOpacity(HoveredTextColor);
				break;
			case Pressed:
				ButtonText->SetColorAndOpacity(PressedTextColor);
				break;
			case SelectedNormal:
				ButtonText->SetColorAndOpacity(SelectedNormalTextColor);
				break;
			case SelectedHovered:
				ButtonText->SetColorAndOpacity(SelectedHoveredTextColor);
				break;
			case SelectedPressed:
				ButtonText->SetColorAndOpacity(SelectedPressedTextColor);
				break;
			case Disabled:
				ButtonText->SetColorAndOpacity(DisabledTextColor);
				break;
			default: ;
			}
		}
	}
}

void UZilbButtonBase::NativeOnHovered()
{
	if (IsInteractionEnabled())
	{
		if (HoveredAnim)
		{
			PlayAnimationForward(HoveredAnim);
		}
		Super::NativeOnHovered();
	}
}

void UZilbButtonBase::NativeOnUnhovered()
{
	if (IsInteractionEnabled())
	{
		if (HoveredAnim)
		{
			PlayAnimationReverse(HoveredAnim);
		}
		Super::NativeOnUnhovered();
	}
}

void UZilbButtonBase::NativeOnPressed()
{
	if (IsInteractionEnabled())
	{
		if (bClickRequiresHold)
		{
			LastHoldTimerTickTime = GetWorld()->GetTimeSeconds();
			HoldTimerTickHandle = GetWorld()->GetTimerManager().SetTimerForNextTick(this, &ThisClass::OnHoldTimerTick);
		}
		if (PressedAnim)
		{
			PlayAnimationForward(PressedAnim);
		}
		Super::NativeOnPressed();
	}
}

void UZilbButtonBase::NativeOnReleased()
{
	GetWorld()->GetTimerManager().ClearTimer(HoldTimerTickHandle);
	NativeOnActionProgress(0);
	if (IsInteractionEnabled())
	{
		if (PressedAnim)
		{
			PlayAnimationReverse(PressedAnim);
		}
		Super::NativeOnReleased();
	}
}

void UZilbButtonBase::NativeOnClicked()
{
	if (bClickRequiresHold)
	{
		if (bHoldCompleted)
		{
			bHoldCompleted = false;
		}
		else
		{
			return;
		}
	}

	Super::NativeOnClicked();
}

void UZilbButtonBase::NativeOnSelected(bool bBroadcast)
{
	if (SelectedAnim)
	{
		PlayAnimationForward(SelectedAnim);
	}
	Super::NativeOnSelected(bBroadcast);
}

void UZilbButtonBase::NativeOnDeselected(bool bBroadcast)
{
	if (SelectedAnim)
	{
		PlayAnimationReverse(SelectedAnim);
	}
	Super::NativeOnDeselected(bBroadcast);
}

void UZilbButtonBase::BindTriggeringInputActionToClick()
{
	if (TriggeringInputAction.IsNull() || !TriggeredInputAction.IsNull())
	{
		return;
	}

	if (!TriggeringBindingHandle.IsValid())
	{
		FBindUIActionArgs BindArgs(TriggeringInputAction, false, FSimpleDelegate::CreateUObject(this, &UZilbButtonBase::HandleInputActionTriggered));
		BindArgs.OnHoldActionProgressed.BindUObject(this, &UZilbButtonBase::NativeOnActionProgress);
		BindArgs.bIsPersistent = bIsPersistentBinding;

		BindArgs.InputMode = InputModeOverride;

		TriggeringBindingHandle = RegisterUIActionBinding(BindArgs);
	}
}

void UZilbButtonBase::HandleInputActionTriggered()
{
	OnInputActionTriggered().Broadcast();
	bHoldCompleted = true;
	HandleButtonClicked();
}

EButtonState UZilbButtonBase::GetCurrentButtonState() const
{
	EButtonState State = Normal;
	if (IsHovered())
	{
		State = Hovered;
	}
	if (IsPressed())
	{
		State = Pressed;
	}
	if (GetSelected())
	{
		switch (State)
		{
		case Normal:
			State = SelectedNormal;
			break;
		case Hovered:
			State = SelectedHovered;
			break;
		case Pressed:
			State = SelectedPressed;
			break;
		default: ;
		}
	}
	if (!IsInteractionEnabled())
	{
		State = Disabled;
	}
	return State;
}

void UZilbButtonBase::SetText(FText Text)
{
	TextLabel = Text;
	UpdateButtonText();
}

void UZilbButtonBase::SetGamepadText(FText Text)
{
	GamepadTextLabel = Text;
	UpdateButtonText();
}

void UZilbButtonBase::VirtualClick()
{
	bHoldCompleted = true;
	HandleButtonClicked();
}

void UZilbButtonBase::OnHoldTimerTick()
{
	const float CurrentTickTime = GetWorld()->GetTimeSeconds();
	const float DeltaSeconds = CurrentTickTime - LastHoldTimerTickTime;
	if (DeltaSeconds > HoldTime)
	{
		bHoldCompleted = true;
		NativeOnClicked();
	}
	else
	{
		NativeOnActionProgress(DeltaSeconds / HoldTime);
		HoldTimerTickHandle = GetWorld()->GetTimerManager().SetTimerForNextTick(this, &ThisClass::OnHoldTimerTick);
	}
}

void UZilbButtonBase::UpdateButtonText()
{
	if (ButtonText)
	{
		FText Label = TextLabel;
		if (bUseDifferentTextOnGamepad)
		{
			UCommonInputSubsystem* CommonInputSubsystem = GetInputSubsystem();
			if (CommonInputSubsystem && CommonInputSubsystem->GetCurrentInputType() == ECommonInputType::Gamepad)
			{
				Label = GamepadTextLabel;
			}
		}
		if (bUseDifferentTextWhenDisabled && !GetIsEnabled())
		{
			Label = DisabledTextLabel;
		}
		ButtonText->SetText(Label);
		ButtonText->SetTextTransformPolicy(TransformPolicy);
	}
}

void UZilbButtonBase::UpdateWidgetContainers()
{
	UCommonInputSubsystem* CommonInputSubsystem = GetInputSubsystem();
	bool bShowGamepad = CommonInputSubsystem && CommonInputSubsystem->GetCurrentInputType() == ECommonInputType::Gamepad;
	if (KeyboardOnlyWidgetContainer)
	{
		KeyboardOnlyWidgetContainer->SetVisibility(bShowGamepad ? ESlateVisibility::Collapsed : ESlateVisibility::SelfHitTestInvisible);
	}
	if (GamepadOnlyWidgetContainer)
	{
		GamepadOnlyWidgetContainer->SetVisibility(bShowGamepad ? ESlateVisibility::SelfHitTestInvisible : ESlateVisibility::Collapsed);
	}
}

void UZilbButtonBase::UpdateInputActionWidget()
{
	Super::UpdateInputActionWidget();

	if (const UCommonInputSubsystem* CommonInputSubsystem = GetInputSubsystem())
	{
		if (const FCommonInputActionDataBase* InputActionData = CommonUI::GetInputActionData(TriggeringInputAction))
		{
			const FCommonInputTypeInfo& InputTypeInfo = InputActionData->GetCurrentInputTypeInfo(CommonInputSubsystem);
			HoldTime = InputTypeInfo.HoldTime;
		}
	}
}

void UZilbButtonBase::UpdateInputActionWidgetVisibility()
{
	Super::UpdateInputActionWidgetVisibility();
	if (InputActionWidget)
	{
		if (!IsInteractionEnabled())
		{
			InputActionWidget->SetHidden(true);
		}
	}
}

void UZilbButtonBase::NativeOnActionProgress(float HeldPercent)
{
	const float Delay = 0.2f; // Add a delay so that the hold action doesn't display for quick presses.
	HeldPercent = FMath::Max(0, HeldPercent - Delay) / (1 - Delay);
	OnActionHeld().Broadcast(HeldPercent);
	Super::NativeOnActionProgress(HeldPercent);
}

void UZilbButtonBase::OnInputMethodChanged(ECommonInputType CurrentInputType)
{
	Super::OnInputMethodChanged(CurrentInputType);
	UpdateButtonText();
	UpdateWidgetContainers();
	BP_OnInputMethodChanged(CurrentInputType);
}

FReply UZilbButtonBase::NativeOnFocusReceived(const FGeometry& InGeometry, const FFocusEvent& InFocusEvent)
{
	UE_LOG(Log_ZUI, Log, TEXT("Button Focus Received %s"), *GetFullName());
	auto Reply = Super::NativeOnFocusReceived(InGeometry, InFocusEvent);
	if (FocusOverride)
	{
		UE_LOG(Log_ZUI, Log, TEXT("Button Focus Redirected %s"), *FocusOverride->GetFullName());
		FocusOverride->SetFocus();
	}
	return Reply;
}

void UZilbButtonBase::NativeOnFocusLost(const FFocusEvent& InFocusEvent)
{
	UE_LOG(Log_ZUI, Log, TEXT("Button Focus Lost %s"), *GetFullName());
	Super::NativeOnFocusLost(InFocusEvent);
}
