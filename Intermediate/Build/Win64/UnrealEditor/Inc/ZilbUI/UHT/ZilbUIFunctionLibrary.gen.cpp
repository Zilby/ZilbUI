// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZilbUI/Public/ZilbUIFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZilbUIFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UMG_API UClass* Z_Construct_UClass_URichTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ZilbUI();
	ZILBUI_API UClass* Z_Construct_UClass_UZilbUIFunctionLibrary();
	ZILBUI_API UClass* Z_Construct_UClass_UZilbUIFunctionLibrary_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UZilbUIFunctionLibrary::execRefreshRichText)
	{
		P_GET_OBJECT(URichTextBlock,Z_Param_RichTextBlock);
		P_FINISH;
		P_NATIVE_BEGIN;
		UZilbUIFunctionLibrary::RefreshRichText(Z_Param_RichTextBlock);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZilbUIFunctionLibrary::execIsWidgetVisibleHierarchically)
	{
		P_GET_OBJECT(UWidget,Z_Param_InWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZilbUIFunctionLibrary::IsWidgetVisibleHierarchically(Z_Param_InWidget);
		P_NATIVE_END;
	}
	void UZilbUIFunctionLibrary::StaticRegisterNativesUZilbUIFunctionLibrary()
	{
		UClass* Class = UZilbUIFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsWidgetVisibleHierarchically", &UZilbUIFunctionLibrary::execIsWidgetVisibleHierarchically },
			{ "RefreshRichText", &UZilbUIFunctionLibrary::execRefreshRichText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UZilbUIFunctionLibrary_IsWidgetVisibleHierarchically_Statics
	{
		struct ZilbUIFunctionLibrary_eventIsWidgetVisibleHierarchically_Parms
		{
			const UWidget* InWidget;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWidget;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbUIFunctionLibrary_IsWidgetVisibleHierarchically_Statics::NewProp_InWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZilbUIFunctionLibrary_IsWidgetVisibleHierarchically_Statics::NewProp_InWidget = { "InWidget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZilbUIFunctionLibrary_eventIsWidgetVisibleHierarchically_Parms, InWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbUIFunctionLibrary_IsWidgetVisibleHierarchically_Statics::NewProp_InWidget_MetaData), Z_Construct_UFunction_UZilbUIFunctionLibrary_IsWidgetVisibleHierarchically_Statics::NewProp_InWidget_MetaData) };
	void Z_Construct_UFunction_UZilbUIFunctionLibrary_IsWidgetVisibleHierarchically_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZilbUIFunctionLibrary_eventIsWidgetVisibleHierarchically_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZilbUIFunctionLibrary_IsWidgetVisibleHierarchically_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZilbUIFunctionLibrary_eventIsWidgetVisibleHierarchically_Parms), &Z_Construct_UFunction_UZilbUIFunctionLibrary_IsWidgetVisibleHierarchically_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZilbUIFunctionLibrary_IsWidgetVisibleHierarchically_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbUIFunctionLibrary_IsWidgetVisibleHierarchically_Statics::NewProp_InWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbUIFunctionLibrary_IsWidgetVisibleHierarchically_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbUIFunctionLibrary_IsWidgetVisibleHierarchically_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns whether this widget is visible by considering its own visiblity and its parent's visibility. */" },
#endif
		{ "ModuleRelativePath", "Public/ZilbUIFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether this widget is visible by considering its own visiblity and its parent's visibility." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbUIFunctionLibrary_IsWidgetVisibleHierarchically_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbUIFunctionLibrary, nullptr, "IsWidgetVisibleHierarchically", nullptr, nullptr, Z_Construct_UFunction_UZilbUIFunctionLibrary_IsWidgetVisibleHierarchically_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbUIFunctionLibrary_IsWidgetVisibleHierarchically_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZilbUIFunctionLibrary_IsWidgetVisibleHierarchically_Statics::ZilbUIFunctionLibrary_eventIsWidgetVisibleHierarchically_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbUIFunctionLibrary_IsWidgetVisibleHierarchically_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbUIFunctionLibrary_IsWidgetVisibleHierarchically_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbUIFunctionLibrary_IsWidgetVisibleHierarchically_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZilbUIFunctionLibrary_IsWidgetVisibleHierarchically_Statics::ZilbUIFunctionLibrary_eventIsWidgetVisibleHierarchically_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZilbUIFunctionLibrary_IsWidgetVisibleHierarchically()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbUIFunctionLibrary_IsWidgetVisibleHierarchically_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZilbUIFunctionLibrary_RefreshRichText_Statics
	{
		struct ZilbUIFunctionLibrary_eventRefreshRichText_Parms
		{
			URichTextBlock* RichTextBlock;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RichTextBlock_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RichTextBlock;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbUIFunctionLibrary_RefreshRichText_Statics::NewProp_RichTextBlock_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZilbUIFunctionLibrary_RefreshRichText_Statics::NewProp_RichTextBlock = { "RichTextBlock", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZilbUIFunctionLibrary_eventRefreshRichText_Parms, RichTextBlock), Z_Construct_UClass_URichTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbUIFunctionLibrary_RefreshRichText_Statics::NewProp_RichTextBlock_MetaData), Z_Construct_UFunction_UZilbUIFunctionLibrary_RefreshRichText_Statics::NewProp_RichTextBlock_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZilbUIFunctionLibrary_RefreshRichText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbUIFunctionLibrary_RefreshRichText_Statics::NewProp_RichTextBlock,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbUIFunctionLibrary_RefreshRichText_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Causes rich text to refresh what image it uses, for example switching between gamepad and keyboard input. */" },
#endif
		{ "ModuleRelativePath", "Public/ZilbUIFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Causes rich text to refresh what image it uses, for example switching between gamepad and keyboard input." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbUIFunctionLibrary_RefreshRichText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbUIFunctionLibrary, nullptr, "RefreshRichText", nullptr, nullptr, Z_Construct_UFunction_UZilbUIFunctionLibrary_RefreshRichText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbUIFunctionLibrary_RefreshRichText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZilbUIFunctionLibrary_RefreshRichText_Statics::ZilbUIFunctionLibrary_eventRefreshRichText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbUIFunctionLibrary_RefreshRichText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbUIFunctionLibrary_RefreshRichText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbUIFunctionLibrary_RefreshRichText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZilbUIFunctionLibrary_RefreshRichText_Statics::ZilbUIFunctionLibrary_eventRefreshRichText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZilbUIFunctionLibrary_RefreshRichText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbUIFunctionLibrary_RefreshRichText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UZilbUIFunctionLibrary);
	UClass* Z_Construct_UClass_UZilbUIFunctionLibrary_NoRegister()
	{
		return UZilbUIFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UZilbUIFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZilbUIFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ZilbUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbUIFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UZilbUIFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UZilbUIFunctionLibrary_IsWidgetVisibleHierarchically, "IsWidgetVisibleHierarchically" }, // 2562058153
		{ &Z_Construct_UFunction_UZilbUIFunctionLibrary_RefreshRichText, "RefreshRichText" }, // 551249409
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbUIFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbUIFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ZilbUIFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/ZilbUIFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZilbUIFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZilbUIFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UZilbUIFunctionLibrary_Statics::ClassParams = {
		&UZilbUIFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbUIFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UZilbUIFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UZilbUIFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UZilbUIFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZilbUIFunctionLibrary.OuterSingleton, Z_Construct_UClass_UZilbUIFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UZilbUIFunctionLibrary.OuterSingleton;
	}
	template<> ZILBUI_API UClass* StaticClass<UZilbUIFunctionLibrary>()
	{
		return UZilbUIFunctionLibrary::StaticClass();
	}
	UZilbUIFunctionLibrary::UZilbUIFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZilbUIFunctionLibrary);
	UZilbUIFunctionLibrary::~UZilbUIFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbUIFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbUIFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UZilbUIFunctionLibrary, UZilbUIFunctionLibrary::StaticClass, TEXT("UZilbUIFunctionLibrary"), &Z_Registration_Info_UClass_UZilbUIFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZilbUIFunctionLibrary), 665352362U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbUIFunctionLibrary_h_2259782533(TEXT("/Script/ZilbUI"),
		Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbUIFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbUIFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
