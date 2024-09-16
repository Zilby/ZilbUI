// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZilbUI/Public/ZilbActivatableWidgetSwitcher.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZilbActivatableWidgetSwitcher() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidgetSwitcher();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ZilbUI();
	ZILBUI_API UClass* Z_Construct_UClass_UZilbActivatableWidgetSwitcher();
	ZILBUI_API UClass* Z_Construct_UClass_UZilbActivatableWidgetSwitcher_NoRegister();
	ZILBUI_API UFunction* Z_Construct_UDelegateFunction_ZilbUI_OnActiveWidgetChanged__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ZilbUI_OnActiveWidgetChanged__DelegateSignature_Statics
	{
		struct _Script_ZilbUI_eventOnActiveWidgetChanged_Parms
		{
			UWidget* Widget;
			int32 Index;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ZilbUI_OnActiveWidgetChanged__DelegateSignature_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ZilbUI_OnActiveWidgetChanged__DelegateSignature_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ZilbUI_eventOnActiveWidgetChanged_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ZilbUI_OnActiveWidgetChanged__DelegateSignature_Statics::NewProp_Widget_MetaData), Z_Construct_UDelegateFunction_ZilbUI_OnActiveWidgetChanged__DelegateSignature_Statics::NewProp_Widget_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ZilbUI_OnActiveWidgetChanged__DelegateSignature_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ZilbUI_eventOnActiveWidgetChanged_Parms, Index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ZilbUI_OnActiveWidgetChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ZilbUI_OnActiveWidgetChanged__DelegateSignature_Statics::NewProp_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ZilbUI_OnActiveWidgetChanged__DelegateSignature_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ZilbUI_OnActiveWidgetChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZilbActivatableWidgetSwitcher.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ZilbUI_OnActiveWidgetChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ZilbUI, nullptr, "OnActiveWidgetChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ZilbUI_OnActiveWidgetChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ZilbUI_OnActiveWidgetChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ZilbUI_OnActiveWidgetChanged__DelegateSignature_Statics::_Script_ZilbUI_eventOnActiveWidgetChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ZilbUI_OnActiveWidgetChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ZilbUI_OnActiveWidgetChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ZilbUI_OnActiveWidgetChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ZilbUI_OnActiveWidgetChanged__DelegateSignature_Statics::_Script_ZilbUI_eventOnActiveWidgetChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ZilbUI_OnActiveWidgetChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ZilbUI_OnActiveWidgetChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnActiveWidgetChanged_DelegateWrapper(const FMulticastScriptDelegate& OnActiveWidgetChanged, UWidget* Widget, int32 Index)
{
	struct _Script_ZilbUI_eventOnActiveWidgetChanged_Parms
	{
		UWidget* Widget;
		int32 Index;
	};
	_Script_ZilbUI_eventOnActiveWidgetChanged_Parms Parms;
	Parms.Widget=Widget;
	Parms.Index=Index;
	OnActiveWidgetChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UZilbActivatableWidgetSwitcher::execGetLastSetWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWidget**)Z_Param__Result=P_THIS->GetLastSetWidget();
		P_NATIVE_END;
	}
	void UZilbActivatableWidgetSwitcher::StaticRegisterNativesUZilbActivatableWidgetSwitcher()
	{
		UClass* Class = UZilbActivatableWidgetSwitcher::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLastSetWidget", &UZilbActivatableWidgetSwitcher::execGetLastSetWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UZilbActivatableWidgetSwitcher_GetLastSetWidget_Statics
	{
		struct ZilbActivatableWidgetSwitcher_eventGetLastSetWidget_Parms
		{
			UWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbActivatableWidgetSwitcher_GetLastSetWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZilbActivatableWidgetSwitcher_GetLastSetWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZilbActivatableWidgetSwitcher_eventGetLastSetWidget_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbActivatableWidgetSwitcher_GetLastSetWidget_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UZilbActivatableWidgetSwitcher_GetLastSetWidget_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZilbActivatableWidgetSwitcher_GetLastSetWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbActivatableWidgetSwitcher_GetLastSetWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbActivatableWidgetSwitcher_GetLastSetWidget_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the widget last set. This may differ from GetActiveWidget() as it will return the widget\n\x09 * most recently set, rather than the one currently being displayed while animating.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ZilbActivatableWidgetSwitcher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the widget last set. This may differ from GetActiveWidget() as it will return the widget\nmost recently set, rather than the one currently being displayed while animating." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbActivatableWidgetSwitcher_GetLastSetWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbActivatableWidgetSwitcher, nullptr, "GetLastSetWidget", nullptr, nullptr, Z_Construct_UFunction_UZilbActivatableWidgetSwitcher_GetLastSetWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbActivatableWidgetSwitcher_GetLastSetWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZilbActivatableWidgetSwitcher_GetLastSetWidget_Statics::ZilbActivatableWidgetSwitcher_eventGetLastSetWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbActivatableWidgetSwitcher_GetLastSetWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbActivatableWidgetSwitcher_GetLastSetWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbActivatableWidgetSwitcher_GetLastSetWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZilbActivatableWidgetSwitcher_GetLastSetWidget_Statics::ZilbActivatableWidgetSwitcher_eventGetLastSetWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZilbActivatableWidgetSwitcher_GetLastSetWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbActivatableWidgetSwitcher_GetLastSetWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UZilbActivatableWidgetSwitcher);
	UClass* Z_Construct_UClass_UZilbActivatableWidgetSwitcher_NoRegister()
	{
		return UZilbActivatableWidgetSwitcher::StaticClass();
	}
	struct Z_Construct_UClass_UZilbActivatableWidgetSwitcher_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAnimated_MetaData[];
#endif
		static void NewProp_bIsAnimated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAnimated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnActiveWidgetSet_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActiveWidgetSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnActiveWidgetChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActiveWidgetChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZilbActivatableWidgetSwitcher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidgetSwitcher,
		(UObject* (*)())Z_Construct_UPackage__Script_ZilbUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbActivatableWidgetSwitcher_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UZilbActivatableWidgetSwitcher_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UZilbActivatableWidgetSwitcher_GetLastSetWidget, "GetLastSetWidget" }, // 3299419181
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbActivatableWidgetSwitcher_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbActivatableWidgetSwitcher_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The UCommonActivatableWidgetSwitcher only works properly when not animated, this class fixes those problems.\n" },
#endif
		{ "IncludePath", "ZilbActivatableWidgetSwitcher.h" },
		{ "ModuleRelativePath", "Public/ZilbActivatableWidgetSwitcher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The UCommonActivatableWidgetSwitcher only works properly when not animated, this class fixes those problems." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbActivatableWidgetSwitcher_Statics::NewProp_bIsAnimated_MetaData[] = {
		{ "Category", "ZilbActivatableWidgetSwitcher" },
		{ "ModuleRelativePath", "Public/ZilbActivatableWidgetSwitcher.h" },
	};
#endif
	void Z_Construct_UClass_UZilbActivatableWidgetSwitcher_Statics::NewProp_bIsAnimated_SetBit(void* Obj)
	{
		((UZilbActivatableWidgetSwitcher*)Obj)->bIsAnimated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZilbActivatableWidgetSwitcher_Statics::NewProp_bIsAnimated = { "bIsAnimated", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZilbActivatableWidgetSwitcher), &Z_Construct_UClass_UZilbActivatableWidgetSwitcher_Statics::NewProp_bIsAnimated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbActivatableWidgetSwitcher_Statics::NewProp_bIsAnimated_MetaData), Z_Construct_UClass_UZilbActivatableWidgetSwitcher_Statics::NewProp_bIsAnimated_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbActivatableWidgetSwitcher_Statics::NewProp_OnActiveWidgetSet_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fires when the active widget is set */" },
#endif
		{ "ModuleRelativePath", "Public/ZilbActivatableWidgetSwitcher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fires when the active widget is set" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UZilbActivatableWidgetSwitcher_Statics::NewProp_OnActiveWidgetSet = { "OnActiveWidgetSet", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbActivatableWidgetSwitcher, OnActiveWidgetSet), Z_Construct_UDelegateFunction_ZilbUI_OnActiveWidgetChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbActivatableWidgetSwitcher_Statics::NewProp_OnActiveWidgetSet_MetaData), Z_Construct_UClass_UZilbActivatableWidgetSwitcher_Statics::NewProp_OnActiveWidgetSet_MetaData) }; // 2596028836
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbActivatableWidgetSwitcher_Statics::NewProp_OnActiveWidgetChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fires when the active widget displayed by the switcher changes */" },
#endif
		{ "ModuleRelativePath", "Public/ZilbActivatableWidgetSwitcher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fires when the active widget displayed by the switcher changes" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UZilbActivatableWidgetSwitcher_Statics::NewProp_OnActiveWidgetChanged = { "OnActiveWidgetChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbActivatableWidgetSwitcher, OnActiveWidgetChanged), Z_Construct_UDelegateFunction_ZilbUI_OnActiveWidgetChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbActivatableWidgetSwitcher_Statics::NewProp_OnActiveWidgetChanged_MetaData), Z_Construct_UClass_UZilbActivatableWidgetSwitcher_Statics::NewProp_OnActiveWidgetChanged_MetaData) }; // 2596028836
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZilbActivatableWidgetSwitcher_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbActivatableWidgetSwitcher_Statics::NewProp_bIsAnimated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbActivatableWidgetSwitcher_Statics::NewProp_OnActiveWidgetSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbActivatableWidgetSwitcher_Statics::NewProp_OnActiveWidgetChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZilbActivatableWidgetSwitcher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZilbActivatableWidgetSwitcher>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UZilbActivatableWidgetSwitcher_Statics::ClassParams = {
		&UZilbActivatableWidgetSwitcher::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UZilbActivatableWidgetSwitcher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UZilbActivatableWidgetSwitcher_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbActivatableWidgetSwitcher_Statics::Class_MetaDataParams), Z_Construct_UClass_UZilbActivatableWidgetSwitcher_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbActivatableWidgetSwitcher_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UZilbActivatableWidgetSwitcher()
	{
		if (!Z_Registration_Info_UClass_UZilbActivatableWidgetSwitcher.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZilbActivatableWidgetSwitcher.OuterSingleton, Z_Construct_UClass_UZilbActivatableWidgetSwitcher_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UZilbActivatableWidgetSwitcher.OuterSingleton;
	}
	template<> ZILBUI_API UClass* StaticClass<UZilbActivatableWidgetSwitcher>()
	{
		return UZilbActivatableWidgetSwitcher::StaticClass();
	}
	UZilbActivatableWidgetSwitcher::UZilbActivatableWidgetSwitcher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZilbActivatableWidgetSwitcher);
	UZilbActivatableWidgetSwitcher::~UZilbActivatableWidgetSwitcher() {}
	struct Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbActivatableWidgetSwitcher_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbActivatableWidgetSwitcher_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UZilbActivatableWidgetSwitcher, UZilbActivatableWidgetSwitcher::StaticClass, TEXT("UZilbActivatableWidgetSwitcher"), &Z_Registration_Info_UClass_UZilbActivatableWidgetSwitcher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZilbActivatableWidgetSwitcher), 1592068431U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbActivatableWidgetSwitcher_h_2137590385(TEXT("/Script/ZilbUI"),
		Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbActivatableWidgetSwitcher_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbActivatableWidgetSwitcher_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
