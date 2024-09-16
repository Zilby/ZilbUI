#include "ZilbUIFunctionLibrary.h"

#include "Components/RichTextBlock.h"
#include "Widgets/Text/SRichTextBlock.h"

#if !UE_SERVER
bool IsWidgetVisibleHierarchically_Internal(const TSharedPtr<SWidget> InSWidget)
{
	if (InSWidget->GetVisibility().IsVisible())
	{
		const TSharedPtr<SWidget> InSWidgetParent = InSWidget->GetParentWidget();
		return !InSWidgetParent.IsValid() || IsWidgetVisibleHierarchically_Internal(InSWidgetParent);
	}

	return false;
}
#endif

bool UZilbUIFunctionLibrary::IsWidgetVisibleHierarchically(const UWidget* InWidget)
{
#if !UE_SERVER
	if (InWidget)
	{
		const TSharedPtr<SWidget> InSWidget = InWidget->GetCachedWidget();
		return InSWidget.IsValid() && IsWidgetVisibleHierarchically_Internal(InSWidget);
	}
#endif

	return false;
}

void UZilbUIFunctionLibrary::RefreshRichText(URichTextBlock* RichTextBlock)
{
	if (RichTextBlock)
	{
		const TSharedPtr<SWidget> InSWidget = RichTextBlock->GetCachedWidget();
		if (InSWidget.IsValid())
		{
			static_cast<SRichTextBlock*>(InSWidget.Get())->Refresh();
		}
	}
}