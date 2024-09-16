// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZilbUI/Public/ZilbWidgetStack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZilbWidgetStack() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidgetStack();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UPackage* Z_Construct_UPackage__Script_ZilbUI();
	ZILBUI_API UClass* Z_Construct_UClass_UZilbWidgetStack();
	ZILBUI_API UClass* Z_Construct_UClass_UZilbWidgetStack_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UZilbWidgetStack::execClearWidgetsInstantly)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearWidgetsInstantly();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZilbWidgetStack::execPopWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PopWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZilbWidgetStack::execSetRootContentWidgetClass)
	{
		P_GET_OBJECT(UClass,Z_Param_WidgetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRootContentWidgetClass(Z_Param_WidgetClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZilbWidgetStack::execGetTopmostWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCommonActivatableWidget**)Z_Param__Result=P_THIS->GetTopmostWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZilbWidgetStack::execGetWidgetCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetWidgetCount();
		P_NATIVE_END;
	}
	void UZilbWidgetStack::StaticRegisterNativesUZilbWidgetStack()
	{
		UClass* Class = UZilbWidgetStack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearWidgetsInstantly", &UZilbWidgetStack::execClearWidgetsInstantly },
			{ "GetTopmostWidget", &UZilbWidgetStack::execGetTopmostWidget },
			{ "GetWidgetCount", &UZilbWidgetStack::execGetWidgetCount },
			{ "PopWidget", &UZilbWidgetStack::execPopWidget },
			{ "SetRootContentWidgetClass", &UZilbWidgetStack::execSetRootContentWidgetClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UZilbWidgetStack_ClearWidgetsInstantly_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbWidgetStack_ClearWidgetsInstantly_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZilbWidgetStack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbWidgetStack_ClearWidgetsInstantly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbWidgetStack, nullptr, "ClearWidgetsInstantly", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetStack_ClearWidgetsInstantly_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbWidgetStack_ClearWidgetsInstantly_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UZilbWidgetStack_ClearWidgetsInstantly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbWidgetStack_ClearWidgetsInstantly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZilbWidgetStack_GetTopmostWidget_Statics
	{
		struct ZilbWidgetStack_eventGetTopmostWidget_Parms
		{
			UCommonActivatableWidget* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbWidgetStack_GetTopmostWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZilbWidgetStack_GetTopmostWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZilbWidgetStack_eventGetTopmostWidget_Parms, ReturnValue), Z_Construct_UClass_UCommonActivatableWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetStack_GetTopmostWidget_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UZilbWidgetStack_GetTopmostWidget_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZilbWidgetStack_GetTopmostWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbWidgetStack_GetTopmostWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbWidgetStack_GetTopmostWidget_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the topmost widget in the stack. This may be different from GetActiveWidget() if the active widget is animating in/out.\n" },
#endif
		{ "ModuleRelativePath", "Public/ZilbWidgetStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the topmost widget in the stack. This may be different from GetActiveWidget() if the active widget is animating in/out." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbWidgetStack_GetTopmostWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbWidgetStack, nullptr, "GetTopmostWidget", nullptr, nullptr, Z_Construct_UFunction_UZilbWidgetStack_GetTopmostWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetStack_GetTopmostWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZilbWidgetStack_GetTopmostWidget_Statics::ZilbWidgetStack_eventGetTopmostWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetStack_GetTopmostWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbWidgetStack_GetTopmostWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetStack_GetTopmostWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZilbWidgetStack_GetTopmostWidget_Statics::ZilbWidgetStack_eventGetTopmostWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZilbWidgetStack_GetTopmostWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbWidgetStack_GetTopmostWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZilbWidgetStack_GetWidgetCount_Statics
	{
		struct ZilbWidgetStack_eventGetWidgetCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UZilbWidgetStack_GetWidgetCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZilbWidgetStack_eventGetWidgetCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZilbWidgetStack_GetWidgetCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbWidgetStack_GetWidgetCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbWidgetStack_GetWidgetCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZilbWidgetStack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbWidgetStack_GetWidgetCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbWidgetStack, nullptr, "GetWidgetCount", nullptr, nullptr, Z_Construct_UFunction_UZilbWidgetStack_GetWidgetCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetStack_GetWidgetCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZilbWidgetStack_GetWidgetCount_Statics::ZilbWidgetStack_eventGetWidgetCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetStack_GetWidgetCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbWidgetStack_GetWidgetCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetStack_GetWidgetCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZilbWidgetStack_GetWidgetCount_Statics::ZilbWidgetStack_eventGetWidgetCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZilbWidgetStack_GetWidgetCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbWidgetStack_GetWidgetCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZilbWidgetStack_PopWidget_Statics
	{
		struct ZilbWidgetStack_eventPopWidget_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZilbWidgetStack_PopWidget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZilbWidgetStack_eventPopWidget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZilbWidgetStack_PopWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZilbWidgetStack_eventPopWidget_Parms), &Z_Construct_UFunction_UZilbWidgetStack_PopWidget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZilbWidgetStack_PopWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbWidgetStack_PopWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbWidgetStack_PopWidget_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pops the currently active widget, unless it's the root content widget.\n" },
#endif
		{ "ModuleRelativePath", "Public/ZilbWidgetStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pops the currently active widget, unless it's the root content widget." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbWidgetStack_PopWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbWidgetStack, nullptr, "PopWidget", nullptr, nullptr, Z_Construct_UFunction_UZilbWidgetStack_PopWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetStack_PopWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZilbWidgetStack_PopWidget_Statics::ZilbWidgetStack_eventPopWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetStack_PopWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbWidgetStack_PopWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetStack_PopWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZilbWidgetStack_PopWidget_Statics::ZilbWidgetStack_eventPopWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZilbWidgetStack_PopWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbWidgetStack_PopWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZilbWidgetStack_SetRootContentWidgetClass_Statics
	{
		struct ZilbWidgetStack_eventSetRootContentWidgetClass_Parms
		{
			TSubclassOf<UCommonActivatableWidget>  WidgetClass;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UZilbWidgetStack_SetRootContentWidgetClass_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZilbWidgetStack_eventSetRootContentWidgetClass_Parms, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonActivatableWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZilbWidgetStack_SetRootContentWidgetClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbWidgetStack_SetRootContentWidgetClass_Statics::NewProp_WidgetClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbWidgetStack_SetRootContentWidgetClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZilbWidgetStack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbWidgetStack_SetRootContentWidgetClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbWidgetStack, nullptr, "SetRootContentWidgetClass", nullptr, nullptr, Z_Construct_UFunction_UZilbWidgetStack_SetRootContentWidgetClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetStack_SetRootContentWidgetClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZilbWidgetStack_SetRootContentWidgetClass_Statics::ZilbWidgetStack_eventSetRootContentWidgetClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetStack_SetRootContentWidgetClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbWidgetStack_SetRootContentWidgetClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbWidgetStack_SetRootContentWidgetClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZilbWidgetStack_SetRootContentWidgetClass_Statics::ZilbWidgetStack_eventSetRootContentWidgetClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZilbWidgetStack_SetRootContentWidgetClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbWidgetStack_SetRootContentWidgetClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UZilbWidgetStack);
	UClass* Z_Construct_UClass_UZilbWidgetStack_NoRegister()
	{
		return UZilbWidgetStack::StaticClass();
	}
	struct Z_Construct_UClass_UZilbWidgetStack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZilbWidgetStack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidgetStack,
		(UObject* (*)())Z_Construct_UPackage__Script_ZilbUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetStack_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UZilbWidgetStack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UZilbWidgetStack_ClearWidgetsInstantly, "ClearWidgetsInstantly" }, // 3083714838
		{ &Z_Construct_UFunction_UZilbWidgetStack_GetTopmostWidget, "GetTopmostWidget" }, // 4200907439
		{ &Z_Construct_UFunction_UZilbWidgetStack_GetWidgetCount, "GetWidgetCount" }, // 310979185
		{ &Z_Construct_UFunction_UZilbWidgetStack_PopWidget, "PopWidget" }, // 1416517428
		{ &Z_Construct_UFunction_UZilbWidgetStack_SetRootContentWidgetClass, "SetRootContentWidgetClass" }, // 1909008788
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetStack_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbWidgetStack_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UCommonActivatableWidgetStack pools its widgets in such a way that they are destroyed and recreated\n * when they are inactive. Only use this class for showing one-off widgets that don't need to preserve state.\n */" },
#endif
		{ "IncludePath", "ZilbWidgetStack.h" },
		{ "ModuleRelativePath", "Public/ZilbWidgetStack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UCommonActivatableWidgetStack pools its widgets in such a way that they are destroyed and recreated\nwhen they are inactive. Only use this class for showing one-off widgets that don't need to preserve state." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZilbWidgetStack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZilbWidgetStack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UZilbWidgetStack_Statics::ClassParams = {
		&UZilbWidgetStack::StaticClass,
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
		0x00B000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbWidgetStack_Statics::Class_MetaDataParams), Z_Construct_UClass_UZilbWidgetStack_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UZilbWidgetStack()
	{
		if (!Z_Registration_Info_UClass_UZilbWidgetStack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZilbWidgetStack.OuterSingleton, Z_Construct_UClass_UZilbWidgetStack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UZilbWidgetStack.OuterSingleton;
	}
	template<> ZILBUI_API UClass* StaticClass<UZilbWidgetStack>()
	{
		return UZilbWidgetStack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZilbWidgetStack);
	UZilbWidgetStack::~UZilbWidgetStack() {}
	struct Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetStack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetStack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UZilbWidgetStack, UZilbWidgetStack::StaticClass, TEXT("UZilbWidgetStack"), &Z_Registration_Info_UClass_UZilbWidgetStack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZilbWidgetStack), 1764243036U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetStack_h_2713209796(TEXT("/Script/ZilbUI"),
		Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetStack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetStack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
