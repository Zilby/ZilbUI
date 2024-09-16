#include "ZilbInputReceiverWidget.h"

UZilbInputReceiverWidget::UZilbInputReceiverWidget(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

UWidget* UZilbInputReceiverWidget::NativeGetDesiredFocusTarget() const
{
	return InputReceiverButton;
}
