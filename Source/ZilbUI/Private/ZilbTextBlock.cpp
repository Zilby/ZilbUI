#include "ZilbTextBlock.h"


void UZilbTextBlock::PostLoad()
{
	FSlateColor StoredColor = GetColorAndOpacity();
	Super::PostLoad();
	if (bOverrideColorAndOpacity)
	{
		SetColorAndOpacity(StoredColor);
	}
}

void UZilbTextBlock::Serialize(FArchive& Ar)
{
#if WITH_EDITORONLY_DATA
	// Update this block if super function is updated.
	if (bOverrideColorAndOpacity && Style && Ar.IsSaving())
	{
		FSlateFontInfo TempFont;
		FSlateBrush TempStrikeBrush;
		FMargin TempMargin;
		float TempLineHeightPercentage = 1.f;
		FVector2D TempShadowOffset = FVector2D::ZeroVector;
		FLinearColor TempShadowColorAndOpacity = FLinearColor::Transparent;

		Swap(Font, TempFont);
		Swap(StrikeBrush, TempStrikeBrush);
		Swap(Margin, TempMargin);
		Swap(LineHeightPercentage, TempLineHeightPercentage);
		Swap(ShadowOffset, TempShadowOffset);
		Swap(ShadowColorAndOpacity, TempShadowColorAndOpacity);

		Super::Super::Serialize(Ar);

		Swap(TempFont, Font);
		Swap(TempStrikeBrush, StrikeBrush);
		Swap(TempMargin, Margin);
		Swap(TempLineHeightPercentage, LineHeightPercentage);
		Swap(TempShadowOffset, ShadowOffset);
		Swap(TempShadowColorAndOpacity, ShadowColorAndOpacity);

		return;
	}
#endif //if WITH_EDITORONLY_DATA

	Super::Serialize(Ar);
}

void UZilbTextBlock::UpdateFromStyle()
{
	FSlateColor StoredColor = ColorAndOpacity;
	Super::UpdateFromStyle();
	if (bOverrideColorAndOpacity)
	{
		ColorAndOpacity = StoredColor;
	}
}

#if WITH_EDITOR
bool UZilbTextBlock::CanEditChange(const FProperty* InProperty) const
{
	if (Super::Super::CanEditChange(InProperty))
	{
		if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UCommonTextBlock, ColorAndOpacity))
		{
			return !GetStyleCDO() || bOverrideColorAndOpacity;
		}
	}
	return Super::CanEditChange(InProperty);
}
#endif
