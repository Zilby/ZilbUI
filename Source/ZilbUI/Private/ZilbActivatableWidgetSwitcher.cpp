#include "ZilbActivatableWidgetSwitcher.h"

#include "CommonActivatableWidget.h"

void UZilbActivatableWidgetSwitcher::SetActiveWidget(UWidget* Widget)
{
	const int32 ChildIndex = GetChildIndex(Widget);
	SetActiveWidgetIndex(ChildIndex);
}

void UZilbActivatableWidgetSwitcher::SetActiveWidget(UWidget* Widget, bool bInstant)
{
	bInstantTransition = bInstant;
	SetActiveWidget(Widget);
	bInstantTransition = !bIsAnimated;
}

void UZilbActivatableWidgetSwitcher::SetActiveWidgetIndex(int32 Index)
{
	if (Index == ActiveWidgetIndex)
		return;

	if (bInstantTransition)
	{
		if (UCommonActivatableWidget* Activatable = GetActiveActivatableWidget())
		{
			Activatable->DeactivateWidget();
		}
	}

	Super::SetActiveWidgetIndex(Index);
	OnActiveWidgetSet.Broadcast(GetWidgetAtIndex(Index), Index);

	if (bInstantTransition)
	{
		ActiveWidgetIndex = Index;
		if (UCommonActivatableWidget* Activatable = GetActiveActivatableWidget())
		{
			Activatable->ActivateWidget();
		}
	}
}

void UZilbActivatableWidgetSwitcher::SetActiveWidgetIndex(int32 Index, bool bInstant)
{
	bInstantTransition = bInstant;
	SetActiveWidgetIndex(Index);
	bInstantTransition = !bIsAnimated;
}

void UZilbActivatableWidgetSwitcher::ActivateNextWidget(bool bCanWrap)
{
	int32 Index = GetNextWidgetIndex(GetActiveWidgetIndex(), bCanWrap);
	while (!(GetWidgetAtIndex(Index)->GetIsEnabled()) && GetActiveWidgetIndex() != Index)
	{
		Index = GetNextWidgetIndex(Index, bCanWrap);
	}
	SetActiveWidgetIndex(Index);
}

void UZilbActivatableWidgetSwitcher::ActivatePreviousWidget(bool bCanWrap)
{
	int32 Index = GetPreviousWidgetIndex(GetActiveWidgetIndex(), bCanWrap);
	while (!(GetWidgetAtIndex(Index)->GetIsEnabled()) && GetActiveWidgetIndex() != Index)
	{
		Index = GetPreviousWidgetIndex(Index, bCanWrap);
	}
	SetActiveWidgetIndex(Index);
}

void UZilbActivatableWidgetSwitcher::OnWidgetRebuilt()
{
	Super::OnWidgetRebuilt();
	bInstantTransition = !bIsAnimated;
	OnActiveWidgetIndexChanged.AddLambda([this](UWidget* Widget, int32 Index)
		{
			OnActiveWidgetChanged.Broadcast(Widget, Index);
		});
}

void UZilbActivatableWidgetSwitcher::HandleSlateActiveIndexChanged(int32 ActiveIndex)
{
	// The super activates too early if it's not instant.
	// [DEPRECATED] We only want this to happen when doing initial setup (bSetOnce == false)
	if (bInstantTransition) // || !bSetOnce)
	{
		Super::HandleSlateActiveIndexChanged(ActiveIndex);
	}
	else
	{
		Super::Super::HandleSlateActiveIndexChanged(ActiveIndex);
	}
}

void UZilbActivatableWidgetSwitcher::HandleSlateIsTransitioningChanged(bool bIsTransitioning)
{
	Super::HandleSlateIsTransitioningChanged(bIsTransitioning);
	if (UCommonActivatableWidget* Activatable = GetActiveActivatableWidget())
	{
		if (bIsTransitioning)
		{
			Activatable->DeactivateWidget();
		}
		else
		{
			Activatable->ActivateWidget();
			// Not sure why but this is not getting focused by default likely due to the animation state
			if (UWidget* FocusTarget = Activatable->GetDesiredFocusTarget())
			{
				FocusTarget->SetFocus();
			}
		}
	}
	OnIsTransitioningChanged.Broadcast(bIsTransitioning);
}

UCommonActivatableWidget* UZilbActivatableWidgetSwitcher::GetActiveActivatableWidget() const
{
	return Cast<UCommonActivatableWidget>(GetActiveWidget());
}

int32 UZilbActivatableWidgetSwitcher::GetNextWidgetIndex(int32 CurrentIndex, bool bCanWrap) const
{
	if (Slots.Num() > 1)
	{
		if (CurrentIndex == Slots.Num() - 1)
		{
			if (bCanWrap)
			{
				return 0;
			}
		}
		else
		{
			return CurrentIndex + 1;
		}
	}
	return 0;
}

int32 UZilbActivatableWidgetSwitcher::GetPreviousWidgetIndex(int32 CurrentIndex, bool bCanWrap) const
{
	if (Slots.Num() > 1)
	{
		if (CurrentIndex == 0)
		{
			if (bCanWrap)
			{
				return Slots.Num() - 1;
			}
		}
		else
		{
			return CurrentIndex - 1;
		}
	}
	return 0;
}
