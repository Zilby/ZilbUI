// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZilbUI/Public/ZilbWidgetBase.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZilbWidgetBase() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnInputAction__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ZilbUI();
	ZILBUI_API UClass* Z_Construct_UClass_UZilbWidgetBase();
	ZILBUI_API UClass* Z_Construct_UClass_UZilbWidgetBase_NoRegister();
	ZILBUI_API UFunction* Z_Construct_UDelegateFunction_UZilbWidgetBase_OnDestroyedDelegate__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UZilbWidgetBase_OnDestroyedDelegate__DelegateSignature_Statics
	{
		struct ZilbWidgetBase_eventOnDestroyedDelegate_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UZilbWidgetBase_OnDestroyedDelegate__DelegateSignature_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UZilbWidgetBase_OnDestroyedDelegate__DelegateSignature_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZilbWidgetBase_eventOnDestroyedDelegate_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UZilbWidgetBase_OnDestroyedDelegate__DelegateSignature_Statics::NewProp_Widget_MetaData), Z_Construct_UDelegateFunction_UZilbWidgetBase_OnDestroyedDelegate__DelegateSignature_Statics::NewProp_Widget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UZilbWidgetBase_OnDestroyedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UZilbWidgetBase_OnDestroyedDelegate__DelegateSignature_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UZilbWidgetBase_OnDestroyedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZilbWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UZilbWidgetBase_OnDestroyedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbWidgetBase, nullptr, "OnDestroyedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UZilbWidgetBase_OnDestroyedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UZilbWidgetBase_OnDestroyedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UZilbWidgetBase_OnDestroyedDelegate__DelegateSignature_Statics::ZilbWidgetBase_eventOnDestroyedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UZilbWidgetBase_OnDestroyedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UZilbWidgetBase_OnDestroyedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UZilbWidgetBase_OnDestroyedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UZilbWidgetBase_OnDestroyedDelegate__DelegateSignature_Statics::ZilbWidgetBase_eventOnDestroyedDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UZilbWidgetBase_OnDestroyedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UZilbWidgetBase_OnDestroyedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UZilbWidgetBase::FOnDestroyedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDestroyedDelegate, UUserWidget* Widget)
{
	struct ZilbWidgetBase_eventOnDestroyedDelegate_Parms
	{
		UUserWidget* Widget;
	};
	ZilbWidgetBase_eventOnDestroyedDelegate_Parms Parms;
	Parms.Widget=Widget;
	OnDestroyedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UZilbWidgetBase::execOnFadeTimerTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFadeTimerTick_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZilbWidgetBase::execOnDeactivatedAnimFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDeactivatedAnimFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZilbWidgetBase::execOnActivatedAnimFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActivatedAnimFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZilbWidgetBase::execBP_RegisterUIActionBinding)
	{
		P_GET_STRUCT(FDataTableRowHandle,Z_Param_Action);
		P_GET_UBOOL(Z_Param_bConsumeInput);
		P_GET_PROPERTY(FByteProperty,Z_Param_KeyEvent);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BP_RegisterUIActionBinding(Z_Param_Action,Z_Param_bConsumeInput,EInputEvent(Z_Param_KeyEvent),FOnInputAction(Z_Param_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZilbWidgetBase::execFadeIn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FadeIn(Z_Param_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZilbWidgetBase::execFadeOut)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FadeOut(Z_Param_Duration);
		P_NATIVE_END;
	}
	static FName NAME_UZilbWidgetBase_OnFadeTimerTick = FName(TEXT("OnFadeTimerTick"));
	void UZilbWidgetBase::OnFadeTimerTick()
	{
		ProcessEvent(FindFunctionChecked(NAME_UZilbWidgetBase_OnFadeTimerTick),NULL);
	}
	void UZilbWidgetBase::StaticRegisterNativesUZilbWidgetBase()
	{
		UClass* Class = UZilbWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_RegisterUIActionBinding", &UZilbWidgetBase::execBP_RegisterUIActionBinding },
			{ "FadeIn", &UZilbWidgetBase::execFadeIn },
			{ "FadeOut", &UZilbWidgetBase::execFadeOut },
			{ "OnActivatedAnimFinished", &UZilbWidgetBase::execOnActivatedAnimFinished },
			{ "OnDeactivatedAnimFinished", &UZilbWidgetBase::execOnDeactivatedAnimFinished },
			{ "OnFadeTimerTick", &UZilbWidgetBase::execOnFadeTimerTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UZilbWidgetBase_BP_RegisterUIActionBinding_Statics
	{
		struct ZilbWidgetBase_eventBP_RegisterUIActionBinding_Parms
		{
			FDataTableRowHandle Action;
			bool bConsumeInput;
			TEnumAsByte<EInputEvent> KeyEvent;
			FScriptDelegate Callback;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Action;
		static void NewProp_bConsumeInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsumeInput;
		static const UECodeGen_Private::FBytePropertyParams NewProp_KeyEvent;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZilbWidgetBase_BP_RegisterUIActionBinding_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZilbWidgetBase_eventBP_RegisterUIActionBinding_Parms, Action), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(0, nullptr) }; // 1575649708
	void Z_Construct_UFunction_UZilbWidgetBase_BP_RegisterUIActionBinding_Statics::NewProp_bConsumeInput_SetBit(void* Obj)
	{
		((ZilbWidgetBase_eventBP_RegisterUIActionBinding_Parms*)Obj)->bConsumeInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZilbWidgetBase_BP_RegisterUIActionBinding_Statics::NewProp_bConsumeInput = { "bConsumeInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZilbWidgetBase_eventBP_RegisterUIActionBinding_Parms), &Z_Construct_UFunction_UZilbWidgetBase_BP_RegisterUIActionBinding_Statics::NewProp_bConsumeInput_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZilbWidgetBase_BP_RegisterUIActionBinding_Statics::NewProp_KeyEvent = { "KeyEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZilbWidgetBase_eventBP_RegisterUIActionBinding_Parms, KeyEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(0, nullptr) }; // 4378987
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UZilbWidgetBase_BP_RegisterUIActionBinding_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZilbWidgetBase_eventBP_RegisterUIActionBinding_Parms, Callback), Z_Construct_UDelegateFunction_UMG_OnInputAction__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 459018301
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZilbWidgetBase_BP_RegisterUIActionBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbWidgetBase_BP_RegisterUIActionBinding_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbWidgetBase_BP_RegisterUIActionBinding_Statics::NewProp_bConsumeInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbWidgetBase_BP_RegisterUIActionBinding_Statics::NewProp_KeyEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbWidgetBase_BP_RegisterUIActionBinding_Statics::NewProp_Callback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbWidgetBase_BP_RegisterUIActionBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "DisplayName", "RegisterUIActionBinding" },
		{ "ModuleRelativePath", "Public/ZilbWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbWidgetBase_BP_RegisterUIActionBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbWidgetBase, nullptr, "BP_RegisterUIActionBinding", nullptr, nullptr, Z_Construct_UFunction_UZilbWidgetBase_BP_RegisterUIActionBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetBase_BP_RegisterUIActionBinding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZilbWidgetBase_BP_RegisterUIActionBinding_Statics::ZilbWidgetBase_eventBP_RegisterUIActionBinding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetBase_BP_RegisterUIActionBinding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbWidgetBase_BP_RegisterUIActionBinding_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetBase_BP_RegisterUIActionBinding_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZilbWidgetBase_BP_RegisterUIActionBinding_Statics::ZilbWidgetBase_eventBP_RegisterUIActionBinding_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZilbWidgetBase_BP_RegisterUIActionBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbWidgetBase_BP_RegisterUIActionBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZilbWidgetBase_FadeIn_Statics
	{
		struct ZilbWidgetBase_eventFadeIn_Parms
		{
			float Duration;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UZilbWidgetBase_FadeIn_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZilbWidgetBase_eventFadeIn_Parms, Duration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZilbWidgetBase_FadeIn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbWidgetBase_FadeIn_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbWidgetBase_FadeIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Visibility" },
		{ "ModuleRelativePath", "Public/ZilbWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbWidgetBase_FadeIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbWidgetBase, nullptr, "FadeIn", nullptr, nullptr, Z_Construct_UFunction_UZilbWidgetBase_FadeIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetBase_FadeIn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZilbWidgetBase_FadeIn_Statics::ZilbWidgetBase_eventFadeIn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetBase_FadeIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbWidgetBase_FadeIn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetBase_FadeIn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZilbWidgetBase_FadeIn_Statics::ZilbWidgetBase_eventFadeIn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZilbWidgetBase_FadeIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbWidgetBase_FadeIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZilbWidgetBase_FadeOut_Statics
	{
		struct ZilbWidgetBase_eventFadeOut_Parms
		{
			float Duration;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UZilbWidgetBase_FadeOut_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZilbWidgetBase_eventFadeOut_Parms, Duration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZilbWidgetBase_FadeOut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbWidgetBase_FadeOut_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbWidgetBase_FadeOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "Visibility" },
		{ "ModuleRelativePath", "Public/ZilbWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbWidgetBase_FadeOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbWidgetBase, nullptr, "FadeOut", nullptr, nullptr, Z_Construct_UFunction_UZilbWidgetBase_FadeOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetBase_FadeOut_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZilbWidgetBase_FadeOut_Statics::ZilbWidgetBase_eventFadeOut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetBase_FadeOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbWidgetBase_FadeOut_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetBase_FadeOut_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZilbWidgetBase_FadeOut_Statics::ZilbWidgetBase_eventFadeOut_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZilbWidgetBase_FadeOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbWidgetBase_FadeOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZilbWidgetBase_OnActivatedAnimFinished_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbWidgetBase_OnActivatedAnimFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZilbWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbWidgetBase_OnActivatedAnimFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbWidgetBase, nullptr, "OnActivatedAnimFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetBase_OnActivatedAnimFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbWidgetBase_OnActivatedAnimFinished_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UZilbWidgetBase_OnActivatedAnimFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbWidgetBase_OnActivatedAnimFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZilbWidgetBase_OnDeactivatedAnimFinished_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbWidgetBase_OnDeactivatedAnimFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZilbWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbWidgetBase_OnDeactivatedAnimFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbWidgetBase, nullptr, "OnDeactivatedAnimFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetBase_OnDeactivatedAnimFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbWidgetBase_OnDeactivatedAnimFinished_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UZilbWidgetBase_OnDeactivatedAnimFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbWidgetBase_OnDeactivatedAnimFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZilbWidgetBase_OnFadeTimerTick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbWidgetBase_OnFadeTimerTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZilbWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbWidgetBase_OnFadeTimerTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbWidgetBase, nullptr, "OnFadeTimerTick", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetBase_OnFadeTimerTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbWidgetBase_OnFadeTimerTick_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UZilbWidgetBase_OnFadeTimerTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbWidgetBase_OnFadeTimerTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UZilbWidgetBase);
	UClass* Z_Construct_UClass_UZilbWidgetBase_NoRegister()
	{
		return UZilbWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UZilbWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDestroyedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDestroyedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FadeUpdateInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeUpdateInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFadeInOnActivate_MetaData[];
#endif
		static void NewProp_bFadeInOnActivate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFadeInOnActivate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFadeOutOnDeactivate_MetaData[];
#endif
		static void NewProp_bFadeOutOnDeactivate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFadeOutOnDeactivate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFadeDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultFadeDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDelayActivationForFade_MetaData[];
#endif
		static void NewProp_bDelayActivationForFade_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDelayActivationForFade;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDelayDeactivationForFade_MetaData[];
#endif
		static void NewProp_bDelayDeactivationForFade_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDelayDeactivationForFade;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFadingIn_MetaData[];
#endif
		static void NewProp_bFadingIn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFadingIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDelayActivationForAnim_MetaData[];
#endif
		static void NewProp_bDelayActivationForAnim_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDelayActivationForAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDelayDeactivationForAnim_MetaData[];
#endif
		static void NewProp_bDelayDeactivationForAnim_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDelayDeactivationForAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivatedAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivatedAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeactivatedAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DeactivatedAnim;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZilbWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ZilbUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UZilbWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UZilbWidgetBase_BP_RegisterUIActionBinding, "BP_RegisterUIActionBinding" }, // 1260477849
		{ &Z_Construct_UFunction_UZilbWidgetBase_FadeIn, "FadeIn" }, // 2908077851
		{ &Z_Construct_UFunction_UZilbWidgetBase_FadeOut, "FadeOut" }, // 4004121575
		{ &Z_Construct_UFunction_UZilbWidgetBase_OnActivatedAnimFinished, "OnActivatedAnimFinished" }, // 3429109143
		{ &Z_Construct_UFunction_UZilbWidgetBase_OnDeactivatedAnimFinished, "OnDeactivatedAnimFinished" }, // 2993833301
		{ &Z_Construct_UDelegateFunction_UZilbWidgetBase_OnDestroyedDelegate__DelegateSignature, "OnDestroyedDelegate__DelegateSignature" }, // 935094130
		{ &Z_Construct_UFunction_UZilbWidgetBase_OnFadeTimerTick, "OnFadeTimerTick" }, // 759368364
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ZilbWidgetBase.h" },
		{ "ModuleRelativePath", "Public/ZilbWidgetBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_OnDestroyedDelegate_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// End UUserWidget Interface\n" },
#endif
		{ "ModuleRelativePath", "Public/ZilbWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "End UUserWidget Interface" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_OnDestroyedDelegate = { "OnDestroyedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbWidgetBase, OnDestroyedDelegate), Z_Construct_UDelegateFunction_UZilbWidgetBase_OnDestroyedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_OnDestroyedDelegate_MetaData), Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_OnDestroyedDelegate_MetaData) }; // 935094130
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_FadeUpdateInterval_MetaData[] = {
		{ "Category", "Visibility" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The interval in seconds, between interpolation updates. 0.0 implies per-frame updates. */" },
#endif
		{ "ModuleRelativePath", "Public/ZilbWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The interval in seconds, between interpolation updates. 0.0 implies per-frame updates." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_FadeUpdateInterval = { "FadeUpdateInterval", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbWidgetBase, FadeUpdateInterval), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_FadeUpdateInterval_MetaData), Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_FadeUpdateInterval_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bFadeInOnActivate_MetaData[] = {
		{ "Category", "Visibility" },
		{ "ModuleRelativePath", "Public/ZilbWidgetBase.h" },
	};
#endif
	void Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bFadeInOnActivate_SetBit(void* Obj)
	{
		((UZilbWidgetBase*)Obj)->bFadeInOnActivate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bFadeInOnActivate = { "bFadeInOnActivate", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZilbWidgetBase), &Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bFadeInOnActivate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bFadeInOnActivate_MetaData), Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bFadeInOnActivate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bFadeOutOnDeactivate_MetaData[] = {
		{ "Category", "Visibility" },
		{ "ModuleRelativePath", "Public/ZilbWidgetBase.h" },
	};
#endif
	void Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bFadeOutOnDeactivate_SetBit(void* Obj)
	{
		((UZilbWidgetBase*)Obj)->bFadeOutOnDeactivate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bFadeOutOnDeactivate = { "bFadeOutOnDeactivate", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZilbWidgetBase), &Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bFadeOutOnDeactivate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bFadeOutOnDeactivate_MetaData), Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bFadeOutOnDeactivate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_DefaultFadeDuration_MetaData[] = {
		{ "Category", "Visibility" },
		{ "ModuleRelativePath", "Public/ZilbWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_DefaultFadeDuration = { "DefaultFadeDuration", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbWidgetBase, DefaultFadeDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_DefaultFadeDuration_MetaData), Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_DefaultFadeDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bDelayActivationForFade_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Determines whether the widget activates before or after fading in\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ZilbWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines whether the widget activates before or after fading in" },
#endif
	};
#endif
	void Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bDelayActivationForFade_SetBit(void* Obj)
	{
		((UZilbWidgetBase*)Obj)->bDelayActivationForFade = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bDelayActivationForFade = { "bDelayActivationForFade", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZilbWidgetBase), &Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bDelayActivationForFade_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bDelayActivationForFade_MetaData), Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bDelayActivationForFade_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bDelayDeactivationForFade_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Determines whether the widget deactivates before or after fading out\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ZilbWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines whether the widget deactivates before or after fading out" },
#endif
	};
#endif
	void Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bDelayDeactivationForFade_SetBit(void* Obj)
	{
		((UZilbWidgetBase*)Obj)->bDelayDeactivationForFade = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bDelayDeactivationForFade = { "bDelayDeactivationForFade", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZilbWidgetBase), &Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bDelayDeactivationForFade_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bDelayDeactivationForFade_MetaData), Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bDelayDeactivationForFade_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bFadingIn_MetaData[] = {
		{ "Category", "Visibility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Whether or not this widget is currently fading in or out\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ZilbWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or not this widget is currently fading in or out" },
#endif
	};
#endif
	void Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bFadingIn_SetBit(void* Obj)
	{
		((UZilbWidgetBase*)Obj)->bFadingIn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bFadingIn = { "bFadingIn", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZilbWidgetBase), &Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bFadingIn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bFadingIn_MetaData), Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bFadingIn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bDelayActivationForAnim_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Determines whether the widget activates before or after the corresponding\n\x09 * animation plays.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ZilbWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines whether the widget activates before or after the corresponding\nanimation plays." },
#endif
	};
#endif
	void Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bDelayActivationForAnim_SetBit(void* Obj)
	{
		((UZilbWidgetBase*)Obj)->bDelayActivationForAnim = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bDelayActivationForAnim = { "bDelayActivationForAnim", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZilbWidgetBase), &Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bDelayActivationForAnim_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bDelayActivationForAnim_MetaData), Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bDelayActivationForAnim_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bDelayDeactivationForAnim_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Determines whether the widget deactivates before or after the corresponding\n\x09 * animation plays.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ZilbWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines whether the widget deactivates before or after the corresponding\nanimation plays." },
#endif
	};
#endif
	void Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bDelayDeactivationForAnim_SetBit(void* Obj)
	{
		((UZilbWidgetBase*)Obj)->bDelayDeactivationForAnim = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bDelayDeactivationForAnim = { "bDelayDeactivationForAnim", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZilbWidgetBase), &Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bDelayDeactivationForAnim_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bDelayDeactivationForAnim_MetaData), Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bDelayDeactivationForAnim_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_ActivatedAnim_MetaData[] = {
		{ "BindWidgetAnimOptional", "" },
		{ "Category", "ZilbWidgetBase" },
		{ "ModuleRelativePath", "Public/ZilbWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_ActivatedAnim = { "ActivatedAnim", nullptr, (EPropertyFlags)0x0020080000002004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbWidgetBase, ActivatedAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_ActivatedAnim_MetaData), Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_ActivatedAnim_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_DeactivatedAnim_MetaData[] = {
		{ "BindWidgetAnimOptional", "" },
		{ "Category", "ZilbWidgetBase" },
		{ "ModuleRelativePath", "Public/ZilbWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_DeactivatedAnim = { "DeactivatedAnim", nullptr, (EPropertyFlags)0x0020080000002004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbWidgetBase, DeactivatedAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_DeactivatedAnim_MetaData), Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_DeactivatedAnim_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZilbWidgetBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_OnDestroyedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_FadeUpdateInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bFadeInOnActivate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bFadeOutOnDeactivate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_DefaultFadeDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bDelayActivationForFade,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bDelayDeactivationForFade,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bFadingIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bDelayActivationForAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_bDelayDeactivationForAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_ActivatedAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbWidgetBase_Statics::NewProp_DeactivatedAnim,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZilbWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZilbWidgetBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UZilbWidgetBase_Statics::ClassParams = {
		&UZilbWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UZilbWidgetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UZilbWidgetBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UZilbWidgetBase()
	{
		if (!Z_Registration_Info_UClass_UZilbWidgetBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZilbWidgetBase.OuterSingleton, Z_Construct_UClass_UZilbWidgetBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UZilbWidgetBase.OuterSingleton;
	}
	template<> ZILBUI_API UClass* StaticClass<UZilbWidgetBase>()
	{
		return UZilbWidgetBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZilbWidgetBase);
	UZilbWidgetBase::~UZilbWidgetBase() {}
	struct Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UZilbWidgetBase, UZilbWidgetBase::StaticClass, TEXT("UZilbWidgetBase"), &Z_Registration_Info_UClass_UZilbWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZilbWidgetBase), 455410608U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetBase_h_1487798113(TEXT("/Script/ZilbUI"),
		Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
