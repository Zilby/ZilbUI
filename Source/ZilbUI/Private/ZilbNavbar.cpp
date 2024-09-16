#include "ZilbNavbar.h"

#include "CommonActionWidget.h"
#include "Input/CommonUIInputTypes.h"
#include "CommonInputSubsystem.h"
#include "Blueprint/WidgetTree.h"


UZilbNavbar::UZilbNavbar(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bCanWrap = true;
	bAutoPopulate = false;
}


#if WITH_EDITORONLY_DATA
void UZilbNavbar::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	const FName& PropertyName = PropertyChangedEvent.GetPropertyName();

	if (PropertyName == GET_MEMBER_NAME_CHECKED(UZilbNavbar, bAutoPopulate) && !bAutoPopulate)
	{
		if (ButtonContainer)
		{
			ButtonContainer->ClearChildren();
		}
		if (WidgetSwitcher)
		{
			WidgetSwitcher->ClearChildren();
		}
		return;
	}

	if (PropertyName == GET_MEMBER_NAME_CHECKED(UZilbNavbar, WidgetNum)
		|| PropertyName == GET_MEMBER_NAME_CHECKED(UZilbNavbar, ButtonClass)
		|| PropertyName == GET_MEMBER_NAME_CHECKED(UZilbNavbar, WidgetClass))
	{
		PopulateWidgets();
	}
}
#endif

void UZilbNavbar::NativePreConstruct()
{
	Super::NativePreConstruct();
	PopulateWidgets();
}

void UZilbNavbar::NativeConstruct()
{
	Super::NativeConstruct();

	if (UZilbButtonBase* ActiveButton = GetCurrentlyActiveButton())
	{
		ActiveButton->SetIsSelected(true);
	}

	if (ButtonContainer)
	{
		for (UWidget* Child : ButtonContainer->GetAllChildren())
		{
			if (UZilbButtonBase* Button = Cast<UZilbButtonBase>(Child))
			{
				Button->OnClicked().AddLambda([this, Button]() { OnButtonClicked(Button); });
				Button->OnIsSelectedChanged().AddLambda([this, Button](bool bSelected) { OnButtonSelected(Button, bSelected); });
			}
		}
	}

	if (!PreviousInputAction.IsNull())
	{
		if (PreviousInputActionWidget)
		{
			PreviousInputActionWidget->SetInputAction(PreviousInputAction);
		}
		if (!PreviousBindingHandle.IsValid())
		{
			FBindUIActionArgs BindArgs(PreviousInputAction, false, FSimpleDelegate::CreateUObject(this, &UZilbNavbar::OnPreviousInput));
			BindArgs.bConsumeInput = false;
			PreviousBindingHandle = RegisterUIActionBinding(BindArgs);
		}
	}
	if (!NextInputAction.IsNull())
	{
		if (NextInputActionWidget)
		{
			NextInputActionWidget->SetInputAction(NextInputAction);
		}
		if (!NextBindingHandle.IsValid())
		{
			FBindUIActionArgs BindArgs(NextInputAction, false, FSimpleDelegate::CreateUObject(this, &UZilbNavbar::OnNextInput));
			BindArgs.bConsumeInput = false;
			NextBindingHandle = RegisterUIActionBinding(BindArgs);
		}
	}

	if (UCommonInputSubsystem* CommonInputSubsystem = GetInputSubsystem())
	{
		CommonInputSubsystem->OnInputMethodChangedNative.AddUObject(this, &UZilbNavbar::UpdateInputActionWidgetsVisibility);
		ECommonInputType InputType = CommonInputSubsystem->GetCurrentInputType();
		UpdateInputActionWidgetsVisibility(InputType);
	}

	FocusGuard = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass());

	if (FocusGuard)
	{
		FocusGuard->SetVisibility(ESlateVisibility::Collapsed);
		FocusGuard->SetBackgroundColor(FLinearColor::Transparent);

		int32 ZOrder = INDEX_NONE;
		TSharedPtr<SOverlay> FocusGuardOverlay = MyOverlay;
		if (WidgetSwitcher)
		{
			TSharedPtr<SOverlay> WidgetSwitcherOverlay = StaticCastSharedPtr<SOverlay>(WidgetSwitcher->TakeWidget()->GetParentWidget());
			if (WidgetSwitcherOverlay.IsValid())
			{
				FChildren* Children = WidgetSwitcherOverlay->GetChildren();
				int32 ChildCount = Children->Num();
				for (int32 i = 0; i < ChildCount; i++)
				{
					TSharedRef<SWidget> Child = Children->GetChildAt(i);
					if (Child == WidgetSwitcher->TakeWidget())
					{
						FocusGuardOverlay = WidgetSwitcherOverlay;
						ZOrder = i;
						break;
					}
				}
			}

			WidgetSwitcher->OnActiveWidgetSet.AddUniqueDynamic(this, &UZilbNavbar::OnActiveWidgetSet);
			WidgetSwitcher->OnIsTransitioningChanged.AddUObject(this, &UZilbNavbar::OnIsTransitioningChanged);
		}

		FocusGuardOverlay->AddSlot(ZOrder)
		.VAlign(VAlign_Fill)
		.HAlign(HAlign_Fill)
		[
			FocusGuard->TakeWidget()
		];
	}
}

