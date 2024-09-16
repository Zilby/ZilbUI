#pragma once

#include "ZilbWidgetBase.h"
#include "Components/PanelWidget.h"
#include "ZilbWidgetPanel.generated.h"

/**
 * Base class for panel widgets that can instantiate widgets
 */
UCLASS()
class ZILBUI_API UZilbWidgetPanel : public UZilbWidgetBase
{
	GENERATED_BODY()

public:

	UZilbWidgetPanel(const FObjectInitializer& ObjectInitializer);

#if WITH_EDITORONLY_DATA
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	// Begin UUserWidget Interface
	virtual void NativePreConstruct() override;
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	// End UUserWidget Interface

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UI)
	bool bAutoPopulate = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UI, meta = (EditCondition = "bAutoPopulate"))
	bool bWidgetsAreDebugOnly = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UI, meta = (EditCondition = "bAutoPopulate", UIMin = 0, ClampMin = 0))
	int32 WidgetNum = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UI)
	TSubclassOf<UUserWidget> WidgetClass = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="UI|Layout")
	FMargin SlotPadding;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="UI|Layout")
	FSlateChildSize Size;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="UI|Layout")
	TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="UI|Layout")
	TEnumAsByte<EVerticalAlignment> VerticalAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI|Layout|Grid", meta = (EditCondition = "!bFillVertically", UIMin = 1, ClampMin = 1))
	int32 Columns = 2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI|Layout|Grid", meta = (EditCondition = "bFillVertically", UIMin = 1, ClampMin = 1))
	int32 Rows = 2;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="UI|Layout|Grid")
	bool bFillVertically = false;

	UFUNCTION(BlueprintCallable)
	virtual UUserWidget* CreateSubWidget();

	UFUNCTION(BlueprintCallable)
	virtual void AddWidget(UUserWidget* Widget);

	UFUNCTION(BlueprintCallable)
	void SetChildGridPlacements();

	UFUNCTION(BlueprintCallable)
	UUserWidget* GetChildHasFocus();

	// Deselects all except for the given exempted widget
	UFUNCTION(BlueprintCallable)
	void DeselectAll(UUserWidget* Exemption);

	UFUNCTION(BlueprintCallable)
	void PopulateWidgets();

	UFUNCTION(BlueprintCallable)
	void ClearSubWidgets();

protected:

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	UPanelWidget* WidgetContainer;

	virtual UWidget* NativeGetDesiredFocusTarget() const override;

};
