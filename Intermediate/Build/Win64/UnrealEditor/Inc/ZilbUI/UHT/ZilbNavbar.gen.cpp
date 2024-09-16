// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZilbUI/Public/ZilbNavbar.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZilbNavbar() {}
// Cross Module References
	COMMONINPUT_API UEnum* Z_Construct_UEnum_CommonInput_ECommonInputType();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActionWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ZilbUI();
	ZILBUI_API UClass* Z_Construct_UClass_UZilbActivatableWidgetSwitcher_NoRegister();
	ZILBUI_API UClass* Z_Construct_UClass_UZilbButtonBase_NoRegister();
	ZILBUI_API UClass* Z_Construct_UClass_UZilbNavbar();
	ZILBUI_API UClass* Z_Construct_UClass_UZilbNavbar_NoRegister();
	ZILBUI_API UClass* Z_Construct_UClass_UZilbWidgetBase();
// End Cross Module References
	DEFINE_FUNCTION(UZilbNavbar::execOnIsTransitioningChanged)
	{
		P_GET_UBOOL(Z_Param_bIsTransitioning);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnIsTransitioningChanged(Z_Param_bIsTransitioning);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZilbNavbar::execOnActiveWidgetSet)
	{
		P_GET_OBJECT(UWidget,Z_Param_Widget);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActiveWidgetSet(Z_Param_Widget,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZilbNavbar::execUpdateInputActionWidgetsVisibility)
	{
		P_GET_ENUM(ECommonInputType,Z_Param_CurrentInputType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateInputActionWidgetsVisibility(ECommonInputType(Z_Param_CurrentInputType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZilbNavbar::execOnButtonSelected)
	{
		P_GET_OBJECT(UZilbButtonBase,Z_Param_Button);
		P_GET_UBOOL(Z_Param_bSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonSelected_Implementation(Z_Param_Button,Z_Param_bSelected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZilbNavbar::execOnButtonClicked)
	{
		P_GET_OBJECT(UZilbButtonBase,Z_Param_Button);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonClicked_Implementation(Z_Param_Button);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZilbNavbar::execSetActiveWidget)
	{
		P_GET_OBJECT(UWidget,Z_Param_Widget);
		P_GET_UBOOL(Z_Param_bDisableAnimation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveWidget_Implementation(Z_Param_Widget,Z_Param_bDisableAnimation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZilbNavbar::execOnNextInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNextInput_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZilbNavbar::execOnPreviousInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPreviousInput_Implementation();
		P_NATIVE_END;
	}
	struct ZilbNavbar_eventBP_UpdateInputActionWidgetsVisibility_Parms
	{
		ECommonInputType CurrentInputType;
	};
	struct ZilbNavbar_eventOnButtonClicked_Parms
	{
		UZilbButtonBase* Button;
	};
	struct ZilbNavbar_eventOnButtonSelected_Parms
	{
		UZilbButtonBase* Button;
		bool bSelected;
	};
	struct ZilbNavbar_eventSetActiveWidget_Parms
	{
		UWidget* Widget;
		bool bDisableAnimation;
	};
	static FName NAME_UZilbNavbar_BP_UpdateInputActionWidgetsVisibility = FName(TEXT("BP_UpdateInputActionWidgetsVisibility"));
	void UZilbNavbar::BP_UpdateInputActionWidgetsVisibility(ECommonInputType CurrentInputType)
	{
		ZilbNavbar_eventBP_UpdateInputActionWidgetsVisibility_Parms Parms;
		Parms.CurrentInputType=CurrentInputType;
		ProcessEvent(FindFunctionChecked(NAME_UZilbNavbar_BP_UpdateInputActionWidgetsVisibility),&Parms);
	}
	static FName NAME_UZilbNavbar_OnButtonClicked = FName(TEXT("OnButtonClicked"));
	void UZilbNavbar::OnButtonClicked(UZilbButtonBase* Button)
	{
		ZilbNavbar_eventOnButtonClicked_Parms Parms;
		Parms.Button=Button;
		ProcessEvent(FindFunctionChecked(NAME_UZilbNavbar_OnButtonClicked),&Parms);
	}
	static FName NAME_UZilbNavbar_OnButtonSelected = FName(TEXT("OnButtonSelected"));
	void UZilbNavbar::OnButtonSelected(UZilbButtonBase* Button, bool bSelected)
	{
		ZilbNavbar_eventOnButtonSelected_Parms Parms;
		Parms.Button=Button;
		Parms.bSelected=bSelected ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UZilbNavbar_OnButtonSelected),&Parms);
	}
	static FName NAME_UZilbNavbar_OnNextInput = FName(TEXT("OnNextInput"));
	void UZilbNavbar::OnNextInput()
	{
		ProcessEvent(FindFunctionChecked(NAME_UZilbNavbar_OnNextInput),NULL);
	}
	static FName NAME_UZilbNavbar_OnPreviousInput = FName(TEXT("OnPreviousInput"));
	void UZilbNavbar::OnPreviousInput()
	{
		ProcessEvent(FindFunctionChecked(NAME_UZilbNavbar_OnPreviousInput),NULL);
	}
	static FName NAME_UZilbNavbar_SetActiveWidget = FName(TEXT("SetActiveWidget"));
	void UZilbNavbar::SetActiveWidget(UWidget* Widget, bool bDisableAnimation)
	{
		ZilbNavbar_eventSetActiveWidget_Parms Parms;
		Parms.Widget=Widget;
		Parms.bDisableAnimation=bDisableAnimation ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UZilbNavbar_SetActiveWidget),&Parms);
	}
	void UZilbNavbar::StaticRegisterNativesUZilbNavbar()
	{
		UClass* Class = UZilbNavbar::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnActiveWidgetSet", &UZilbNavbar::execOnActiveWidgetSet },
			{ "OnButtonClicked", &UZilbNavbar::execOnButtonClicked },
			{ "OnButtonSelected", &UZilbNavbar::execOnButtonSelected },
			{ "OnIsTransitioningChanged", &UZilbNavbar::execOnIsTransitioningChanged },
			{ "OnNextInput", &UZilbNavbar::execOnNextInput },
			{ "OnPreviousInput", &UZilbNavbar::execOnPreviousInput },
			{ "SetActiveWidget", &UZilbNavbar::execSetActiveWidget },
			{ "UpdateInputActionWidgetsVisibility", &UZilbNavbar::execUpdateInputActionWidgetsVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UZilbNavbar_BP_UpdateInputActionWidgetsVisibility_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentInputType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentInputType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZilbNavbar_BP_UpdateInputActionWidgetsVisibility_Statics::NewProp_CurrentInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UZilbNavbar_BP_UpdateInputActionWidgetsVisibility_Statics::NewProp_CurrentInputType = { "CurrentInputType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZilbNavbar_eventBP_UpdateInputActionWidgetsVisibility_Parms, CurrentInputType), Z_Construct_UEnum_CommonInput_ECommonInputType, METADATA_PARAMS(0, nullptr) }; // 2481650305
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZilbNavbar_BP_UpdateInputActionWidgetsVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbNavbar_BP_UpdateInputActionWidgetsVisibility_Statics::NewProp_CurrentInputType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbNavbar_BP_UpdateInputActionWidgetsVisibility_Statics::NewProp_CurrentInputType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbNavbar_BP_UpdateInputActionWidgetsVisibility_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "UpdateInputActionWidgetsVisibility" },
		{ "ModuleRelativePath", "Public/ZilbNavbar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbNavbar_BP_UpdateInputActionWidgetsVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbNavbar, nullptr, "BP_UpdateInputActionWidgetsVisibility", nullptr, nullptr, Z_Construct_UFunction_UZilbNavbar_BP_UpdateInputActionWidgetsVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbNavbar_BP_UpdateInputActionWidgetsVisibility_Statics::PropPointers), sizeof(ZilbNavbar_eventBP_UpdateInputActionWidgetsVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbNavbar_BP_UpdateInputActionWidgetsVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbNavbar_BP_UpdateInputActionWidgetsVisibility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbNavbar_BP_UpdateInputActionWidgetsVisibility_Statics::PropPointers) < 2048);
	static_assert(sizeof(ZilbNavbar_eventBP_UpdateInputActionWidgetsVisibility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZilbNavbar_BP_UpdateInputActionWidgetsVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbNavbar_BP_UpdateInputActionWidgetsVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZilbNavbar_OnActiveWidgetSet_Statics
	{
		struct ZilbNavbar_eventOnActiveWidgetSet_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbNavbar_OnActiveWidgetSet_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZilbNavbar_OnActiveWidgetSet_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZilbNavbar_eventOnActiveWidgetSet_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbNavbar_OnActiveWidgetSet_Statics::NewProp_Widget_MetaData), Z_Construct_UFunction_UZilbNavbar_OnActiveWidgetSet_Statics::NewProp_Widget_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UZilbNavbar_OnActiveWidgetSet_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZilbNavbar_eventOnActiveWidgetSet_Parms, Index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZilbNavbar_OnActiveWidgetSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbNavbar_OnActiveWidgetSet_Statics::NewProp_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbNavbar_OnActiveWidgetSet_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbNavbar_OnActiveWidgetSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZilbNavbar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbNavbar_OnActiveWidgetSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbNavbar, nullptr, "OnActiveWidgetSet", nullptr, nullptr, Z_Construct_UFunction_UZilbNavbar_OnActiveWidgetSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbNavbar_OnActiveWidgetSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZilbNavbar_OnActiveWidgetSet_Statics::ZilbNavbar_eventOnActiveWidgetSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbNavbar_OnActiveWidgetSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbNavbar_OnActiveWidgetSet_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbNavbar_OnActiveWidgetSet_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZilbNavbar_OnActiveWidgetSet_Statics::ZilbNavbar_eventOnActiveWidgetSet_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZilbNavbar_OnActiveWidgetSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbNavbar_OnActiveWidgetSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZilbNavbar_OnButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbNavbar_OnButtonClicked_Statics::NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZilbNavbar_OnButtonClicked_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZilbNavbar_eventOnButtonClicked_Parms, Button), Z_Construct_UClass_UZilbButtonBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbNavbar_OnButtonClicked_Statics::NewProp_Button_MetaData), Z_Construct_UFunction_UZilbNavbar_OnButtonClicked_Statics::NewProp_Button_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZilbNavbar_OnButtonClicked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbNavbar_OnButtonClicked_Statics::NewProp_Button,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbNavbar_OnButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZilbNavbar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbNavbar_OnButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbNavbar, nullptr, "OnButtonClicked", nullptr, nullptr, Z_Construct_UFunction_UZilbNavbar_OnButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbNavbar_OnButtonClicked_Statics::PropPointers), sizeof(ZilbNavbar_eventOnButtonClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbNavbar_OnButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbNavbar_OnButtonClicked_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbNavbar_OnButtonClicked_Statics::PropPointers) < 2048);
	static_assert(sizeof(ZilbNavbar_eventOnButtonClicked_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZilbNavbar_OnButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbNavbar_OnButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZilbNavbar_OnButtonSelected_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
		static void NewProp_bSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbNavbar_OnButtonSelected_Statics::NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZilbNavbar_OnButtonSelected_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZilbNavbar_eventOnButtonSelected_Parms, Button), Z_Construct_UClass_UZilbButtonBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbNavbar_OnButtonSelected_Statics::NewProp_Button_MetaData), Z_Construct_UFunction_UZilbNavbar_OnButtonSelected_Statics::NewProp_Button_MetaData) };
	void Z_Construct_UFunction_UZilbNavbar_OnButtonSelected_Statics::NewProp_bSelected_SetBit(void* Obj)
	{
		((ZilbNavbar_eventOnButtonSelected_Parms*)Obj)->bSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZilbNavbar_OnButtonSelected_Statics::NewProp_bSelected = { "bSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZilbNavbar_eventOnButtonSelected_Parms), &Z_Construct_UFunction_UZilbNavbar_OnButtonSelected_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZilbNavbar_OnButtonSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbNavbar_OnButtonSelected_Statics::NewProp_Button,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbNavbar_OnButtonSelected_Statics::NewProp_bSelected,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbNavbar_OnButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZilbNavbar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbNavbar_OnButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbNavbar, nullptr, "OnButtonSelected", nullptr, nullptr, Z_Construct_UFunction_UZilbNavbar_OnButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbNavbar_OnButtonSelected_Statics::PropPointers), sizeof(ZilbNavbar_eventOnButtonSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbNavbar_OnButtonSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbNavbar_OnButtonSelected_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbNavbar_OnButtonSelected_Statics::PropPointers) < 2048);
	static_assert(sizeof(ZilbNavbar_eventOnButtonSelected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZilbNavbar_OnButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbNavbar_OnButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZilbNavbar_OnIsTransitioningChanged_Statics
	{
		struct ZilbNavbar_eventOnIsTransitioningChanged_Parms
		{
			bool bIsTransitioning;
		};
		static void NewProp_bIsTransitioning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTransitioning;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZilbNavbar_OnIsTransitioningChanged_Statics::NewProp_bIsTransitioning_SetBit(void* Obj)
	{
		((ZilbNavbar_eventOnIsTransitioningChanged_Parms*)Obj)->bIsTransitioning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZilbNavbar_OnIsTransitioningChanged_Statics::NewProp_bIsTransitioning = { "bIsTransitioning", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZilbNavbar_eventOnIsTransitioningChanged_Parms), &Z_Construct_UFunction_UZilbNavbar_OnIsTransitioningChanged_Statics::NewProp_bIsTransitioning_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZilbNavbar_OnIsTransitioningChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbNavbar_OnIsTransitioningChanged_Statics::NewProp_bIsTransitioning,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbNavbar_OnIsTransitioningChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZilbNavbar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbNavbar_OnIsTransitioningChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbNavbar, nullptr, "OnIsTransitioningChanged", nullptr, nullptr, Z_Construct_UFunction_UZilbNavbar_OnIsTransitioningChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbNavbar_OnIsTransitioningChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZilbNavbar_OnIsTransitioningChanged_Statics::ZilbNavbar_eventOnIsTransitioningChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbNavbar_OnIsTransitioningChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbNavbar_OnIsTransitioningChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbNavbar_OnIsTransitioningChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZilbNavbar_OnIsTransitioningChanged_Statics::ZilbNavbar_eventOnIsTransitioningChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZilbNavbar_OnIsTransitioningChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbNavbar_OnIsTransitioningChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZilbNavbar_OnNextInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbNavbar_OnNextInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZilbNavbar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbNavbar_OnNextInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbNavbar, nullptr, "OnNextInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbNavbar_OnNextInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbNavbar_OnNextInput_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UZilbNavbar_OnNextInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbNavbar_OnNextInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZilbNavbar_OnPreviousInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbNavbar_OnPreviousInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZilbNavbar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbNavbar_OnPreviousInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbNavbar, nullptr, "OnPreviousInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbNavbar_OnPreviousInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbNavbar_OnPreviousInput_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UZilbNavbar_OnPreviousInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbNavbar_OnPreviousInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZilbNavbar_SetActiveWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static void NewProp_bDisableAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableAnimation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbNavbar_SetActiveWidget_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZilbNavbar_SetActiveWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZilbNavbar_eventSetActiveWidget_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbNavbar_SetActiveWidget_Statics::NewProp_Widget_MetaData), Z_Construct_UFunction_UZilbNavbar_SetActiveWidget_Statics::NewProp_Widget_MetaData) };
	void Z_Construct_UFunction_UZilbNavbar_SetActiveWidget_Statics::NewProp_bDisableAnimation_SetBit(void* Obj)
	{
		((ZilbNavbar_eventSetActiveWidget_Parms*)Obj)->bDisableAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZilbNavbar_SetActiveWidget_Statics::NewProp_bDisableAnimation = { "bDisableAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZilbNavbar_eventSetActiveWidget_Parms), &Z_Construct_UFunction_UZilbNavbar_SetActiveWidget_Statics::NewProp_bDisableAnimation_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZilbNavbar_SetActiveWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbNavbar_SetActiveWidget_Statics::NewProp_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbNavbar_SetActiveWidget_Statics::NewProp_bDisableAnimation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbNavbar_SetActiveWidget_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_bDisableAnimation", "false" },
		{ "ModuleRelativePath", "Public/ZilbNavbar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbNavbar_SetActiveWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbNavbar, nullptr, "SetActiveWidget", nullptr, nullptr, Z_Construct_UFunction_UZilbNavbar_SetActiveWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbNavbar_SetActiveWidget_Statics::PropPointers), sizeof(ZilbNavbar_eventSetActiveWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbNavbar_SetActiveWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbNavbar_SetActiveWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbNavbar_SetActiveWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(ZilbNavbar_eventSetActiveWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZilbNavbar_SetActiveWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbNavbar_SetActiveWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZilbNavbar_UpdateInputActionWidgetsVisibility_Statics
	{
		struct ZilbNavbar_eventUpdateInputActionWidgetsVisibility_Parms
		{
			ECommonInputType CurrentInputType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentInputType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentInputType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZilbNavbar_UpdateInputActionWidgetsVisibility_Statics::NewProp_CurrentInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UZilbNavbar_UpdateInputActionWidgetsVisibility_Statics::NewProp_CurrentInputType = { "CurrentInputType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZilbNavbar_eventUpdateInputActionWidgetsVisibility_Parms, CurrentInputType), Z_Construct_UEnum_CommonInput_ECommonInputType, METADATA_PARAMS(0, nullptr) }; // 2481650305
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZilbNavbar_UpdateInputActionWidgetsVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbNavbar_UpdateInputActionWidgetsVisibility_Statics::NewProp_CurrentInputType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbNavbar_UpdateInputActionWidgetsVisibility_Statics::NewProp_CurrentInputType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbNavbar_UpdateInputActionWidgetsVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZilbNavbar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbNavbar_UpdateInputActionWidgetsVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbNavbar, nullptr, "UpdateInputActionWidgetsVisibility", nullptr, nullptr, Z_Construct_UFunction_UZilbNavbar_UpdateInputActionWidgetsVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbNavbar_UpdateInputActionWidgetsVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZilbNavbar_UpdateInputActionWidgetsVisibility_Statics::ZilbNavbar_eventUpdateInputActionWidgetsVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbNavbar_UpdateInputActionWidgetsVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbNavbar_UpdateInputActionWidgetsVisibility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbNavbar_UpdateInputActionWidgetsVisibility_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZilbNavbar_UpdateInputActionWidgetsVisibility_Statics::ZilbNavbar_eventUpdateInputActionWidgetsVisibility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZilbNavbar_UpdateInputActionWidgetsVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbNavbar_UpdateInputActionWidgetsVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UZilbNavbar);
	UClass* Z_Construct_UClass_UZilbNavbar_NoRegister()
	{
		return UZilbNavbar::StaticClass();
	}
	struct Z_Construct_UClass_UZilbNavbar_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShowAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanWrap_MetaData[];
#endif
		static void NewProp_bCanWrap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanWrap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoPopulate_MetaData[];
#endif
		static void NewProp_bAutoPopulate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPopulate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WidgetNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ButtonClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousInputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NextInputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetSwitcher_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetSwitcher;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousInputActionWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousInputActionWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextInputActionWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NextInputActionWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusGuard_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FocusGuard;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZilbNavbar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UZilbWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ZilbUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbNavbar_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UZilbNavbar_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UZilbNavbar_BP_UpdateInputActionWidgetsVisibility, "BP_UpdateInputActionWidgetsVisibility" }, // 36495340
		{ &Z_Construct_UFunction_UZilbNavbar_OnActiveWidgetSet, "OnActiveWidgetSet" }, // 64789123
		{ &Z_Construct_UFunction_UZilbNavbar_OnButtonClicked, "OnButtonClicked" }, // 2216475912
		{ &Z_Construct_UFunction_UZilbNavbar_OnButtonSelected, "OnButtonSelected" }, // 3238247574
		{ &Z_Construct_UFunction_UZilbNavbar_OnIsTransitioningChanged, "OnIsTransitioningChanged" }, // 1838137640
		{ &Z_Construct_UFunction_UZilbNavbar_OnNextInput, "OnNextInput" }, // 4195409335
		{ &Z_Construct_UFunction_UZilbNavbar_OnPreviousInput, "OnPreviousInput" }, // 2489450971
		{ &Z_Construct_UFunction_UZilbNavbar_SetActiveWidget, "SetActiveWidget" }, // 3691197540
		{ &Z_Construct_UFunction_UZilbNavbar_UpdateInputActionWidgetsVisibility, "UpdateInputActionWidgetsVisibility" }, // 3903804750
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbNavbar_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbNavbar_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base class for navigation bar widget that transitions between widgets using buttons and input actions.\n */" },
#endif
		{ "IncludePath", "ZilbNavbar.h" },
		{ "ModuleRelativePath", "Public/ZilbNavbar.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for navigation bar widget that transitions between widgets using buttons and input actions." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbNavbar_Statics::NewProp_ShowAnim_MetaData[] = {
		{ "BindWidgetAnimOptional", "" },
		{ "Category", "ZilbNavbar" },
		{ "ModuleRelativePath", "Public/ZilbNavbar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZilbNavbar_Statics::NewProp_ShowAnim = { "ShowAnim", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbNavbar, ShowAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbNavbar_Statics::NewProp_ShowAnim_MetaData), Z_Construct_UClass_UZilbNavbar_Statics::NewProp_ShowAnim_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbNavbar_Statics::NewProp_bCanWrap_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/ZilbNavbar.h" },
	};
#endif
	void Z_Construct_UClass_UZilbNavbar_Statics::NewProp_bCanWrap_SetBit(void* Obj)
	{
		((UZilbNavbar*)Obj)->bCanWrap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZilbNavbar_Statics::NewProp_bCanWrap = { "bCanWrap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZilbNavbar), &Z_Construct_UClass_UZilbNavbar_Statics::NewProp_bCanWrap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbNavbar_Statics::NewProp_bCanWrap_MetaData), Z_Construct_UClass_UZilbNavbar_Statics::NewProp_bCanWrap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbNavbar_Statics::NewProp_bAutoPopulate_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/ZilbNavbar.h" },
	};
#endif
	void Z_Construct_UClass_UZilbNavbar_Statics::NewProp_bAutoPopulate_SetBit(void* Obj)
	{
		((UZilbNavbar*)Obj)->bAutoPopulate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZilbNavbar_Statics::NewProp_bAutoPopulate = { "bAutoPopulate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZilbNavbar), &Z_Construct_UClass_UZilbNavbar_Statics::NewProp_bAutoPopulate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbNavbar_Statics::NewProp_bAutoPopulate_MetaData), Z_Construct_UClass_UZilbNavbar_Statics::NewProp_bAutoPopulate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbNavbar_Statics::NewProp_WidgetNum_MetaData[] = {
		{ "Category", "UI" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bAutoPopulate" },
		{ "ModuleRelativePath", "Public/ZilbNavbar.h" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UZilbNavbar_Statics::NewProp_WidgetNum = { "WidgetNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbNavbar, WidgetNum), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbNavbar_Statics::NewProp_WidgetNum_MetaData), Z_Construct_UClass_UZilbNavbar_Statics::NewProp_WidgetNum_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbNavbar_Statics::NewProp_ButtonClass_MetaData[] = {
		{ "Category", "UI" },
		{ "EditCondition", "bAutoPopulate" },
		{ "ModuleRelativePath", "Public/ZilbNavbar.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UZilbNavbar_Statics::NewProp_ButtonClass = { "ButtonClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbNavbar, ButtonClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UZilbButtonBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbNavbar_Statics::NewProp_ButtonClass_MetaData), Z_Construct_UClass_UZilbNavbar_Statics::NewProp_ButtonClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbNavbar_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "EditCondition", "bAutoPopulate" },
		{ "ModuleRelativePath", "Public/ZilbNavbar.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UZilbNavbar_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbNavbar, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbNavbar_Statics::NewProp_WidgetClass_MetaData), Z_Construct_UClass_UZilbNavbar_Statics::NewProp_WidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbNavbar_Statics::NewProp_PreviousInputAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/ZilbNavbar.h" },
		{ "RowType", "CommonInputActionDataBase" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZilbNavbar_Statics::NewProp_PreviousInputAction = { "PreviousInputAction", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbNavbar, PreviousInputAction), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbNavbar_Statics::NewProp_PreviousInputAction_MetaData), Z_Construct_UClass_UZilbNavbar_Statics::NewProp_PreviousInputAction_MetaData) }; // 1575649708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbNavbar_Statics::NewProp_NextInputAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/ZilbNavbar.h" },
		{ "RowType", "CommonInputActionDataBase" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZilbNavbar_Statics::NewProp_NextInputAction = { "NextInputAction", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbNavbar, NextInputAction), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbNavbar_Statics::NewProp_NextInputAction_MetaData), Z_Construct_UClass_UZilbNavbar_Statics::NewProp_NextInputAction_MetaData) }; // 1575649708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbNavbar_Statics::NewProp_WidgetSwitcher_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ZilbNavbar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZilbNavbar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZilbNavbar_Statics::NewProp_WidgetSwitcher = { "WidgetSwitcher", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbNavbar, WidgetSwitcher), Z_Construct_UClass_UZilbActivatableWidgetSwitcher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbNavbar_Statics::NewProp_WidgetSwitcher_MetaData), Z_Construct_UClass_UZilbNavbar_Statics::NewProp_WidgetSwitcher_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbNavbar_Statics::NewProp_ButtonContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ZilbNavbar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZilbNavbar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZilbNavbar_Statics::NewProp_ButtonContainer = { "ButtonContainer", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbNavbar, ButtonContainer), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbNavbar_Statics::NewProp_ButtonContainer_MetaData), Z_Construct_UClass_UZilbNavbar_Statics::NewProp_ButtonContainer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbNavbar_Statics::NewProp_PreviousInputActionWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Input" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZilbNavbar.h" },
		{ "OptionalWidget", "TRUE" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZilbNavbar_Statics::NewProp_PreviousInputActionWidget = { "PreviousInputActionWidget", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbNavbar, PreviousInputActionWidget), Z_Construct_UClass_UCommonActionWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbNavbar_Statics::NewProp_PreviousInputActionWidget_MetaData), Z_Construct_UClass_UZilbNavbar_Statics::NewProp_PreviousInputActionWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbNavbar_Statics::NewProp_NextInputActionWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Input" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZilbNavbar.h" },
		{ "OptionalWidget", "TRUE" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZilbNavbar_Statics::NewProp_NextInputActionWidget = { "NextInputActionWidget", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbNavbar, NextInputActionWidget), Z_Construct_UClass_UCommonActionWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbNavbar_Statics::NewProp_NextInputActionWidget_MetaData), Z_Construct_UClass_UZilbNavbar_Statics::NewProp_NextInputActionWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbNavbar_Statics::NewProp_FocusGuard_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZilbNavbar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZilbNavbar_Statics::NewProp_FocusGuard = { "FocusGuard", nullptr, (EPropertyFlags)0x0040000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbNavbar, FocusGuard), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbNavbar_Statics::NewProp_FocusGuard_MetaData), Z_Construct_UClass_UZilbNavbar_Statics::NewProp_FocusGuard_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZilbNavbar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbNavbar_Statics::NewProp_ShowAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbNavbar_Statics::NewProp_bCanWrap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbNavbar_Statics::NewProp_bAutoPopulate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbNavbar_Statics::NewProp_WidgetNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbNavbar_Statics::NewProp_ButtonClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbNavbar_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbNavbar_Statics::NewProp_PreviousInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbNavbar_Statics::NewProp_NextInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbNavbar_Statics::NewProp_WidgetSwitcher,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbNavbar_Statics::NewProp_ButtonContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbNavbar_Statics::NewProp_PreviousInputActionWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbNavbar_Statics::NewProp_NextInputActionWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbNavbar_Statics::NewProp_FocusGuard,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZilbNavbar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZilbNavbar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UZilbNavbar_Statics::ClassParams = {
		&UZilbNavbar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UZilbNavbar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UZilbNavbar_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbNavbar_Statics::Class_MetaDataParams), Z_Construct_UClass_UZilbNavbar_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbNavbar_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UZilbNavbar()
	{
		if (!Z_Registration_Info_UClass_UZilbNavbar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZilbNavbar.OuterSingleton, Z_Construct_UClass_UZilbNavbar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UZilbNavbar.OuterSingleton;
	}
	template<> ZILBUI_API UClass* StaticClass<UZilbNavbar>()
	{
		return UZilbNavbar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZilbNavbar);
	UZilbNavbar::~UZilbNavbar() {}
	struct Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbNavbar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbNavbar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UZilbNavbar, UZilbNavbar::StaticClass, TEXT("UZilbNavbar"), &Z_Registration_Info_UClass_UZilbNavbar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZilbNavbar), 3646272762U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbNavbar_h_2023676602(TEXT("/Script/ZilbUI"),
		Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbNavbar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbNavbar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
