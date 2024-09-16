#pragma once

#include "ZilbFocusableNavbar.h"
#include "ZilbFocusableNavbarSubwidget.generated.h"

/**
 * A subwidget within a ZilbFocusableNavbar. Contains functionality to keep navigation of the focusable navbar running smoothly.
 */
UCLASS()
class ZILBUI_API UZilbFocusableNavbarSubwidget : public UZilbWidgetBase
{
	GENERATED_BODY()

public:
	UZilbFocusableNavbarSubwidget(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(Transient)
	UZilbFocusableNavbar* Navbar;

protected:

	virtual void InternalProcessActivation() override;

	virtual UWidget* NativeGetDesiredFocusTarget() const override;

	virtual bool NativeOnHandleBackAction() override;
};
