#pragma once

#include "GameFramework/HUD.h"
#include "ZilbHUD.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FZilbHUDWidgetVisibilityChangedDelegate, AZilbHUD*, HUD, bool, bIsVisible);

/**
 * Base class for HUD.
 */
UCLASS()
class ZILBUI_API AZilbHUD : public AHUD
{
	GENERATED_BODY()

public:

	AZilbHUD(const FObjectInitializer& ObjectInitializer);
};