void UZilbNavbar::NativeDestruct()
{
	Super::NativeDestruct();
	if (PreviousBindingHandle.IsValid())
	{
		PreviousBindingHandle.Unregister();
	}
	if (NextBindingHandle.IsValid())
	{
		NextBindingHandle.Unregister();
	}
	if (UCommonInputSubsystem* CommonInputSubsystem = GetInputSubsystem())
	{
		CommonInputSubsystem->OnInputMethodChangedNative.RemoveAll(this);
	}
}

void UZilbNavbar::NativeOnActivated()
{
	Super::NativeOnActivated();
	if (!WidgetSwitcher)
		return;

	if (UZilbWidgetBase* ActiveWidget = Cast<UZilbWidgetBase>(WidgetSwitcher->GetActiveWidget()))
	{
		ActiveWidget->ActivateWidget();
	}
}

void UZilbNavbar::OnPreviousInput_Implementation()
{
	OnPreviousInput_Internal();
}

void UZilbNavbar::OnNextInput_Implementation()
{
	OnNextInput_Internal();
}

void UZilbNavbar::OnPreviousInput_Internal()
{
	if (bHidden || !GetIsEnabled())
		return;
	WidgetSwitcher->ActivatePreviousWidget(bCanWrap);
}

void UZilbNavbar::OnNextInput_Internal()
{
	if (bHidden || !GetIsEnabled())
		return;
	WidgetSwitcher->ActivateNextWidget(bCanWrap);
}

void UZilbNavbar::SetActiveWidget_Implementation(UWidget* Widget, bool bDisableAnimation)
{
	SetActiveWidget_Internal(Widget, bDisableAnimation);
}

void UZilbNavbar::SetActiveWidget_Internal(UWidget* Widget, bool bDisableAnimation)
{
	WidgetSwitcher->SetDisableTransitionAnimation(bDisableAnimation);
	WidgetSwitcher->SetActiveWidget(Widget);
	WidgetSwitcher->SetDisableTransitionAnimation(!WidgetSwitcher->bIsAnimated);
}

TSharedRef<SWidget> UZilbNavbar::RebuildWidget()
{
	TSharedRef<SWidget> OutWidget =  SAssignNew(MyOverlay, SOverlay)
		+ SOverlay::Slot()
		.VAlign(VAlign_Fill)
		.HAlign(HAlign_Fill)
		[
			Super::RebuildWidget()
		];

	return OutWidget;
}

void UZilbNavbar::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);
	MyOverlay.Reset();
}

UWidget* UZilbNavbar::NativeGetDesiredFocusTarget() const
{
	if (WidgetSwitcher->IsCurrentlySwitching())
	{
		return FocusGuard;
	}
	return WidgetSwitcher->GetActiveWidget();
}

