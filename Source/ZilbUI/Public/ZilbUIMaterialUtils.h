#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"

#include "ZilbUIMaterialUtils.generated.h"

namespace ZilbMaterialUtils
{
	/**
	 * Appended to material property to obtain the following anim vector values:
	 *
	 * R - The current time to start the curve at relative to world time.
	 * G - How many seconds it takes to play forward.
	 * B - How many seconds it takes to play reverse.
	 * A - Whether to reverse the animation.
	 */
	static const FString M_ANIM_SUFFIX = "Anim";

	// Material properties

	static const FName M_COLOR(TEXT("Color"));
	static const FName M_OPACITY(TEXT("Opacity"));
}

UCLASS()
class UZilbUIMaterialUtils : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:

	/**
	* Sets the material animation for the given material's parameters.
	*
	* @param bLerp - Whether the animation should change states gradually or instantaneously.
	* @param bIgnoreCurrentState - Whether we should ignore the current state of the curve animation.
	*/
	UFUNCTION(BlueprintCallable, Category = "Material Animation")
	static void SetMaterialAnimation(UObject* WorldContextObject, UMaterialInstanceDynamic* Mat, bool bReverse, TArray<FName> MParams, bool bLerp = true, bool bIgnoreCurrentState = false);

	UFUNCTION(BlueprintCallable, Category = "Material Animation")
	static float GetMaterialAnimationLength(UMaterialInstanceDynamic* Mat, FName MatParam, bool bReverse = false);

private:

	/**
	* Sets the curve params for the given material based on the curve state.
	*/
	static void SetCurveParams(UMaterialInstanceDynamic* Mat, float WorldTime, bool bReverse, FName MParam, bool bLerp, bool bIgnoreCurrentState);

	/**
	* Gets the remaining curve time based on the current state of the curve.
	* Useful when swapping from playing forward to reverse (or vice versa) before a curve has completed.
	* Assumes curves have been normalized and are using curve times set in the material.
	*/
	static float GetCurveTimeBasedOnCurrent(UMaterialInstanceDynamic* Mat, float WorldTime, bool bReverse, FName MParam);

};
