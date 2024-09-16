#pragma once

#include "ZilbWidgetBase.h"
#include "ZilbButtonBase.h"
#include "ZilbActivatableWidgetSwitcher.h"
#include "ZilbNavbar.generated.h"

/**
 * Base class for navigation bar widget that transitions between widgets using buttons and input actions.
 */
UCLASS()
class ZILBUI_API UZilbNavbar : public UZilbWidgetBase
{
	GENERATED_BODY()

public:

	UZilbNavbar(const FObjectInitializer& ObjectInitializer);

#if WITH_EDITORONLY_DATA
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	// Begin UUserWidget Interface
	virtual void NativePreConstruct() override;
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	// End UUserWidget Interface

	virtual void NativeOnActivated() override;

	UPROPERTY(BlueprintReadWrite, Transient, meta = (BindWidgetAnimOptional))
	UWidgetAnimation* ShowAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UI)
	bool bCanWrap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UI)
	bool bAutoPopulate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UI, meta = (EditCondition = "bAutoPopulate", UIMin = 0, ClampMin = 0))
	int32 WidgetNum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UI, meta = (EditCondition = "bAutoPopulate"))
	TSubclassOf<UZilbButtonBase> ButtonClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UI, meta = (EditCondition = "bAutoPopulate"))
	TSubclassOf<UUserWidget> WidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (ExposeOnSpawn = true, RowType = CommonInputActionDataBase))
	FDataTableRowHandle PreviousInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (ExposeOnSpawn = true, RowType = CommonInputActionDataBase))
	FDataTableRowHandle NextInputAction;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnPreviousInput();
	virtual void OnPreviousInput_Internal();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnNextInput();
	virtual void OnNextInput_Internal();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetActiveWidget(UWidget* Widget, bool bDisableAnimation = false);
	virtual void SetActiveWidget_Internal(UWidget* Widget, bool bDisableAnimation = false);

protected:

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	UZilbActivatableWidgetSwitcher* WidgetSwitcher;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	UPanelWidget* ButtonContainer;

	UPROPERTY(BlueprintReadOnly, Category = Input, meta = (BindWidget, OptionalWidget = true))
	UCommonActionWidget* PreviousInputActionWidget;

	UPROPERTY(BlueprintReadOnly, Category = Input, meta = (BindWidget, OptionalWidget = true))
	UCommonActionWidget* NextInputActionWidget;

	virtual TSharedRef<SWidget> RebuildWidget() override;

	virtual void ReleaseSlateResources(bool bReleaseChildren) override;

	virtual UWidget* NativeGetDesiredFocusTarget() const override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnButtonClicked(UZilbButtonBase* Button);
	virtual void OnButtonClicked_Internal(UZilbButtonBase* Button);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnButtonSelected(UZilbButtonBase* Button, bool bSelected);
	virtual void OnButtonSelected_Internal(UZilbButtonBase* Button, bool bSelected);

	UFUNCTION()
	void UpdateInputActionWidgetsVisibility(ECommonInputType CurrentInputType);

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "UpdateInputActionWidgetsVisibility"))
	void BP_UpdateInputActionWidgetsVisibility(ECommonInputType CurrentInputType);

	UFUNCTION()
	void OnActiveWidgetSet(UWidget* Widget, int32 Index);

	UFUNCTION()
	void OnIsTransitioningChanged(bool bIsTransitioning);

	/**
	 * Gets the currently active button.
	 * During selection this is the button currently being transitioned to.
	 */
	UZilbButtonBase* GetCurrentlyActiveButton() const;

	UWidget* GetCurrentlyActiveWidget() const;

	void PopulateWidgets();

	void SetNavbarVisibility(bool bHide);

private:

	FUIActionBindingHandle PreviousBindingHandle;
	FUIActionBindingHandle NextBindingHandle;

	UPROPERTY(Transient)
	UButton* FocusGuard;

	TSharedPtr<SOverlay> MyOverlay;

	bool bHidden;

};
