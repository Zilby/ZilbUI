#pragma once

#include "Engine/Texture2D.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ZilbUIFunctionLibrary.generated.h"

UCLASS()
class ZILBUI_API UZilbUIFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	
	/** Returns whether this widget is visible by considering its own visiblity and its parent's visibility. */
	UFUNCTION(BlueprintCallable, Category = "UI")
	static bool IsWidgetVisibleHierarchically(const UWidget* InWidget);

	/** Causes rich text to refresh what image it uses, for example switching between gamepad and keyboard input. */
	UFUNCTION(BlueprintCallable, Category = "UI")
	static void RefreshRichText(URichTextBlock* RichTextBlock);

};
