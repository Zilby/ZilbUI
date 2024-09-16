// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZilbUI/Public/ZilbActionWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZilbActionWidget() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActionWidget();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextStyle_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextTransformPolicy();
	UPackage* Z_Construct_UPackage__Script_ZilbUI();
	ZILBUI_API UClass* Z_Construct_UClass_UZilbActionWidget();
	ZILBUI_API UClass* Z_Construct_UClass_UZilbActionWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UZilbActionWidget::execSetColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColor(Z_Param_InColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZilbActionWidget::execSetInputActionOverride)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InputAction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputActionOverride(Z_Param_InputAction);
		P_NATIVE_END;
	}
	void UZilbActionWidget::StaticRegisterNativesUZilbActionWidget()
	{
		UClass* Class = UZilbActionWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetColor", &UZilbActionWidget::execSetColor },
			{ "SetInputActionOverride", &UZilbActionWidget::execSetInputActionOverride },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UZilbActionWidget_SetColor_Statics
	{
		struct ZilbActionWidget_eventSetColor_Parms
		{
			FLinearColor InColor;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZilbActionWidget_SetColor_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZilbActionWidget_eventSetColor_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZilbActionWidget_SetColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbActionWidget_SetColor_Statics::NewProp_InColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbActionWidget_SetColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZilbActionWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbActionWidget_SetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbActionWidget, nullptr, "SetColor", nullptr, nullptr, Z_Construct_UFunction_UZilbActionWidget_SetColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbActionWidget_SetColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZilbActionWidget_SetColor_Statics::ZilbActionWidget_eventSetColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbActionWidget_SetColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbActionWidget_SetColor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbActionWidget_SetColor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZilbActionWidget_SetColor_Statics::ZilbActionWidget_eventSetColor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZilbActionWidget_SetColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbActionWidget_SetColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZilbActionWidget_SetInputActionOverride_Statics
	{
		struct ZilbActionWidget_eventSetInputActionOverride_Parms
		{
			FName InputAction;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UZilbActionWidget_SetInputActionOverride_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZilbActionWidget_eventSetInputActionOverride_Parms, InputAction), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZilbActionWidget_SetInputActionOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbActionWidget_SetInputActionOverride_Statics::NewProp_InputAction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbActionWidget_SetInputActionOverride_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZilbActionWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbActionWidget_SetInputActionOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbActionWidget, nullptr, "SetInputActionOverride", nullptr, nullptr, Z_Construct_UFunction_UZilbActionWidget_SetInputActionOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbActionWidget_SetInputActionOverride_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZilbActionWidget_SetInputActionOverride_Statics::ZilbActionWidget_eventSetInputActionOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbActionWidget_SetInputActionOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbActionWidget_SetInputActionOverride_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbActionWidget_SetInputActionOverride_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZilbActionWidget_SetInputActionOverride_Statics::ZilbActionWidget_eventSetInputActionOverride_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZilbActionWidget_SetInputActionOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbActionWidget_SetInputActionOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UZilbActionWidget);
	UClass* Z_Construct_UClass_UZilbActionWidget_NoRegister()
	{
		return UZilbActionWidget::StaticClass();
	}
	struct Z_Construct_UClass_UZilbActionWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgressImageSizeRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProgressImageSizeRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TextStyle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransformPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TransformPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCommonInputAction_MetaData[];
#endif
		static void NewProp_bOverrideCommonInputAction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCommonInputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputActionOverride_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputActionOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZilbActionWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonActionWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ZilbUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbActionWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UZilbActionWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UZilbActionWidget_SetColor, "SetColor" }, // 3213162120
		{ &Z_Construct_UFunction_UZilbActionWidget_SetInputActionOverride, "SetInputActionOverride" }, // 685366463
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbActionWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbActionWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ZilbActionWidget.h" },
		{ "ModuleRelativePath", "Public/ZilbActionWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "ZilbActionWidget" },
		{ "ModuleRelativePath", "Public/ZilbActionWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbActionWidget, Size), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_Size_MetaData), Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_Size_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_ProgressImageSizeRatio_MetaData[] = {
		{ "Category", "ZilbActionWidget" },
		{ "ModuleRelativePath", "Public/ZilbActionWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_ProgressImageSizeRatio = { "ProgressImageSizeRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbActionWidget, ProgressImageSizeRatio), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_ProgressImageSizeRatio_MetaData), Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_ProgressImageSizeRatio_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_TextStyle_MetaData[] = {
		{ "Category", "ZilbActionWidget" },
		{ "ModuleRelativePath", "Public/ZilbActionWidget.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_TextStyle = { "TextStyle", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbActionWidget, TextStyle), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonTextStyle_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_TextStyle_MetaData), Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_TextStyle_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_TransformPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_TransformPolicy_MetaData[] = {
		{ "Category", "ZilbActionWidget" },
		{ "ModuleRelativePath", "Public/ZilbActionWidget.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_TransformPolicy = { "TransformPolicy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbActionWidget, TransformPolicy), Z_Construct_UEnum_SlateCore_ETextTransformPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_TransformPolicy_MetaData), Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_TransformPolicy_MetaData) }; // 2229535241
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "ZilbActionWidget" },
		{ "ModuleRelativePath", "Public/ZilbActionWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbActionWidget, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_Color_MetaData), Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_Color_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_bOverrideCommonInputAction_MetaData[] = {
		{ "Category", "ZilbActionWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Overrides the common input action with an unreal input action\n" },
#endif
		{ "ModuleRelativePath", "Public/ZilbActionWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overrides the common input action with an unreal input action" },
#endif
	};
#endif
	void Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_bOverrideCommonInputAction_SetBit(void* Obj)
	{
		((UZilbActionWidget*)Obj)->bOverrideCommonInputAction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_bOverrideCommonInputAction = { "bOverrideCommonInputAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZilbActionWidget), &Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_bOverrideCommonInputAction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_bOverrideCommonInputAction_MetaData), Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_bOverrideCommonInputAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_InputActionOverride_MetaData[] = {
		{ "Category", "ZilbActionWidget" },
		{ "EditCondition", "bOverrideCommonInputAction" },
		{ "ModuleRelativePath", "Public/ZilbActionWidget.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_InputActionOverride = { "InputActionOverride", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbActionWidget, InputActionOverride), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_InputActionOverride_MetaData), Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_InputActionOverride_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZilbActionWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_ProgressImageSizeRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_TextStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_TransformPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_TransformPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_bOverrideCommonInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbActionWidget_Statics::NewProp_InputActionOverride,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZilbActionWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZilbActionWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UZilbActionWidget_Statics::ClassParams = {
		&UZilbActionWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UZilbActionWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UZilbActionWidget_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbActionWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UZilbActionWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbActionWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UZilbActionWidget()
	{
		if (!Z_Registration_Info_UClass_UZilbActionWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZilbActionWidget.OuterSingleton, Z_Construct_UClass_UZilbActionWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UZilbActionWidget.OuterSingleton;
	}
	template<> ZILBUI_API UClass* StaticClass<UZilbActionWidget>()
	{
		return UZilbActionWidget::StaticClass();
	}
	UZilbActionWidget::UZilbActionWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZilbActionWidget);
	UZilbActionWidget::~UZilbActionWidget() {}
	struct Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbActionWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbActionWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UZilbActionWidget, UZilbActionWidget::StaticClass, TEXT("UZilbActionWidget"), &Z_Registration_Info_UClass_UZilbActionWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZilbActionWidget), 2257372379U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbActionWidget_h_1725281766(TEXT("/Script/ZilbUI"),
		Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbActionWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbActionWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
