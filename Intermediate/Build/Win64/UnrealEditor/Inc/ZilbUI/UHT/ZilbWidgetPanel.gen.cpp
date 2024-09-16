// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZilbUI/Public/ZilbWidgetPanel.h"
#include "Components/SlateWrapperTypes.h"
#include "Layout/Margin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZilbWidgetPanel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FSlateChildSize();
	UPackage* Z_Construct_UPackage__Script_ZilbUI();
	ZILBUI_API UClass* Z_Construct_UClass_UZilbWidgetBase();
	ZILBUI_API UClass* Z_Construct_UClass_UZilbWidgetPanel();
	ZILBUI_API UClass* Z_Construct_UClass_UZilbWidgetPanel_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UZilbWidgetPanel::execClearSubWidgets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearSubWidgets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZilbWidgetPanel::execPopulateWidgets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PopulateWidgets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZilbWidgetPanel::execDeselectAll)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_Exemption);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeselectAll(Z_Param_Exemption);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZilbWidgetPanel::execGetChildHasFocus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=P_THIS->GetChildHasFocus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZilbWidgetPanel::execSetChildGridPlacements)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChildGridPlacements();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZilbWidgetPanel::execAddWidget)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddWidget(Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZilbWidgetPanel::execCreateSubWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=P_THIS->CreateSubWidget();
		P_NATIVE_END;
	}
	void UZilbWidgetPanel::StaticRegisterNativesUZilbWidgetPanel()
	{
		UClass* Class = UZilbWidgetPanel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddWidget", &UZilbWidgetPanel::execAddWidget },
			{ "ClearSubWidgets", &UZilbWidgetPanel::execClearSubWidgets },
			{ "CreateSubWidget", &UZilbWidgetPanel::execCreateSubWidget },
			{ "DeselectAll", &UZilbWidgetPanel::execDeselectAll },
			{ "GetChildHasFocus", &UZilbWidgetPanel::execGetChildHasFocus },
			{ "PopulateWidgets", &UZilbWidgetPanel::execPopulateWidgets },
			{ "SetChildGridPlacements", &UZilbWidgetPanel::execSetChildGridPlacements },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UZilbWidgetPanel_AddWidget_Statics
	{
		struct ZilbWidgetPanel_eventAddWidget_Parms
		{
			UUserWidget* Widget;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbWidgetPanel_AddWidget_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZilbWidgetPanel_AddWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZilbWidgetPanel_eventAddWidget_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetPanel_AddWidget_Statics::NewProp_Widget_MetaData), Z_Construct_UFunction_UZilbWidgetPanel_AddWidget_Statics::NewProp_Widget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZilbWidgetPanel_AddWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbWidgetPanel_AddWidget_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbWidgetPanel_AddWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZilbWidgetPanel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbWidgetPanel_AddWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbWidgetPanel, nullptr, "AddWidget", nullptr, nullptr, Z_Construct_UFunction_UZilbWidgetPanel_AddWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetPanel_AddWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZilbWidgetPanel_AddWidget_Statics::ZilbWidgetPanel_eventAddWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetPanel_AddWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbWidgetPanel_AddWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetPanel_AddWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZilbWidgetPanel_AddWidget_Statics::ZilbWidgetPanel_eventAddWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZilbWidgetPanel_AddWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbWidgetPanel_AddWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZilbWidgetPanel_ClearSubWidgets_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbWidgetPanel_ClearSubWidgets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZilbWidgetPanel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbWidgetPanel_ClearSubWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbWidgetPanel, nullptr, "ClearSubWidgets", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetPanel_ClearSubWidgets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbWidgetPanel_ClearSubWidgets_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UZilbWidgetPanel_ClearSubWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbWidgetPanel_ClearSubWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZilbWidgetPanel_CreateSubWidget_Statics
	{
		struct ZilbWidgetPanel_eventCreateSubWidget_Parms
		{
			UUserWidget* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbWidgetPanel_CreateSubWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZilbWidgetPanel_CreateSubWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZilbWidgetPanel_eventCreateSubWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetPanel_CreateSubWidget_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UZilbWidgetPanel_CreateSubWidget_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZilbWidgetPanel_CreateSubWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbWidgetPanel_CreateSubWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbWidgetPanel_CreateSubWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZilbWidgetPanel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbWidgetPanel_CreateSubWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbWidgetPanel, nullptr, "CreateSubWidget", nullptr, nullptr, Z_Construct_UFunction_UZilbWidgetPanel_CreateSubWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetPanel_CreateSubWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZilbWidgetPanel_CreateSubWidget_Statics::ZilbWidgetPanel_eventCreateSubWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetPanel_CreateSubWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbWidgetPanel_CreateSubWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetPanel_CreateSubWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZilbWidgetPanel_CreateSubWidget_Statics::ZilbWidgetPanel_eventCreateSubWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZilbWidgetPanel_CreateSubWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbWidgetPanel_CreateSubWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZilbWidgetPanel_DeselectAll_Statics
	{
		struct ZilbWidgetPanel_eventDeselectAll_Parms
		{
			UUserWidget* Exemption;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Exemption_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Exemption;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbWidgetPanel_DeselectAll_Statics::NewProp_Exemption_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZilbWidgetPanel_DeselectAll_Statics::NewProp_Exemption = { "Exemption", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZilbWidgetPanel_eventDeselectAll_Parms, Exemption), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetPanel_DeselectAll_Statics::NewProp_Exemption_MetaData), Z_Construct_UFunction_UZilbWidgetPanel_DeselectAll_Statics::NewProp_Exemption_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZilbWidgetPanel_DeselectAll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbWidgetPanel_DeselectAll_Statics::NewProp_Exemption,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbWidgetPanel_DeselectAll_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Deselects all except for the given exempted widget\n" },
#endif
		{ "ModuleRelativePath", "Public/ZilbWidgetPanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deselects all except for the given exempted widget" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbWidgetPanel_DeselectAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbWidgetPanel, nullptr, "DeselectAll", nullptr, nullptr, Z_Construct_UFunction_UZilbWidgetPanel_DeselectAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetPanel_DeselectAll_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZilbWidgetPanel_DeselectAll_Statics::ZilbWidgetPanel_eventDeselectAll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetPanel_DeselectAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbWidgetPanel_DeselectAll_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetPanel_DeselectAll_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZilbWidgetPanel_DeselectAll_Statics::ZilbWidgetPanel_eventDeselectAll_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZilbWidgetPanel_DeselectAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbWidgetPanel_DeselectAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZilbWidgetPanel_GetChildHasFocus_Statics
	{
		struct ZilbWidgetPanel_eventGetChildHasFocus_Parms
		{
			UUserWidget* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbWidgetPanel_GetChildHasFocus_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZilbWidgetPanel_GetChildHasFocus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZilbWidgetPanel_eventGetChildHasFocus_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetPanel_GetChildHasFocus_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UZilbWidgetPanel_GetChildHasFocus_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZilbWidgetPanel_GetChildHasFocus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbWidgetPanel_GetChildHasFocus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbWidgetPanel_GetChildHasFocus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZilbWidgetPanel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbWidgetPanel_GetChildHasFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbWidgetPanel, nullptr, "GetChildHasFocus", nullptr, nullptr, Z_Construct_UFunction_UZilbWidgetPanel_GetChildHasFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetPanel_GetChildHasFocus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZilbWidgetPanel_GetChildHasFocus_Statics::ZilbWidgetPanel_eventGetChildHasFocus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetPanel_GetChildHasFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbWidgetPanel_GetChildHasFocus_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetPanel_GetChildHasFocus_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZilbWidgetPanel_GetChildHasFocus_Statics::ZilbWidgetPanel_eventGetChildHasFocus_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZilbWidgetPanel_GetChildHasFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbWidgetPanel_GetChildHasFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZilbWidgetPanel_PopulateWidgets_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbWidgetPanel_PopulateWidgets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZilbWidgetPanel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbWidgetPanel_PopulateWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbWidgetPanel, nullptr, "PopulateWidgets", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetPanel_PopulateWidgets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbWidgetPanel_PopulateWidgets_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UZilbWidgetPanel_PopulateWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbWidgetPanel_PopulateWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZilbWidgetPanel_SetChildGridPlacements_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbWidgetPanel_SetChildGridPlacements_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZilbWidgetPanel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbWidgetPanel_SetChildGridPlacements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbWidgetPanel, nullptr, "SetChildGridPlacements", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetPanel_SetChildGridPlacements_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbWidgetPanel_SetChildGridPlacements_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UZilbWidgetPanel_SetChildGridPlacements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbWidgetPanel_SetChildGridPlacements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UZilbWidgetPanel);
	UClass* Z_Construct_UClass_UZilbWidgetPanel_NoRegister()
	{
		return UZilbWidgetPanel::StaticClass();
	}
	struct Z_Construct_UClass_UZilbWidgetPanel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoPopulate_MetaData[];
#endif
		static void NewProp_bAutoPopulate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPopulate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWidgetsAreDebugOnly_MetaData[];
#endif
		static void NewProp_bWidgetsAreDebugOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWidgetsAreDebugOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WidgetNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlotPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Columns_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Columns;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rows_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Rows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFillVertically_MetaData[];
#endif
		static void NewProp_bFillVertically_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFillVertically;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetContainer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZilbWidgetPanel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UZilbWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ZilbUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetPanel_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UZilbWidgetPanel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UZilbWidgetPanel_AddWidget, "AddWidget" }, // 2847072698
		{ &Z_Construct_UFunction_UZilbWidgetPanel_ClearSubWidgets, "ClearSubWidgets" }, // 179539640
		{ &Z_Construct_UFunction_UZilbWidgetPanel_CreateSubWidget, "CreateSubWidget" }, // 3024356729
		{ &Z_Construct_UFunction_UZilbWidgetPanel_DeselectAll, "DeselectAll" }, // 1856691001
		{ &Z_Construct_UFunction_UZilbWidgetPanel_GetChildHasFocus, "GetChildHasFocus" }, // 1167446305
		{ &Z_Construct_UFunction_UZilbWidgetPanel_PopulateWidgets, "PopulateWidgets" }, // 273593
		{ &Z_Construct_UFunction_UZilbWidgetPanel_SetChildGridPlacements, "SetChildGridPlacements" }, // 4265890746
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetPanel_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbWidgetPanel_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base class for panel widgets that can instantiate widgets\n */" },
#endif
		{ "IncludePath", "ZilbWidgetPanel.h" },
		{ "ModuleRelativePath", "Public/ZilbWidgetPanel.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for panel widgets that can instantiate widgets" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_bAutoPopulate_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// End UUserWidget Interface\n" },
#endif
		{ "ModuleRelativePath", "Public/ZilbWidgetPanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "End UUserWidget Interface" },
#endif
	};
#endif
	void Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_bAutoPopulate_SetBit(void* Obj)
	{
		((UZilbWidgetPanel*)Obj)->bAutoPopulate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_bAutoPopulate = { "bAutoPopulate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZilbWidgetPanel), &Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_bAutoPopulate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_bAutoPopulate_MetaData), Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_bAutoPopulate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_bWidgetsAreDebugOnly_MetaData[] = {
		{ "Category", "UI" },
		{ "EditCondition", "bAutoPopulate" },
		{ "ModuleRelativePath", "Public/ZilbWidgetPanel.h" },
	};
#endif
	void Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_bWidgetsAreDebugOnly_SetBit(void* Obj)
	{
		((UZilbWidgetPanel*)Obj)->bWidgetsAreDebugOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_bWidgetsAreDebugOnly = { "bWidgetsAreDebugOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZilbWidgetPanel), &Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_bWidgetsAreDebugOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_bWidgetsAreDebugOnly_MetaData), Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_bWidgetsAreDebugOnly_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_WidgetNum_MetaData[] = {
		{ "Category", "UI" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bAutoPopulate" },
		{ "ModuleRelativePath", "Public/ZilbWidgetPanel.h" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_WidgetNum = { "WidgetNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbWidgetPanel, WidgetNum), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_WidgetNum_MetaData), Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_WidgetNum_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/ZilbWidgetPanel.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbWidgetPanel, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_WidgetClass_MetaData), Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_WidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_SlotPadding_MetaData[] = {
		{ "Category", "UI|Layout" },
		{ "ModuleRelativePath", "Public/ZilbWidgetPanel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_SlotPadding = { "SlotPadding", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbWidgetPanel, SlotPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_SlotPadding_MetaData), Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_SlotPadding_MetaData) }; // 2235102396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "UI|Layout" },
		{ "ModuleRelativePath", "Public/ZilbWidgetPanel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbWidgetPanel, Size), Z_Construct_UScriptStruct_FSlateChildSize, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_Size_MetaData), Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_Size_MetaData) }; // 1742874166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "UI|Layout" },
		{ "ModuleRelativePath", "Public/ZilbWidgetPanel.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbWidgetPanel, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_HorizontalAlignment_MetaData), Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_HorizontalAlignment_MetaData) }; // 483256341
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "UI|Layout" },
		{ "ModuleRelativePath", "Public/ZilbWidgetPanel.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbWidgetPanel, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_VerticalAlignment_MetaData), Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_VerticalAlignment_MetaData) }; // 1653762848
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_Columns_MetaData[] = {
		{ "Category", "UI|Layout|Grid" },
		{ "ClampMin", "1" },
		{ "EditCondition", "!bFillVertically" },
		{ "ModuleRelativePath", "Public/ZilbWidgetPanel.h" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_Columns = { "Columns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbWidgetPanel, Columns), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_Columns_MetaData), Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_Columns_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_Rows_MetaData[] = {
		{ "Category", "UI|Layout|Grid" },
		{ "ClampMin", "1" },
		{ "EditCondition", "bFillVertically" },
		{ "ModuleRelativePath", "Public/ZilbWidgetPanel.h" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_Rows = { "Rows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbWidgetPanel, Rows), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_Rows_MetaData), Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_Rows_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_bFillVertically_MetaData[] = {
		{ "Category", "UI|Layout|Grid" },
		{ "ModuleRelativePath", "Public/ZilbWidgetPanel.h" },
	};
#endif
	void Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_bFillVertically_SetBit(void* Obj)
	{
		((UZilbWidgetPanel*)Obj)->bFillVertically = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_bFillVertically = { "bFillVertically", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZilbWidgetPanel), &Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_bFillVertically_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_bFillVertically_MetaData), Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_bFillVertically_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_WidgetContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ZilbWidgetPanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZilbWidgetPanel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_WidgetContainer = { "WidgetContainer", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbWidgetPanel, WidgetContainer), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_WidgetContainer_MetaData), Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_WidgetContainer_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZilbWidgetPanel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_bAutoPopulate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_bWidgetsAreDebugOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_WidgetNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_SlotPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_HorizontalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_VerticalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_Columns,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_Rows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_bFillVertically,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbWidgetPanel_Statics::NewProp_WidgetContainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZilbWidgetPanel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZilbWidgetPanel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UZilbWidgetPanel_Statics::ClassParams = {
		&UZilbWidgetPanel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UZilbWidgetPanel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetPanel_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetPanel_Statics::Class_MetaDataParams), Z_Construct_UClass_UZilbWidgetPanel_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetPanel_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UZilbWidgetPanel()
	{
		if (!Z_Registration_Info_UClass_UZilbWidgetPanel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZilbWidgetPanel.OuterSingleton, Z_Construct_UClass_UZilbWidgetPanel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UZilbWidgetPanel.OuterSingleton;
	}
	template<> ZILBUI_API UClass* StaticClass<UZilbWidgetPanel>()
	{
		return UZilbWidgetPanel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZilbWidgetPanel);
	UZilbWidgetPanel::~UZilbWidgetPanel() {}
	struct Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetPanel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetPanel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UZilbWidgetPanel, UZilbWidgetPanel::StaticClass, TEXT("UZilbWidgetPanel"), &Z_Registration_Info_UClass_UZilbWidgetPanel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZilbWidgetPanel), 2376340125U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetPanel_h_3461127813(TEXT("/Script/ZilbUI"),
		Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetPanel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetPanel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
