#include "ZilbFocusableNavbarSubwidget.h"

#include "CommonInputSubsystem.h"

UZilbFocusableNavbarSubwidget::UZilbFocusableNavbarSubwidget(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UZilbFocusableNavbarSubwidget::InternalProcessActivation()
{
	if (Navbar && Navbar->bFocusingNavigation)
		return;

	Super::InternalProcessActivation();
}

UWidget* UZilbFocusableNavbarSubwidget::NativeGetDesiredFocusTarget() const
{
	if (Navbar && Navbar->bFocusingNavigation)
	{
		return Navbar;
	}
	return Super::NativeGetDesiredFocusTarget();
}

bool UZilbFocusableNavbarSubwidget::NativeOnHandleBackAction()
{
	UCommonInputSubsystem* CommonInputSubsystem = GetInputSubsystem();
	if (CommonInputSubsystem && CommonInputSubsystem->GetCurrentInputType() == ECommonInputType::Gamepad)
	{
		if (Navbar)
		{
			Navbar->bFocusingNavigation = true;
			Navbar->SetFocus();
			DeactivateWidget();
			return true;
		}
	}
	return Super::NativeOnHandleBackAction();
}
