#include "ZilbFocusableNavbar.h"
#include "ZilbFocusableNavbarSubwidget.h"

UZilbFocusableNavbar::UZilbFocusableNavbar(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bFocusingNavigation = true;
}

void UZilbFocusableNavbar::NativeConstruct()
{
	Super::NativeConstruct();
	if (WidgetSwitcher)
	{
		for (UWidget* Widget : WidgetSwitcher->GetAllChildren())
		{
			if (UZilbFocusableNavbarSubwidget* Subwidget = Cast<UZilbFocusableNavbarSubwidget>(Widget))
			{
				Subwidget->Navbar = this;
			}
		}
	}
}

void UZilbFocusableNavbar::NativeOnDeactivated()
{
	Super::NativeOnDeactivated();
	if (UZilbWidgetBase* ZilbWidget = Cast<UZilbWidgetBase>(GetCurrentlyActiveWidget()))
	{
		ZilbWidget->DeactivateWidget();
	}
	bFocusingNavigation = true;
	WidgetSwitcher->SetActiveWidgetIndex(0, true);
}

UWidget* UZilbFocusableNavbar::NativeGetDesiredFocusTarget() const
{
	return bFocusingNavigation ? GetCurrentlyActiveButton() : GetCurrentlyActiveWidget();
}

void UZilbFocusableNavbar::OnButtonClicked_Internal(UZilbButtonBase* Button)
{
	bFocusingNavigation = false;

	UWidget* ActiveWidget = GetCurrentlyActiveWidget();
	if (UZilbWidgetBase* ZilbWidget = Cast<UZilbWidgetBase>(ActiveWidget))
	{
		ZilbWidget->ActivateWidget();
	}
	ActiveWidget->SetFocus();
}

void UZilbFocusableNavbar::OnButtonSelected_Internal(UZilbButtonBase* Button, bool bSelected)
{
	if (bSelected)
	{
		Super::OnButtonClicked_Internal(Button);
	}
}

