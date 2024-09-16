#pragma once

#include "ZilbNavbar.h"
#include "ZilbFocusableNavbar.generated.h"

/**
 * Class for navigation bar widget that switches focus between navbar and widgets
 */
UCLASS()
class ZILBUI_API UZilbFocusableNavbar : public UZilbNavbar
{
	GENERATED_BODY()

public:

	UZilbFocusableNavbar(const FObjectInitializer& ObjectInitializer);

	virtual void NativeConstruct() override;

	virtual void NativeOnDeactivated() override;

	UPROPERTY(BlueprintReadWrite)
	bool bFocusingNavigation;

protected:

	virtual UWidget* NativeGetDesiredFocusTarget() const override;

	virtual void OnButtonClicked_Internal(UZilbButtonBase* Button) override;

	virtual void OnButtonSelected_Internal(UZilbButtonBase* Button, bool bSelected) override;

};
