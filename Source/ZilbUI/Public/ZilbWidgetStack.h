#pragma once

#include "Widgets/CommonActivatableWidgetContainer.h"
#include "ZilbWidgetStack.generated.h"


/**
 * UCommonActivatableWidgetStack pools its widgets in such a way that they are destroyed and recreated
 * when they are inactive. Only use this class for showing one-off widgets that don't need to preserve state.
 */
UCLASS()
class ZILBUI_API UZilbWidgetStack : public UCommonActivatableWidgetStack
{
	GENERATED_BODY()
public:
	UZilbWidgetStack(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable)
	int32 GetWidgetCount() const { return GetNumWidgets(); }

	// Returns the topmost widget in the stack. This may be different from GetActiveWidget() if the active widget is animating in/out.
	UFUNCTION(BlueprintCallable)
	UCommonActivatableWidget* GetTopmostWidget() const;

	UFUNCTION(BlueprintCallable)
	void SetRootContentWidgetClass(TSubclassOf<UCommonActivatableWidget> WidgetClass);

	// Pops the currently active widget, unless it's the root content widget.
	UFUNCTION(BlueprintCallable)
	bool PopWidget();

	UFUNCTION(BlueprintCallable)
	void ClearWidgetsInstantly();

private:

	bool bIsTransitioning = false;
};
