#pragma once

#include "CommonActionWidget.h"
#include "CommonTextBlock.h"
#include "ZilbActionWidget.generated.h"

UCLASS()
class ZILBUI_API UZilbActionWidget : public UCommonActionWidget
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Size = 40.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ProgressImageSizeRatio = 1.0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UCommonTextStyle> TextStyle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETextTransformPolicy TransformPolicy = ETextTransformPolicy::None;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FLinearColor Color = FLinearColor::White;

	// Overrides the common input action with an unreal input action
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOverrideCommonInputAction;

	UFUNCTION(BlueprintCallable)
	void SetInputActionOverride(FName InputAction);

	UFUNCTION(BlueprintCallable)
	void SetColor(FLinearColor InColor);

	virtual void OnActionProgress(float HeldPercent) override;
	virtual void OnActionComplete() override;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(EditCondition="bOverrideCommonInputAction"))
	FName InputActionOverride;

	// Used for overlaying color onto all elements
	TSharedPtr<SBorder> MyBorder;

	TSharedPtr<STextBlock> MyText;

	virtual const FCommonInputActionDataBase* GetInputActionData() const override;

	virtual TSharedRef<SWidget> RebuildWidget() override;

	virtual void ReleaseSlateResources(bool bReleaseChildren) override;

	virtual void UpdateActionWidget() override;

	virtual FSlateBrush GetIcon() const override;

};

