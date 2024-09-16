// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZilbUI/Public/ZilbInputReceiverWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZilbInputReceiverWidget() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_ZilbUI();
	ZILBUI_API UClass* Z_Construct_UClass_UZilbButtonBase_NoRegister();
	ZILBUI_API UClass* Z_Construct_UClass_UZilbInputReceiverWidget();
	ZILBUI_API UClass* Z_Construct_UClass_UZilbInputReceiverWidget_NoRegister();
	ZILBUI_API UClass* Z_Construct_UClass_UZilbWidgetBase();
// End Cross Module References
	void UZilbInputReceiverWidget::StaticRegisterNativesUZilbInputReceiverWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UZilbInputReceiverWidget);
	UClass* Z_Construct_UClass_UZilbInputReceiverWidget_NoRegister()
	{
		return UZilbInputReceiverWidget::StaticClass();
	}
	struct Z_Construct_UClass_UZilbInputReceiverWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputReceiverButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputReceiverButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZilbInputReceiverWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UZilbWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ZilbUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbInputReceiverWidget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbInputReceiverWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Class with a button for receiving input\n */" },
#endif
		{ "IncludePath", "ZilbInputReceiverWidget.h" },
		{ "ModuleRelativePath", "Public/ZilbInputReceiverWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class with a button for receiving input" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbInputReceiverWidget_Statics::NewProp_InputReceiverButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ZilbInputReceiverWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZilbInputReceiverWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZilbInputReceiverWidget_Statics::NewProp_InputReceiverButton = { "InputReceiverButton", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbInputReceiverWidget, InputReceiverButton), Z_Construct_UClass_UZilbButtonBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbInputReceiverWidget_Statics::NewProp_InputReceiverButton_MetaData), Z_Construct_UClass_UZilbInputReceiverWidget_Statics::NewProp_InputReceiverButton_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZilbInputReceiverWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbInputReceiverWidget_Statics::NewProp_InputReceiverButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZilbInputReceiverWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZilbInputReceiverWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UZilbInputReceiverWidget_Statics::ClassParams = {
		&UZilbInputReceiverWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UZilbInputReceiverWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UZilbInputReceiverWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbInputReceiverWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UZilbInputReceiverWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbInputReceiverWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UZilbInputReceiverWidget()
	{
		if (!Z_Registration_Info_UClass_UZilbInputReceiverWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZilbInputReceiverWidget.OuterSingleton, Z_Construct_UClass_UZilbInputReceiverWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UZilbInputReceiverWidget.OuterSingleton;
	}
	template<> ZILBUI_API UClass* StaticClass<UZilbInputReceiverWidget>()
	{
		return UZilbInputReceiverWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZilbInputReceiverWidget);
	UZilbInputReceiverWidget::~UZilbInputReceiverWidget() {}
	struct Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbInputReceiverWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbInputReceiverWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UZilbInputReceiverWidget, UZilbInputReceiverWidget::StaticClass, TEXT("UZilbInputReceiverWidget"), &Z_Registration_Info_UClass_UZilbInputReceiverWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZilbInputReceiverWidget), 3987425089U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbInputReceiverWidget_h_1441981292(TEXT("/Script/ZilbUI"),
		Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbInputReceiverWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbInputReceiverWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
