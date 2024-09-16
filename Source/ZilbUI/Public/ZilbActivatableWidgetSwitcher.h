#pragma once

#include "CommonActivatableWidgetSwitcher.h"
#include "CommonAnimatedSwitcher.h"
#include "ZilbActivatableWidgetSwitcher.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActiveWidgetChanged, UWidget*, Widget, int32, Index);

// The UCommonActivatableWidgetSwitcher only works properly when not animated, this class fixes those problems.
UCLASS()
class ZILBUI_API UZilbActivatableWidgetSwitcher : public UCommonActivatableWidgetSwitcher
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bIsAnimated = true;

	/** Fires when the active widget is set */
	UPROPERTY(BlueprintAssignable)
	FOnActiveWidgetChanged OnActiveWidgetSet;

	/** Fires when the active widget displayed by the switcher changes */
	UPROPERTY(BlueprintAssignable)
	FOnActiveWidgetChanged OnActiveWidgetChanged;

	DECLARE_EVENT_OneParam(UZilbActivatableWidgetSwitcher, FOnIsTransitioningChanged, bool)
	FOnIsTransitioningChanged OnIsTransitioningChanged;

	virtual void SetActiveWidget(UWidget* Widget) override;

	void SetActiveWidget(UWidget* Widget, bool bInstant);

	virtual void SetActiveWidgetIndex(int32 Index) override;

	void SetActiveWidgetIndex(int32 Index, bool bInstant);

	virtual void ActivateNextWidget(bool bCanWrap) override;

	virtual void ActivatePreviousWidget(bool bCanWrap) override;

	/**
	 * Gets the index of the widget last set. This may differ from GetActiveWidgetIndex() as it will return
	 * the widget index most recently set, rather than that of the one currently being displayed while animating.
	 */
	int32 GetLastSetWidgetIndex() const { return ActiveWidgetIndex; }

	/**
	 * Gets the widget last set. This may differ from GetActiveWidget() as it will return the widget
	 * most recently set, rather than the one currently being displayed while animating.
	 */
	UFUNCTION(BlueprintCallable)
	UWidget* GetLastSetWidget() const { return GetWidgetAtIndex(ActiveWidgetIndex); }

protected:

	virtual void OnWidgetRebuilt() override;

	virtual void HandleSlateActiveIndexChanged(int32 ActiveIndex) override;

	virtual void HandleSlateIsTransitioningChanged(bool bIsTransitioning) override;

	UCommonActivatableWidget* GetActiveActivatableWidget() const;

	int32 GetNextWidgetIndex(int32 CurrentIndex, bool bCanWrap) const;

	int32 GetPreviousWidgetIndex(int32 CurrentIndex, bool bCanWrap) const;

};
