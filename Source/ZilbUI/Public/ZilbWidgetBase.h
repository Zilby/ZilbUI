#pragma once

#include "CommonActivatableWidget.h"
#include "Blueprint/UserWidget.h"
#include "ZilbWidgetBase.generated.h"

UCLASS()
class ZILBUI_API UZilbWidgetBase : public UCommonActivatableWidget
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDestroyedDelegate, UUserWidget*, Widget);

	UZilbWidgetBase(const FObjectInitializer& ObjectInitializer);

	// Begin UUserWidget Interface
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	// End UUserWidget Interface

	UPROPERTY(BlueprintAssignable, Category = "UI")
	FOnDestroyedDelegate OnDestroyedDelegate;

	UFUNCTION(BlueprintCallable, Category = "Visibility")
	void FadeOut(float Duration);

	UFUNCTION(BlueprintCallable, Category = "Visibility")
	void FadeIn(float Duration);

	UFUNCTION(BlueprintCallable, Category = "Input", meta = (DisplayName = "RegisterUIActionBinding"))
	void BP_RegisterUIActionBinding(FDataTableRowHandle Action, bool bConsumeInput, EInputEvent KeyEvent, FOnInputAction Callback);

protected:

	/** The interval in seconds, between interpolation updates. 0.0 implies per-frame updates. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Visibility", meta = (ClampMin = "0.0"))
	float FadeUpdateInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Visibility")
	bool bFadeInOnActivate = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Visibility")
	bool bFadeOutOnDeactivate = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Visibility")
	float DefaultFadeDuration = 0.25f;

	/**
	 * Determines whether the widget activates before or after fading in
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Animation")
	bool bDelayActivationForFade = true;

	/**
	 * Determines whether the widget deactivates before or after fading out
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Animation")
	bool bDelayDeactivationForFade = false;

	/**
	 * Whether or not this widget is currently fading in or out
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Visibility")
	bool bFadingIn;

	/**
	 * Determines whether the widget activates before or after the corresponding
	 * animation plays.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Animation")
	bool bDelayActivationForAnim = true;

	/**
	 * Determines whether the widget deactivates before or after the corresponding
	 * animation plays.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Animation")
	bool bDelayDeactivationForAnim = false;

	UPROPERTY(BlueprintReadWrite, Transient, meta = (BindWidgetAnimOptional))
	UWidgetAnimation* ActivatedAnim;

	UPROPERTY(BlueprintReadWrite, Transient, meta = (BindWidgetAnimOptional))
	UWidgetAnimation* DeactivatedAnim;

	FTimerHandle FadeTimerTickHandle;

	float LastFadeTimerTickTime;
	float FadeTimePassed;
	float FadeDuration;

	FWidgetAnimationDynamicEvent ActivatedAnimFinishedEvent;

	FWidgetAnimationDynamicEvent DeactivatedAnimFinishedEvent;

	TArray<FUIActionBindingHandle> BindingHandles;

	UFUNCTION()
	void OnActivatedAnimFinished();

	UFUNCTION()
	void OnDeactivatedAnimFinished();

	virtual void NativeOnActivated() override;

	virtual void NativeOnDeactivated() override;

	virtual FReply NativeOnFocusReceived(const FGeometry& InGeometry, const FFocusEvent& InFocusEvent) override;

	virtual void NativeOnFocusLost(const FFocusEvent& InFocusEvent) override;

	void StartFade(float Duration, bool bFadeIn);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnFadeTimerTick();
	virtual void OnFadeTimerTick_Internal();

	void OnFadeComplete();
};
