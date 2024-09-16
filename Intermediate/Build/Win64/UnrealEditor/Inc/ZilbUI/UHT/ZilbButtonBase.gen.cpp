// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZilbUI/Public/ZilbButtonBase.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
#include "Styling/SlateColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZilbButtonBase() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonBase();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextTransformPolicy();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ZilbUI();
	ZILBUI_API UClass* Z_Construct_UClass_UZilbButtonBase();
	ZILBUI_API UClass* Z_Construct_UClass_UZilbButtonBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UZilbButtonBase::execOnHoldTimerTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHoldTimerTick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZilbButtonBase::execVirtualClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->VirtualClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZilbButtonBase::execSetGamepadText)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGamepadText(Z_Param_Text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZilbButtonBase::execSetText)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetText(Z_Param_Text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZilbButtonBase::execGetText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZilbButtonBase::execHandleInputActionTriggered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleInputActionTriggered();
		P_NATIVE_END;
	}
	void UZilbButtonBase::StaticRegisterNativesUZilbButtonBase()
	{
		UClass* Class = UZilbButtonBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetText", &UZilbButtonBase::execGetText },
			{ "HandleInputActionTriggered", &UZilbButtonBase::execHandleInputActionTriggered },
			{ "OnHoldTimerTick", &UZilbButtonBase::execOnHoldTimerTick },
			{ "SetGamepadText", &UZilbButtonBase::execSetGamepadText },
			{ "SetText", &UZilbButtonBase::execSetText },
			{ "VirtualClick", &UZilbButtonBase::execVirtualClick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UZilbButtonBase_GetText_Statics
	{
		struct ZilbButtonBase_eventGetText_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UZilbButtonBase_GetText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZilbButtonBase_eventGetText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZilbButtonBase_GetText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbButtonBase_GetText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbButtonBase_GetText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZilbButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbButtonBase_GetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbButtonBase, nullptr, "GetText", nullptr, nullptr, Z_Construct_UFunction_UZilbButtonBase_GetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbButtonBase_GetText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZilbButtonBase_GetText_Statics::ZilbButtonBase_eventGetText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbButtonBase_GetText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbButtonBase_GetText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbButtonBase_GetText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZilbButtonBase_GetText_Statics::ZilbButtonBase_eventGetText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZilbButtonBase_GetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbButtonBase_GetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZilbButtonBase_HandleInputActionTriggered_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbButtonBase_HandleInputActionTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZilbButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbButtonBase_HandleInputActionTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbButtonBase, nullptr, "HandleInputActionTriggered", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbButtonBase_HandleInputActionTriggered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbButtonBase_HandleInputActionTriggered_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UZilbButtonBase_HandleInputActionTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbButtonBase_HandleInputActionTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZilbButtonBase_OnHoldTimerTick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbButtonBase_OnHoldTimerTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZilbButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbButtonBase_OnHoldTimerTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbButtonBase, nullptr, "OnHoldTimerTick", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbButtonBase_OnHoldTimerTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbButtonBase_OnHoldTimerTick_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UZilbButtonBase_OnHoldTimerTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbButtonBase_OnHoldTimerTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZilbButtonBase_SetGamepadText_Statics
	{
		struct ZilbButtonBase_eventSetGamepadText_Parms
		{
			FText Text;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UZilbButtonBase_SetGamepadText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZilbButtonBase_eventSetGamepadText_Parms, Text), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZilbButtonBase_SetGamepadText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbButtonBase_SetGamepadText_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbButtonBase_SetGamepadText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZilbButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbButtonBase_SetGamepadText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbButtonBase, nullptr, "SetGamepadText", nullptr, nullptr, Z_Construct_UFunction_UZilbButtonBase_SetGamepadText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbButtonBase_SetGamepadText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZilbButtonBase_SetGamepadText_Statics::ZilbButtonBase_eventSetGamepadText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbButtonBase_SetGamepadText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbButtonBase_SetGamepadText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbButtonBase_SetGamepadText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZilbButtonBase_SetGamepadText_Statics::ZilbButtonBase_eventSetGamepadText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZilbButtonBase_SetGamepadText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbButtonBase_SetGamepadText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZilbButtonBase_SetText_Statics
	{
		struct ZilbButtonBase_eventSetText_Parms
		{
			FText Text;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UZilbButtonBase_SetText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZilbButtonBase_eventSetText_Parms, Text), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZilbButtonBase_SetText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbButtonBase_SetText_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbButtonBase_SetText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZilbButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbButtonBase_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbButtonBase, nullptr, "SetText", nullptr, nullptr, Z_Construct_UFunction_UZilbButtonBase_SetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbButtonBase_SetText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZilbButtonBase_SetText_Statics::ZilbButtonBase_eventSetText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbButtonBase_SetText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbButtonBase_SetText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbButtonBase_SetText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZilbButtonBase_SetText_Statics::ZilbButtonBase_eventSetText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZilbButtonBase_SetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbButtonBase_SetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZilbButtonBase_VirtualClick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbButtonBase_VirtualClick_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Executes a button click without user input.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ZilbButtonBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Executes a button click without user input." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbButtonBase_VirtualClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbButtonBase, nullptr, "VirtualClick", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbButtonBase_VirtualClick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbButtonBase_VirtualClick_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UZilbButtonBase_VirtualClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbButtonBase_VirtualClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UZilbButtonBase);
	UClass* Z_Construct_UClass_UZilbButtonBase_NoRegister()
	{
		return UZilbButtonBase::StaticClass();
	}
	struct Z_Construct_UClass_UZilbButtonBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClickRequiresHold_MetaData[];
#endif
		static void NewProp_bClickRequiresHold_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClickRequiresHold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusOverride_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FocusOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoveredAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HoveredAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PressedAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PressedAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyboardOnlyWidgetContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyboardOnlyWidgetContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GamepadOnlyWidgetContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GamepadOnlyWidgetContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSetRenderOpacityOnDisable_MetaData[];
#endif
		static void NewProp_bSetRenderOpacityOnDisable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetRenderOpacityOnDisable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnabledRenderOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EnabledRenderOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisabledRenderOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DisabledRenderOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextLabel_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TextLabel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseDifferentTextOnGamepad_MetaData[];
#endif
		static void NewProp_bUseDifferentTextOnGamepad_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDifferentTextOnGamepad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GamepadTextLabel_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_GamepadTextLabel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseDifferentTextWhenDisabled_MetaData[];
#endif
		static void NewProp_bUseDifferentTextWhenDisabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDifferentTextWhenDisabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisabledTextLabel_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisabledTextLabel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransformPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TransformPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideTextStyleColors_MetaData[];
#endif
		static void NewProp_bOverrideTextStyleColors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideTextStyleColors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalTextColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalTextColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoveredTextColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredTextColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PressedTextColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PressedTextColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedNormalTextColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedNormalTextColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedHoveredTextColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedHoveredTextColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPressedTextColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedPressedTextColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisabledTextColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisabledTextColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoldTimerTickHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoldTimerTickHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastHoldTimerTickTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastHoldTimerTickTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoldTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HoldTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHoldCompleted_MetaData[];
#endif
		static void NewProp_bHoldCompleted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHoldCompleted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZilbButtonBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonButtonBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ZilbUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbButtonBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UZilbButtonBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UZilbButtonBase_GetText, "GetText" }, // 3529310829
		{ &Z_Construct_UFunction_UZilbButtonBase_HandleInputActionTriggered, "HandleInputActionTriggered" }, // 516661663
		{ &Z_Construct_UFunction_UZilbButtonBase_OnHoldTimerTick, "OnHoldTimerTick" }, // 1980752919
		{ &Z_Construct_UFunction_UZilbButtonBase_SetGamepadText, "SetGamepadText" }, // 61047355
		{ &Z_Construct_UFunction_UZilbButtonBase_SetText, "SetText" }, // 919110392
		{ &Z_Construct_UFunction_UZilbButtonBase_VirtualClick, "VirtualClick" }, // 593617866
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbButtonBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbButtonBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ZilbButtonBase.h" },
		{ "ModuleRelativePath", "Public/ZilbButtonBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bClickRequiresHold_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/ZilbButtonBase.h" },
	};
#endif
	void Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bClickRequiresHold_SetBit(void* Obj)
	{
		((UZilbButtonBase*)Obj)->bClickRequiresHold = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bClickRequiresHold = { "bClickRequiresHold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZilbButtonBase), &Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bClickRequiresHold_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bClickRequiresHold_MetaData), Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bClickRequiresHold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_FocusOverride_MetaData[] = {
		{ "Category", "Focus" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZilbButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_FocusOverride = { "FocusOverride", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbButtonBase, FocusOverride), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_FocusOverride_MetaData), Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_FocusOverride_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_HoveredAnim_MetaData[] = {
		{ "BindWidgetAnimOptional", "" },
		{ "Category", "ZilbButtonBase" },
		{ "ModuleRelativePath", "Public/ZilbButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_HoveredAnim = { "HoveredAnim", nullptr, (EPropertyFlags)0x0020080000002004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbButtonBase, HoveredAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_HoveredAnim_MetaData), Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_HoveredAnim_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_PressedAnim_MetaData[] = {
		{ "BindWidgetAnimOptional", "" },
		{ "Category", "ZilbButtonBase" },
		{ "ModuleRelativePath", "Public/ZilbButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_PressedAnim = { "PressedAnim", nullptr, (EPropertyFlags)0x0020080000002004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbButtonBase, PressedAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_PressedAnim_MetaData), Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_PressedAnim_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_SelectedAnim_MetaData[] = {
		{ "BindWidgetAnimOptional", "" },
		{ "Category", "ZilbButtonBase" },
		{ "ModuleRelativePath", "Public/ZilbButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_SelectedAnim = { "SelectedAnim", nullptr, (EPropertyFlags)0x0020080000002004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbButtonBase, SelectedAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_SelectedAnim_MetaData), Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_SelectedAnim_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_ButtonText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ZilbButtonBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZilbButtonBase.h" },
		{ "OptionalWidget", "TRUE" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_ButtonText = { "ButtonText", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbButtonBase, ButtonText), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_ButtonText_MetaData), Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_ButtonText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_KeyboardOnlyWidgetContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ZilbButtonBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Subwidget that will only show when user is using mouse and keyboard.\n\x09 */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZilbButtonBase.h" },
		{ "OptionalWidget", "TRUE" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Subwidget that will only show when user is using mouse and keyboard." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_KeyboardOnlyWidgetContainer = { "KeyboardOnlyWidgetContainer", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbButtonBase, KeyboardOnlyWidgetContainer), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_KeyboardOnlyWidgetContainer_MetaData), Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_KeyboardOnlyWidgetContainer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_GamepadOnlyWidgetContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ZilbButtonBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Subwidget that will only show when user is using gamepad.\n\x09 */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZilbButtonBase.h" },
		{ "OptionalWidget", "TRUE" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Subwidget that will only show when user is using gamepad." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_GamepadOnlyWidgetContainer = { "GamepadOnlyWidgetContainer", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbButtonBase, GamepadOnlyWidgetContainer), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_GamepadOnlyWidgetContainer_MetaData), Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_GamepadOnlyWidgetContainer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bSetRenderOpacityOnDisable_MetaData[] = {
		{ "Category", "ZilbButton|Style" },
		{ "ModuleRelativePath", "Public/ZilbButtonBase.h" },
	};
#endif
	void Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bSetRenderOpacityOnDisable_SetBit(void* Obj)
	{
		((UZilbButtonBase*)Obj)->bSetRenderOpacityOnDisable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bSetRenderOpacityOnDisable = { "bSetRenderOpacityOnDisable", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZilbButtonBase), &Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bSetRenderOpacityOnDisable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bSetRenderOpacityOnDisable_MetaData), Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bSetRenderOpacityOnDisable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_EnabledRenderOpacity_MetaData[] = {
		{ "Category", "ZilbButton|Style" },
		{ "EditCondition", "bSetRenderOpacityOnDisable" },
		{ "ModuleRelativePath", "Public/ZilbButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_EnabledRenderOpacity = { "EnabledRenderOpacity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbButtonBase, EnabledRenderOpacity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_EnabledRenderOpacity_MetaData), Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_EnabledRenderOpacity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_DisabledRenderOpacity_MetaData[] = {
		{ "Category", "ZilbButton|Style" },
		{ "EditCondition", "bSetRenderOpacityOnDisable" },
		{ "ModuleRelativePath", "Public/ZilbButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_DisabledRenderOpacity = { "DisabledRenderOpacity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbButtonBase, DisabledRenderOpacity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_DisabledRenderOpacity_MetaData), Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_DisabledRenderOpacity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_TextLabel_MetaData[] = {
		{ "Category", "ZilbButton|Text" },
		{ "ModuleRelativePath", "Public/ZilbButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_TextLabel = { "TextLabel", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbButtonBase, TextLabel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_TextLabel_MetaData), Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_TextLabel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bUseDifferentTextOnGamepad_MetaData[] = {
		{ "Category", "ZilbButton|Text" },
		{ "ModuleRelativePath", "Public/ZilbButtonBase.h" },
	};
#endif
	void Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bUseDifferentTextOnGamepad_SetBit(void* Obj)
	{
		((UZilbButtonBase*)Obj)->bUseDifferentTextOnGamepad = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bUseDifferentTextOnGamepad = { "bUseDifferentTextOnGamepad", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZilbButtonBase), &Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bUseDifferentTextOnGamepad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bUseDifferentTextOnGamepad_MetaData), Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bUseDifferentTextOnGamepad_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_GamepadTextLabel_MetaData[] = {
		{ "Category", "ZilbButton|Text" },
		{ "EditCondition", "bUseDifferentTextOnGamepad" },
		{ "ModuleRelativePath", "Public/ZilbButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_GamepadTextLabel = { "GamepadTextLabel", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbButtonBase, GamepadTextLabel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_GamepadTextLabel_MetaData), Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_GamepadTextLabel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bUseDifferentTextWhenDisabled_MetaData[] = {
		{ "Category", "ZilbButton|Text" },
		{ "ModuleRelativePath", "Public/ZilbButtonBase.h" },
	};
#endif
	void Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bUseDifferentTextWhenDisabled_SetBit(void* Obj)
	{
		((UZilbButtonBase*)Obj)->bUseDifferentTextWhenDisabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bUseDifferentTextWhenDisabled = { "bUseDifferentTextWhenDisabled", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZilbButtonBase), &Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bUseDifferentTextWhenDisabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bUseDifferentTextWhenDisabled_MetaData), Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bUseDifferentTextWhenDisabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_DisabledTextLabel_MetaData[] = {
		{ "Category", "ZilbButton|Text" },
		{ "EditCondition", "bUseDifferentTextWhenDisabled" },
		{ "ModuleRelativePath", "Public/ZilbButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_DisabledTextLabel = { "DisabledTextLabel", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbButtonBase, DisabledTextLabel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_DisabledTextLabel_MetaData), Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_DisabledTextLabel_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_TransformPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_TransformPolicy_MetaData[] = {
		{ "Category", "ZilbButton|Text" },
		{ "ModuleRelativePath", "Public/ZilbButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_TransformPolicy = { "TransformPolicy", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbButtonBase, TransformPolicy), Z_Construct_UEnum_SlateCore_ETextTransformPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_TransformPolicy_MetaData), Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_TransformPolicy_MetaData) }; // 2229535241
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bOverrideTextStyleColors_MetaData[] = {
		{ "Category", "ZilbButton|Text" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Added override so we don't need to add multiple styles just for color variations.\n" },
#endif
		{ "ModuleRelativePath", "Public/ZilbButtonBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Added override so we don't need to add multiple styles just for color variations." },
#endif
	};
#endif
	void Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bOverrideTextStyleColors_SetBit(void* Obj)
	{
		((UZilbButtonBase*)Obj)->bOverrideTextStyleColors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bOverrideTextStyleColors = { "bOverrideTextStyleColors", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZilbButtonBase), &Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bOverrideTextStyleColors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bOverrideTextStyleColors_MetaData), Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bOverrideTextStyleColors_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_NormalTextColor_MetaData[] = {
		{ "Category", "ZilbButton|Text|Normal" },
		{ "EditCondition", "bOverrideTextStyleColors" },
		{ "ModuleRelativePath", "Public/ZilbButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_NormalTextColor = { "NormalTextColor", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbButtonBase, NormalTextColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_NormalTextColor_MetaData), Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_NormalTextColor_MetaData) }; // 3485079585
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_HoveredTextColor_MetaData[] = {
		{ "Category", "ZilbButton|Text|Normal" },
		{ "EditCondition", "bOverrideTextStyleColors" },
		{ "ModuleRelativePath", "Public/ZilbButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_HoveredTextColor = { "HoveredTextColor", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbButtonBase, HoveredTextColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_HoveredTextColor_MetaData), Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_HoveredTextColor_MetaData) }; // 3485079585
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_PressedTextColor_MetaData[] = {
		{ "Category", "ZilbButton|Text|Normal" },
		{ "EditCondition", "bOverrideTextStyleColors" },
		{ "ModuleRelativePath", "Public/ZilbButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_PressedTextColor = { "PressedTextColor", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbButtonBase, PressedTextColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_PressedTextColor_MetaData), Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_PressedTextColor_MetaData) }; // 3485079585
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_SelectedNormalTextColor_MetaData[] = {
		{ "Category", "ZilbButton|Text|Selected" },
		{ "EditCondition", "bOverrideTextStyleColors && bSelectable" },
		{ "ModuleRelativePath", "Public/ZilbButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_SelectedNormalTextColor = { "SelectedNormalTextColor", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbButtonBase, SelectedNormalTextColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_SelectedNormalTextColor_MetaData), Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_SelectedNormalTextColor_MetaData) }; // 3485079585
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_SelectedHoveredTextColor_MetaData[] = {
		{ "Category", "ZilbButton|Text|Selected" },
		{ "EditCondition", "bOverrideTextStyleColors && bSelectable" },
		{ "ModuleRelativePath", "Public/ZilbButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_SelectedHoveredTextColor = { "SelectedHoveredTextColor", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbButtonBase, SelectedHoveredTextColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_SelectedHoveredTextColor_MetaData), Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_SelectedHoveredTextColor_MetaData) }; // 3485079585
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_SelectedPressedTextColor_MetaData[] = {
		{ "Category", "ZilbButton|Text|Selected" },
		{ "EditCondition", "bOverrideTextStyleColors && bSelectable" },
		{ "ModuleRelativePath", "Public/ZilbButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_SelectedPressedTextColor = { "SelectedPressedTextColor", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbButtonBase, SelectedPressedTextColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_SelectedPressedTextColor_MetaData), Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_SelectedPressedTextColor_MetaData) }; // 3485079585
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_DisabledTextColor_MetaData[] = {
		{ "Category", "ZilbButton|Text|Disabled" },
		{ "EditCondition", "bOverrideTextStyleColors" },
		{ "ModuleRelativePath", "Public/ZilbButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_DisabledTextColor = { "DisabledTextColor", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbButtonBase, DisabledTextColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_DisabledTextColor_MetaData), Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_DisabledTextColor_MetaData) }; // 3485079585
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_HoldTimerTickHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZilbButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_HoldTimerTickHandle = { "HoldTimerTickHandle", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbButtonBase, HoldTimerTickHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_HoldTimerTickHandle_MetaData), Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_HoldTimerTickHandle_MetaData) }; // 3999327403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_LastHoldTimerTickTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZilbButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_LastHoldTimerTickTime = { "LastHoldTimerTickTime", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbButtonBase, LastHoldTimerTickTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_LastHoldTimerTickTime_MetaData), Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_LastHoldTimerTickTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_HoldTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZilbButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_HoldTime = { "HoldTime", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbButtonBase, HoldTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_HoldTime_MetaData), Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_HoldTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bHoldCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZilbButtonBase.h" },
	};
#endif
	void Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bHoldCompleted_SetBit(void* Obj)
	{
		((UZilbButtonBase*)Obj)->bHoldCompleted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bHoldCompleted = { "bHoldCompleted", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZilbButtonBase), &Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bHoldCompleted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bHoldCompleted_MetaData), Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bHoldCompleted_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZilbButtonBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bClickRequiresHold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_FocusOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_HoveredAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_PressedAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_SelectedAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_ButtonText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_KeyboardOnlyWidgetContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_GamepadOnlyWidgetContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bSetRenderOpacityOnDisable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_EnabledRenderOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_DisabledRenderOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_TextLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bUseDifferentTextOnGamepad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_GamepadTextLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bUseDifferentTextWhenDisabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_DisabledTextLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_TransformPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_TransformPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bOverrideTextStyleColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_NormalTextColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_HoveredTextColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_PressedTextColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_SelectedNormalTextColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_SelectedHoveredTextColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_SelectedPressedTextColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_DisabledTextColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_HoldTimerTickHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_LastHoldTimerTickTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_HoldTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbButtonBase_Statics::NewProp_bHoldCompleted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZilbButtonBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZilbButtonBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UZilbButtonBase_Statics::ClassParams = {
		&UZilbButtonBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UZilbButtonBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UZilbButtonBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbButtonBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UZilbButtonBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbButtonBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UZilbButtonBase()
	{
		if (!Z_Registration_Info_UClass_UZilbButtonBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZilbButtonBase.OuterSingleton, Z_Construct_UClass_UZilbButtonBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UZilbButtonBase.OuterSingleton;
	}
	template<> ZILBUI_API UClass* StaticClass<UZilbButtonBase>()
	{
		return UZilbButtonBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZilbButtonBase);
	UZilbButtonBase::~UZilbButtonBase() {}
	struct Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbButtonBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbButtonBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UZilbButtonBase, UZilbButtonBase::StaticClass, TEXT("UZilbButtonBase"), &Z_Registration_Info_UClass_UZilbButtonBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZilbButtonBase), 2453969155U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbButtonBase_h_1670282794(TEXT("/Script/ZilbUI"),
		Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbButtonBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbButtonBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
