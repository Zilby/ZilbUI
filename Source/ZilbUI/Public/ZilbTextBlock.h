#pragma once

#include "CommonTextBlock.h"
#include "ZilbTextBlock.generated.h"

UCLASS()
class ZILBUI_API UZilbTextBlock : public UCommonTextBlock
{
	GENERATED_BODY()
public:
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category=Appearance)
	bool bOverrideColorAndOpacity;

	virtual void PostLoad() override;
	virtual void Serialize(FArchive& Ar) override;

protected:
	virtual void UpdateFromStyle() override;

#if WITH_EDITOR
	virtual bool CanEditChange(const FProperty* InProperty) const override;
#endif

};
