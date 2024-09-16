#pragma once

#include "CommonButtonBase.h"
#include "CommonTextBlock.h"
#include "ZilbButtonBase.generated.h"

class UZilbModalPrompt;

enum EButtonState
{
	Normal = 0,
	Hovered,
	Pressed,
	SelectedNormal,
	SelectedHovered,
	SelectedPressed,
	Disabled
};

UCLASS()
class ZILBUI_API UZilbButtonBase : public UCommonButtonBase
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input)
	bool bClickRequiresHold;

	UPROPERTY(BlueprintReadWrite, Category = Focus)
	UWidget* FocusOverride;

	UZilbButtonBase(const FObjectInitializer& ObjectInitializer);

	virtual void NativePreConstruct() override;

	virtual void NativeConstruct() override;

	virtual void SetIsEnabled(bool bInIsEnabled) override;

	virtual void SetIsInteractionEnabled(bool bInIsInteractionEnabled) override;

	virtual void SetVisibility(ESlateVisibility InVisibility) override;

	virtual void NativeOnCurrentTextStyleChanged() override;

	virtual void NativeOnHovered() override;

	virtual void NativeOnUnhovered() override;

	virtual void NativeOnPressed() override;

	virtual void NativeOnReleased() override;

	virtual void NativeOnClicked() override;

	virtual void NativeOnSelected(bool bBroadcast) override;

	virtual void NativeOnDeselected(bool bBroadcast) override;

	virtual void BindTriggeringInputActionToClick() override;

	UFUNCTION()
	void HandleInputActionTriggered();

	EButtonState GetCurrentButtonState() const;

	UFUNCTION(BlueprintCallable)
	FText GetText() const { return TextLabel; };

	UFUNCTION(BlueprintCallable)
	void SetText(FText Text);

	UFUNCTION(BlueprintCallable)
	void SetGamepadText(FText Text);

	/**
	 * Executes a button click without user input.
	 */
	UFUNCTION(BlueprintCallable)
	void VirtualClick();

	DECLARE_EVENT_OneParam(UZilbButtonBase, FOnActionHeldEvent, float);
	FOnActionHeldEvent& OnActionHeld() const { return OnActionHeldEvent; }
	FCommonButtonEvent& OnInputActionTriggered() const { return OnInputActionTriggeredEvent; }

	mutable FOnActionHeldEvent OnActionHeldEvent;
	mutable FCommonButtonEvent OnInputActionTriggeredEvent;

protected:

	UPROPERTY(BlueprintReadWrite, Transient, meta = (BindWidgetAnimOptional))
	UWidgetAnimation* HoveredAnim;

	UPROPERTY(BlueprintReadWrite, Transient, meta = (BindWidgetAnimOptional))
	UWidgetAnimation* PressedAnim;

	UPROPERTY(BlueprintReadWrite, Transient, meta = (BindWidgetAnimOptional))
	UWidgetAnimation* SelectedAnim;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget, OptionalWidget = true))
	UCommonTextBlock* ButtonText;

	/**
	 * Subwidget that will only show when user is using mouse and keyboard.
	 */
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget, OptionalWidget = true))
	UWidget* KeyboardOnlyWidgetContainer;

	/**
	 * Subwidget that will only show when user is using gamepad.
	 */
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget, OptionalWidget = true))
	UWidget* GamepadOnlyWidgetContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ZilbButton|Style")
	bool bSetRenderOpacityOnDisable = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ZilbButton|Style", meta = (EditCondition = "bSetRenderOpacityOnDisable"))
	float EnabledRenderOpacity = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ZilbButton|Style", meta = (EditCondition = "bSetRenderOpacityOnDisable"))
	float DisabledRenderOpacity = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ZilbButton|Text")
	FText TextLabel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ZilbButton|Text")
	bool bUseDifferentTextOnGamepad = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ZilbButton|Text", meta = (EditCondition = "bUseDifferentTextOnGamepad"))
	FText GamepadTextLabel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ZilbButton|Text")
	bool bUseDifferentTextWhenDisabled = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ZilbButton|Text", meta = (EditCondition = "bUseDifferentTextWhenDisabled"))
	FText DisabledTextLabel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ZilbButton|Text")
	ETextTransformPolicy TransformPolicy;

	// Added override so we don't need to add multiple styles just for color variations.
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ZilbButton|Text")
	bool bOverrideTextStyleColors;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ZilbButton|Text|Normal", meta = (EditCondition = "bOverrideTextStyleColors"))
	FSlateColor NormalTextColor;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ZilbButton|Text|Normal", meta = (EditCondition = "bOverrideTextStyleColors"))
	FSlateColor HoveredTextColor;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ZilbButton|Text|Normal", meta = (EditCondition = "bOverrideTextStyleColors"))
	FSlateColor PressedTextColor;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ZilbButton|Text|Selected", meta = (EditCondition = "bOverrideTextStyleColors && bSelectable"))
	FSlateColor SelectedNormalTextColor;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ZilbButton|Text|Selected", meta = (EditCondition = "bOverrideTextStyleColors && bSelectable"))
	FSlateColor SelectedHoveredTextColor;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ZilbButton|Text|Selected", meta = (EditCondition = "bOverrideTextStyleColors && bSelectable"))
	FSlateColor SelectedPressedTextColor;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ZilbButton|Text|Disabled", meta = (EditCondition = "bOverrideTextStyleColors"))
	FSlateColor DisabledTextColor;

	UPROPERTY(Transient)
	FTimerHandle HoldTimerTickHandle;

	UPROPERTY(Transient)
	float LastHoldTimerTickTime;

	UPROPERTY(Transient)
	float HoldTime = 0.5f;

	UPROPERTY(Transient)
	bool bHoldCompleted;

	UFUNCTION()
	void OnHoldTimerTick();

	virtual void UpdateButtonText();

	virtual void UpdateWidgetContainers();

	virtual void UpdateInputActionWidget() override;

	virtual void UpdateInputActionWidgetVisibility() override;

	virtual void NativeOnActionProgress(float HeldPercent) override;

	virtual void OnInputMethodChanged(ECommonInputType CurrentInputType) override;

	virtual FReply NativeOnFocusReceived(const FGeometry& InGeometry, const FFocusEvent& InFocusEvent) override;

	virtual void NativeOnFocusLost(const FFocusEvent& InFocusEvent) override;
};
