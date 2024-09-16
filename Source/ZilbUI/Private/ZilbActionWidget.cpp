#include "ZilbActionWidget.h"

#include "CommonInputSubsystem.h"
#include "CommonUITypes.h"
#include "GameFramework/InputSettings.h"
#include "Widgets/Images/SImage.h"


void UZilbActionWidget::SetInputActionOverride(FName InputAction)
{
	bOverrideCommonInputAction = true;
	InputActionOverride = InputAction;
	UpdateActionWidget();
}

void UZilbActionWidget::SetColor(FLinearColor InColor)
{
	Color = InColor;
	if (MyBorder)
	{
		MyBorder->SetColorAndOpacity(Color);
	}
}

void UZilbActionWidget::OnActionProgress(float HeldPercent)
{
	Super::OnActionProgress(HeldPercent);
	if (MyIcon)
	{
		FLinearColor HeldColor = HeldPercent > 0 && HeldPercent < 1 ? FLinearColor::Gray : FLinearColor::White;
		MyIcon->SetColorAndOpacity(HeldColor);
	}
}

void UZilbActionWidget::OnActionComplete()
{
	Super::OnActionComplete();
	if (MyIcon)
	{
		MyIcon->SetColorAndOpacity(FLinearColor::White);
	}
}

const FCommonInputActionDataBase* UZilbActionWidget::GetInputActionData() const
{
	if (!bOverrideCommonInputAction)
		return Super::GetInputActionData();

	FCommonInputActionDataBase* InputActionData = new FCommonInputActionDataBase();
	InputActionData->DisplayName = FText::FromName(InputActionOverride);
	TArray<FInputActionKeyMapping> OutMappings;
	UInputSettings::GetInputSettings()->GetActionMappingByName(InputActionOverride, OutMappings);
	for (FInputActionKeyMapping Mapping : OutMappings)
	{
		FCommonInputTypeInfo Info;
		Info.SetKey(Mapping.Key);
		if (Mapping.Key.IsGamepadKey())
		{
			InputActionData->DefaultGamepadInputTypeInfo = Info;
		}
		else
		{
			InputActionData->KeyboardInputTypeInfo = Info;
		}
	}
	return InputActionData;
}

TSharedRef<SWidget> UZilbActionWidget::RebuildWidget()
{
	if (!IsDesignTime() && ProgressDynamicMaterial == nullptr)
	{
		UMaterialInstanceDynamic* const ParentMaterialDynamic = Cast<UMaterialInstanceDynamic>(ProgressMaterialBrush.GetResourceObject());
		if (ParentMaterialDynamic == nullptr)
		{
			UMaterialInterface* ParentMaterial = Cast<UMaterialInterface>(ProgressMaterialBrush.GetResourceObject());
			if (ParentMaterial)
			{
				ProgressDynamicMaterial = UMaterialInstanceDynamic::Create(ParentMaterial, nullptr);
				ProgressMaterialBrush.SetResourceObject(ProgressDynamicMaterial);
			}
			else
			{
				ProgressDynamicMaterial = nullptr;
			}
		}
	}

	MyBorder = SNew(SBorder)
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Fill)
		.BorderImage(FCoreStyle::Get().GetBrush("NoBorder"))
		.Padding(0)
		.ColorAndOpacity(Color);

	MyBorder->SetContent(
		SNew(SOverlay)
		+ SOverlay::Slot()
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			[
				SAssignNew(MyKeyBox, SBox)
				.WidthOverride(Size)
				.HeightOverride(Size)
			]
		+ SOverlay::Slot()
			.HAlign(HAlign_Center)
			.VAlign(VAlign_Center)
			.Padding(Size / 4, 0, Size / 4, 0)
			[
				SAssignNew(MyText, STextBlock)
				.Visibility(EVisibility::Collapsed)
				.TransformPolicy(TransformPolicy)
			]);

	MyKeyBox->SetContent(
		SNew(SOverlay)
		+ SOverlay::Slot()
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Fill)
		[
			SAssignNew(MyIconRim, SImage)
			.Image(&IconRimBrush)
		]
		+ SOverlay::Slot()
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Fill)
		[
			SAssignNew(MyIcon, SImage)
			.Image(&Icon)
		]
		+ SOverlay::Slot()
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Fill)
		.Padding(FMargin(Size - (Size * ProgressImageSizeRatio)))
		[
			SAssignNew(MyProgressImage, SImage)
			.Image(&ProgressMaterialBrush)
		]);

	if (TextStyle)
	{
		if (const auto TextStyleCDO = Cast<UCommonTextStyle>(TextStyle->ClassDefaultObject))
		{
			MyText->SetFont(TextStyleCDO->Font);
			MyText->SetStrikeBrush(&TextStyleCDO->StrikeBrush);
			MyText->SetMargin(TextStyleCDO->Margin);
			MyText->SetLineHeightPercentage(TextStyleCDO->LineHeightPercentage);
			MyText->SetColorAndOpacity(TextStyleCDO->Color);

			if (TextStyleCDO->bUsesDropShadow)
			{
				MyText->SetShadowOffset(TextStyleCDO->ShadowOffset);
				MyText->SetShadowColorAndOpacity(TextStyleCDO->ShadowColor);
			}
			else
			{
				MyText->SetShadowOffset(FVector2D::ZeroVector);
				MyText->SetShadowColorAndOpacity(FLinearColor::Transparent);
			}
		}
	}

	return MyBorder.ToSharedRef();
}

