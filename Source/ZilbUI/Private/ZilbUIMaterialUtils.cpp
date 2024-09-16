#include "ZilbUIMaterialUtils.h"

using namespace ZilbMaterialUtils;

UZilbUIMaterialUtils::UZilbUIMaterialUtils(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UZilbUIMaterialUtils::SetMaterialAnimation(UObject* WorldContextObject, UMaterialInstanceDynamic* Mat, bool bReverse, TArray<FName> MParams, bool bLerp, bool bIgnoreCurrentState)
{
	if (!IsValid(Mat))
		return;

	if (const auto World = WorldContextObject->GetWorld())
	{
		const float WorldTime = World->GetTimeSeconds();
		for (FName MParam : MParams)
		{
			MParam = *FString::Printf(TEXT("%s%s"), *MParam.ToString(), *M_ANIM_SUFFIX);
			SetCurveParams(Mat, WorldTime, bReverse, MParam, bLerp, bIgnoreCurrentState);
		}
	}
}

float UZilbUIMaterialUtils::GetMaterialAnimationLength(UMaterialInstanceDynamic* Mat, FName MatParam, bool bReverse)
{
	if (IsValid(Mat))
	{
		MatParam = *FString::Printf(TEXT("%s%s"), *MatParam.ToString(), *M_ANIM_SUFFIX);
		const FLinearColor AnimValues = Mat->K2_GetVectorParameterValue(MatParam);
		return bReverse ? AnimValues.B : AnimValues.G;
	}
	
	return -1.0f;
}

void UZilbUIMaterialUtils::SetCurveParams(UMaterialInstanceDynamic* Mat, float WorldTime, bool bReverse, FName MParam, bool bLerp, bool bIgnoreCurrentState)
{
	const float AnimCurvingValue = bReverse ? 0 : 1;
	FLinearColor AnimValues = Mat->K2_GetVectorParameterValue(MParam);
	
	// Don't start material animation if we are currently in the same state.
	// If bIgnoreCurrentState is set, this allows resetting the material animation if playing in the same direction
	// If !bLerp is set, this allows skipping to the end of an animation if playing in the same direction
	if (AnimValues.A != AnimCurvingValue || bIgnoreCurrentState || !bLerp)
	{
		AnimValues.A = AnimCurvingValue;
		if (bLerp)
		{
			AnimValues.R = GetCurveTimeBasedOnCurrent(Mat, WorldTime, bReverse, MParam);
		}
		Mat->SetVectorParameterValue(MParam, AnimValues);
	}
}

float UZilbUIMaterialUtils::GetCurveTimeBasedOnCurrent(UMaterialInstanceDynamic* Mat, float WorldTime, bool bReverse, FName MParam)
{
	FLinearColor AnimValues = Mat->K2_GetVectorParameterValue(MParam);
	const float NewTime = bReverse ? AnimValues.G : AnimValues.B;
	const float OldTime = bReverse ? AnimValues.B : AnimValues.G;
	
	if (NewTime == 0 || OldTime == 0)
		return WorldTime;

	const float TimePassed = WorldTime - AnimValues.R; // How much time has passed since animation started
	const float PercentTimePassedOld = TimePassed / OldTime; // Percentage of time the animation completed in opposite direction
	const float PercentTimeToCompleteCurrent = 1 - FMath::Min(PercentTimePassedOld, 1.0f); // Percentage of time left to complete in opposite direction
	const float OffsetTime = PercentTimeToCompleteCurrent * NewTime; // Time already spent in current direction
	return WorldTime - OffsetTime;
}
