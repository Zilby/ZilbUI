#pragma once

#include "ZilbWidgetBase.h"
#include "ZilbButtonBase.h"
#include "ZilbInputReceiverWidget.generated.h"

/**
 * Class with a button for receiving input
 */
UCLASS()
class ZILBUI_API UZilbInputReceiverWidget : public UZilbWidgetBase
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	UZilbButtonBase* InputReceiverButton;

	UZilbInputReceiverWidget(const FObjectInitializer& ObjectInitializer);

	virtual UWidget* NativeGetDesiredFocusTarget() const override;

};