void UZilbActionWidget::ReleaseSlateResources(bool bReleaseChildren)
{
	MyBorder.Reset();
	MyText.Reset();
	Super::ReleaseSlateResources(bReleaseChildren);
}

void UZilbActionWidget::UpdateActionWidget()
{
	Super::UpdateActionWidget();
	if (!IsDesignTime() && GetWorld())
	{
		const UCommonInputSubsystem* CommonInputSubsystem = GetInputSubsystem();
		if (GetGameInstance() && ensure(CommonInputSubsystem) && CommonInputSubsystem->ShouldShowInputKeys())
		{
			if (MyKeyBox.IsValid())
			{
				float Padding = IsHeldAction() ? (Size * ProgressImageSizeRatio) / 5.0f : 0;
				MyKeyBox->SetWidthOverride(Size + (Padding * 2));
				MyKeyBox->SetPadding(FMargin(Padding, 0.0f));
				MyKeyBox->Invalidate(EInvalidateWidget::LayoutAndVolatility);
			}
			if (MyText.IsValid())
			{
				if (const FCommonInputActionDataBase* InputActionData = GetInputActionData())
				{
					if (Icon.DrawAs == ESlateBrushDrawType::Box ||
						Icon.DrawAs == ESlateBrushDrawType::RoundedBox ||
						Icon.DrawAs == ESlateBrushDrawType::Border)
					{
						const auto InputInfo = InputActionData->GetCurrentInputTypeInfo(CommonInputSubsystem);
						if (const auto KeyDetails = EKeys::GetKeyDetails(InputInfo.GetKey()))
						{
							MyText->SetText(KeyDetails->GetDisplayName(false));
							MyText->SetVisibility(EVisibility::Visible);
						}
						if (MyIcon.IsValid())
						{
							MyIcon->SetDesiredSizeOverride(FVector2d(FMath::Min(Size, Icon.GetImageSize().X), FMath::Min(Size, Icon.GetImageSize().Y)));
							MyIcon->Invalidate(EInvalidateWidgetReason::LayoutAndVolatility);
						}
					}
					else
					{
						MyText->SetText(FText::GetEmpty());
						MyText->SetVisibility(EVisibility::Collapsed);
					}
					MyText->Invalidate(EInvalidateWidget::LayoutAndVolatility);
				}
			}
		}
		if (MyBorder.IsValid())
		{
			MyBorder->Invalidate(EInvalidateWidget::LayoutAndVolatility);
		}
	}
}

FSlateBrush UZilbActionWidget::GetIcon() const
{
	if (!bOverrideCommonInputAction)
		return Super::GetIcon();

	FSlateBrush SlateBrush;
	TArray<FKey> Keys;
	const UCommonInputSubsystem* CommonInputSubsystem = GetInputSubsystem();
	if (const FCommonInputActionDataBase* InputActionData = GetInputActionData())
	{
		const FCommonInputTypeInfo& TypeInfo = InputActionData->GetCurrentInputTypeInfo(CommonInputSubsystem);
		Keys.Add(TypeInfo.GetKey());
	}
	if (UCommonInputPlatformSettings::Get()->TryGetInputBrush(SlateBrush, Keys, CommonInputSubsystem->GetCurrentInputType(), CommonInputSubsystem->GetCurrentGamepadName()))
	{
		return SlateBrush;
	}

	return *FStyleDefaults::GetNoBrush();
}
