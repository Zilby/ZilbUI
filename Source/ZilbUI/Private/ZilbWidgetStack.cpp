#include "ZilbWidgetStack.h"

#include "CommonActivatableWidget.h"

UZilbWidgetStack::UZilbWidgetStack(const FObjectInitializer& ObjectInitializer)
{
}

UCommonActivatableWidget* UZilbWidgetStack::GetTopmostWidget() const
{
	if (WidgetList.Num() > 0)
	{
		return WidgetList.Last();
	}
	return GetRootContent();
}

void UZilbWidgetStack::SetRootContentWidgetClass(TSubclassOf<UCommonActivatableWidget> WidgetClass)
{
	RootContentWidgetClass = WidgetClass;
	SynchronizeProperties();
}

bool UZilbWidgetStack::PopWidget()
{
	if (UCommonActivatableWidget* ActiveWidget = GetActiveWidget())
	{
		if (ActiveWidget != GetRootContent() && ActiveWidget->IsActivated())
		{
			ActiveWidget->DeactivateWidget();
			return true;
		}
	}
	return false;
}

void UZilbWidgetStack::ClearWidgetsInstantly()
{
	SetSwitcherIndex(0, true);
}