void UZilbNavbar::OnButtonClicked_Implementation(UZilbButtonBase* Button)
{
	OnButtonClicked_Internal(Button);
}


void UZilbNavbar::OnButtonClicked_Internal(UZilbButtonBase* Button)
{
	WidgetSwitcher->SetActiveWidgetIndex(ButtonContainer->GetChildIndex(Button));
}

void UZilbNavbar::OnButtonSelected_Implementation(UZilbButtonBase* Button, bool bSelected)
{
	OnButtonSelected_Internal(Button, bSelected);
}

void UZilbNavbar::OnButtonSelected_Internal(UZilbButtonBase* Button, bool bSelected)
{
}

void UZilbNavbar::UpdateInputActionWidgetsVisibility(ECommonInputType CurrentInputType)
{
	for (UCommonActionWidget* InputActionWidget : {PreviousInputActionWidget, NextInputActionWidget})
	{
		if (InputActionWidget)
		{
			InputActionWidget->SetHidden(CurrentInputType != ECommonInputType::Gamepad);
		}
	}
	BP_UpdateInputActionWidgetsVisibility(CurrentInputType);
}

void UZilbNavbar::OnActiveWidgetSet(UWidget* Widget, int32 Index)
{
	for (auto Child : ButtonContainer->GetAllChildren())
	{
		UZilbButtonBase* Button = Cast<UZilbButtonBase>(Child);
		if (Button)
		{
			Button->ClearSelection();
		}
	}
	GetCurrentlyActiveButton()->SetIsSelected(true);
}

void UZilbNavbar::OnIsTransitioningChanged(bool bIsTransitioning)
{
	if (FocusGuard)
	{
		FocusGuard->SetVisibility(bIsTransitioning ? ESlateVisibility::Visible : ESlateVisibility::Collapsed);
	}
}

UZilbButtonBase* UZilbNavbar::GetCurrentlyActiveButton() const
{
	// This is the switcher's currently active widget (updates instantly)
	return Cast<UZilbButtonBase>(ButtonContainer->GetChildAt(WidgetSwitcher->GetLastSetWidgetIndex()));
}

UWidget* UZilbNavbar::GetCurrentlyActiveWidget() const
{
	// This is the switcher's currently active widget (updates instantly)
	return WidgetSwitcher->GetWidgetAtIndex(WidgetSwitcher->GetLastSetWidgetIndex());
}

void UZilbNavbar::PopulateWidgets()
{
	if (bAutoPopulate)
	{
		if (ButtonContainer && IsValid(ButtonClass))
		{
			ButtonContainer->ClearChildren();
			for (int i = 0; i < WidgetNum; ++i)
			{
				UUserWidget* Button = CreateWidgetInstance(*ButtonContainer, ButtonClass, FName(*(ButtonClass->GetName() + FString::Printf(TEXT("_BTN_%d"), i))));
				ButtonContainer->AddChild(Button);
			}
		}
		if (WidgetSwitcher && IsValid(WidgetClass))
		{
			WidgetSwitcher->ClearChildren();
			for (int i = 0; i < WidgetNum; ++i)
			{
				UUserWidget* Widget = CreateWidgetInstance(*WidgetSwitcher, WidgetClass, FName(*(WidgetClass->GetName() + FString::Printf(TEXT("Widget_%d"), i))));
				WidgetSwitcher->AddChild(Widget);
			}
		}
	}
}

void UZilbNavbar::SetNavbarVisibility(bool bHide)
{
	if (bHidden == bHide)
		return;

	bHidden = bHide;

	if (ShowAnim)
	{
		bHide ? PlayAnimationReverse(ShowAnim) : PlayAnimationForward(ShowAnim);
}
	else
	{
		SetVisibility(bHide ? ESlateVisibility::Hidden : ESlateVisibility::SelfHitTestInvisible);
	}
}

