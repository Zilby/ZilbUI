#include "ZilbWidgetPanel.h"

#include "CommonButtonBase.h"
#include "Components/GridPanel.h"
#include "Components/GridSlot.h"
#include "Components/HorizontalBoxSlot.h"
#include "Components/UniformGridPanel.h"
#include "Components/UniformGridSlot.h"
#include "Components/VerticalBoxSlot.h"


UZilbWidgetPanel::UZilbWidgetPanel(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	Size = FSlateChildSize(ESlateSizeRule::Automatic);
}

#if WITH_EDITORONLY_DATA
void UZilbWidgetPanel::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	const FName& PropertyName = PropertyChangedEvent.GetPropertyName();

	if (IsDesignTime() || !bWidgetsAreDebugOnly)
	{
		if (PropertyName == GET_MEMBER_NAME_CHECKED(UZilbWidgetPanel, bAutoPopulate) && !bAutoPopulate)
		{
			if (WidgetContainer)
			{
				WidgetContainer->ClearChildren();
			}
			return;
		}

		if (PropertyName == GET_MEMBER_NAME_CHECKED(UZilbWidgetPanel, WidgetNum)
			|| PropertyName == GET_MEMBER_NAME_CHECKED(UZilbWidgetPanel, WidgetClass)
			|| PropertyName == GET_MEMBER_NAME_CHECKED(UZilbWidgetPanel, SlotPadding)
			|| PropertyName == GET_MEMBER_NAME_CHECKED(UZilbWidgetPanel, Size)
			|| PropertyName == GET_MEMBER_NAME_CHECKED(UZilbWidgetPanel, HorizontalAlignment)
			|| PropertyName == GET_MEMBER_NAME_CHECKED(UZilbWidgetPanel, VerticalAlignment)
			|| PropertyName == GET_MEMBER_NAME_CHECKED(UZilbWidgetPanel, Rows)
			|| PropertyName == GET_MEMBER_NAME_CHECKED(UZilbWidgetPanel, Columns)
			|| PropertyName == GET_MEMBER_NAME_CHECKED(UZilbWidgetPanel, bFillVertically))
		{
			PopulateWidgets();
		}
	}
}
#endif

void UZilbWidgetPanel::NativePreConstruct()
{
	Super::NativePreConstruct();
	if (IsDesignTime() || !bWidgetsAreDebugOnly)
	{
		PopulateWidgets();
	}
}

void UZilbWidgetPanel::NativeConstruct()
{
	Super::NativeConstruct();
}

void UZilbWidgetPanel::NativeDestruct()
{
	Super::NativeDestruct();
}

UUserWidget* UZilbWidgetPanel::CreateSubWidget()
{
	if (!WidgetClass)
		return nullptr;

	int32 Index = WidgetContainer->GetChildrenCount();
	UUserWidget* Widget = CreateWidgetInstance(*WidgetContainer, WidgetClass, FName(*(WidgetClass->GetName() + FString::Printf(TEXT("_Widget_%d"), Index))));
	AddWidget(Widget);
	return Widget;
}

void UZilbWidgetPanel::AddWidget(UUserWidget* Widget)
{
	WidgetContainer->AddChild(Widget);

	if (UHorizontalBoxSlot* WidgetSlot = Cast<UHorizontalBoxSlot>(Widget->Slot))
	{
		WidgetSlot->SetPadding(SlotPadding);
		WidgetSlot->SetSize(Size);
		WidgetSlot->SetHorizontalAlignment(HorizontalAlignment);
		WidgetSlot->SetVerticalAlignment(VerticalAlignment);
	}
	if (UVerticalBoxSlot* WidgetSlot = Cast<UVerticalBoxSlot>(Widget->Slot))
	{
		WidgetSlot->SetPadding(SlotPadding);
		WidgetSlot->SetSize(Size);
		WidgetSlot->SetHorizontalAlignment(HorizontalAlignment);
		WidgetSlot->SetVerticalAlignment(VerticalAlignment);
	}
	if (UGridSlot* WidgetSlot = Cast<UGridSlot>(Widget->Slot))
	{
		WidgetSlot->SetPadding(SlotPadding);
		WidgetSlot->SetHorizontalAlignment(HorizontalAlignment);
		WidgetSlot->SetVerticalAlignment(VerticalAlignment);
	}
	if (UUniformGridSlot* WidgetSlot = Cast<UUniformGridSlot>(Widget->Slot))
	{
		if (UUniformGridPanel* UniformGridPanel = Cast<UUniformGridPanel>(WidgetContainer))
		{
			UniformGridPanel->SetSlotPadding(SlotPadding);
		}
		WidgetSlot->SetHorizontalAlignment(HorizontalAlignment);
		WidgetSlot->SetVerticalAlignment(VerticalAlignment);
	}
	SetChildGridPlacements();
}

void UZilbWidgetPanel::SetChildGridPlacements()
{
	int32 Index = 0;
	for (auto Widget : WidgetContainer->GetAllChildren())
	{
		if (Widget->GetVisibility() == ESlateVisibility::Collapsed)
			continue;

		Columns = FMath::Max(Columns, 1);
		Rows = FMath::Max(Rows, 1);
		const int32 Column = bFillVertically ? Index / Rows : Index % Columns;
		const int32 Row = bFillVertically ? Index % Rows : Index / Columns;

		if (UGridSlot* WidgetSlot = Cast<UGridSlot>(Widget->Slot))
		{
			WidgetSlot->SetColumn(Column);
			WidgetSlot->SetRow(Row);
		}
		if (UUniformGridSlot* WidgetSlot = Cast<UUniformGridSlot>(Widget->Slot))
		{
			WidgetSlot->SetColumn(Column);
			WidgetSlot->SetRow(Row);
		}
		++Index;
	}
}

UUserWidget* UZilbWidgetPanel::GetChildHasFocus()
{
	for (auto Widget : WidgetContainer->GetAllChildren())
	{
		if (UUserWidget* UWidget = Cast<UUserWidget>(Widget))
		{
			if (UWidget->HasAnyUserFocus())
			{
				return UWidget;
			}
		}
	}
	return nullptr;
}

void UZilbWidgetPanel::DeselectAll(UUserWidget* Exemption)
{
	for (auto Widget : WidgetContainer->GetAllChildren())
	{
		if (UCommonButtonBase* Button = Cast<UCommonButtonBase>(Widget))
		{
			if (Button == Exemption)
				continue;

			Button->ClearSelection();
		}
	}
}

UWidget* UZilbWidgetPanel::NativeGetDesiredFocusTarget() const
{
	if (UWidget* FocusTarget = Super::NativeGetDesiredFocusTarget())
		return FocusTarget;

	if (WidgetContainer)
	{
		for (UWidget* Child : WidgetContainer->GetAllChildren())
		{
			if (UUserWidget* UserWidgetChild = Cast<UUserWidget>(Child))
			{
				if (UserWidgetChild->bIsFocusable && UserWidgetChild->IsVisible())
				{
					return UserWidgetChild;
				}
			}
		}
	}
	return nullptr;
}

void UZilbWidgetPanel::PopulateWidgets()
{
	if (bAutoPopulate && (IsDesignTime() || !bWidgetsAreDebugOnly))
	{
		if (WidgetContainer && IsValid(WidgetClass))
		{
			WidgetContainer->ClearChildren();
			for (int i = 0; i < WidgetNum; ++i)
			{
				CreateSubWidget();
			}
		}
	}
}

void UZilbWidgetPanel::ClearSubWidgets()
{
	if (WidgetContainer)
	{
		WidgetContainer->ClearChildren();
	}
}

