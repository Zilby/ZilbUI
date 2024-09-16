// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZilbUI/Public/ZilbUIMaterialUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZilbUIMaterialUtils() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ZilbUI();
	ZILBUI_API UClass* Z_Construct_UClass_UZilbUIMaterialUtils();
	ZILBUI_API UClass* Z_Construct_UClass_UZilbUIMaterialUtils_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UZilbUIMaterialUtils::execGetMaterialAnimationLength)
	{
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_Mat);
		P_GET_PROPERTY(FNameProperty,Z_Param_MatParam);
		P_GET_UBOOL(Z_Param_bReverse);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UZilbUIMaterialUtils::GetMaterialAnimationLength(Z_Param_Mat,Z_Param_MatParam,Z_Param_bReverse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZilbUIMaterialUtils::execSetMaterialAnimation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_Mat);
		P_GET_UBOOL(Z_Param_bReverse);
		P_GET_TARRAY(FName,Z_Param_MParams);
		P_GET_UBOOL(Z_Param_bLerp);
		P_GET_UBOOL(Z_Param_bIgnoreCurrentState);
		P_FINISH;
		P_NATIVE_BEGIN;
		UZilbUIMaterialUtils::SetMaterialAnimation(Z_Param_WorldContextObject,Z_Param_Mat,Z_Param_bReverse,Z_Param_MParams,Z_Param_bLerp,Z_Param_bIgnoreCurrentState);
		P_NATIVE_END;
	}
	void UZilbUIMaterialUtils::StaticRegisterNativesUZilbUIMaterialUtils()
	{
		UClass* Class = UZilbUIMaterialUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaterialAnimationLength", &UZilbUIMaterialUtils::execGetMaterialAnimationLength },
			{ "SetMaterialAnimation", &UZilbUIMaterialUtils::execSetMaterialAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UZilbUIMaterialUtils_GetMaterialAnimationLength_Statics
	{
		struct ZilbUIMaterialUtils_eventGetMaterialAnimationLength_Parms
		{
			UMaterialInstanceDynamic* Mat;
			FName MatParam;
			bool bReverse;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mat;
		static const UECodeGen_Private::FNamePropertyParams NewProp_MatParam;
		static void NewProp_bReverse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverse;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZilbUIMaterialUtils_GetMaterialAnimationLength_Statics::NewProp_Mat = { "Mat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZilbUIMaterialUtils_eventGetMaterialAnimationLength_Parms, Mat), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UZilbUIMaterialUtils_GetMaterialAnimationLength_Statics::NewProp_MatParam = { "MatParam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZilbUIMaterialUtils_eventGetMaterialAnimationLength_Parms, MatParam), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZilbUIMaterialUtils_GetMaterialAnimationLength_Statics::NewProp_bReverse_SetBit(void* Obj)
	{
		((ZilbUIMaterialUtils_eventGetMaterialAnimationLength_Parms*)Obj)->bReverse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZilbUIMaterialUtils_GetMaterialAnimationLength_Statics::NewProp_bReverse = { "bReverse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZilbUIMaterialUtils_eventGetMaterialAnimationLength_Parms), &Z_Construct_UFunction_UZilbUIMaterialUtils_GetMaterialAnimationLength_Statics::NewProp_bReverse_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UZilbUIMaterialUtils_GetMaterialAnimationLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZilbUIMaterialUtils_eventGetMaterialAnimationLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZilbUIMaterialUtils_GetMaterialAnimationLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbUIMaterialUtils_GetMaterialAnimationLength_Statics::NewProp_Mat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbUIMaterialUtils_GetMaterialAnimationLength_Statics::NewProp_MatParam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbUIMaterialUtils_GetMaterialAnimationLength_Statics::NewProp_bReverse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbUIMaterialUtils_GetMaterialAnimationLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbUIMaterialUtils_GetMaterialAnimationLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Material Animation" },
		{ "CPP_Default_bReverse", "false" },
		{ "ModuleRelativePath", "Public/ZilbUIMaterialUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbUIMaterialUtils_GetMaterialAnimationLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbUIMaterialUtils, nullptr, "GetMaterialAnimationLength", nullptr, nullptr, Z_Construct_UFunction_UZilbUIMaterialUtils_GetMaterialAnimationLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbUIMaterialUtils_GetMaterialAnimationLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZilbUIMaterialUtils_GetMaterialAnimationLength_Statics::ZilbUIMaterialUtils_eventGetMaterialAnimationLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbUIMaterialUtils_GetMaterialAnimationLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbUIMaterialUtils_GetMaterialAnimationLength_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbUIMaterialUtils_GetMaterialAnimationLength_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZilbUIMaterialUtils_GetMaterialAnimationLength_Statics::ZilbUIMaterialUtils_eventGetMaterialAnimationLength_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZilbUIMaterialUtils_GetMaterialAnimationLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbUIMaterialUtils_GetMaterialAnimationLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZilbUIMaterialUtils_SetMaterialAnimation_Statics
	{
		struct ZilbUIMaterialUtils_eventSetMaterialAnimation_Parms
		{
			UObject* WorldContextObject;
			UMaterialInstanceDynamic* Mat;
			bool bReverse;
			TArray<FName> MParams;
			bool bLerp;
			bool bIgnoreCurrentState;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mat;
		static void NewProp_bReverse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverse;
		static const UECodeGen_Private::FNamePropertyParams NewProp_MParams_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MParams;
		static void NewProp_bLerp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLerp;
		static void NewProp_bIgnoreCurrentState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreCurrentState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZilbUIMaterialUtils_SetMaterialAnimation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZilbUIMaterialUtils_eventSetMaterialAnimation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZilbUIMaterialUtils_SetMaterialAnimation_Statics::NewProp_Mat = { "Mat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZilbUIMaterialUtils_eventSetMaterialAnimation_Parms, Mat), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZilbUIMaterialUtils_SetMaterialAnimation_Statics::NewProp_bReverse_SetBit(void* Obj)
	{
		((ZilbUIMaterialUtils_eventSetMaterialAnimation_Parms*)Obj)->bReverse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZilbUIMaterialUtils_SetMaterialAnimation_Statics::NewProp_bReverse = { "bReverse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZilbUIMaterialUtils_eventSetMaterialAnimation_Parms), &Z_Construct_UFunction_UZilbUIMaterialUtils_SetMaterialAnimation_Statics::NewProp_bReverse_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UZilbUIMaterialUtils_SetMaterialAnimation_Statics::NewProp_MParams_Inner = { "MParams", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UZilbUIMaterialUtils_SetMaterialAnimation_Statics::NewProp_MParams = { "MParams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZilbUIMaterialUtils_eventSetMaterialAnimation_Parms, MParams), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZilbUIMaterialUtils_SetMaterialAnimation_Statics::NewProp_bLerp_SetBit(void* Obj)
	{
		((ZilbUIMaterialUtils_eventSetMaterialAnimation_Parms*)Obj)->bLerp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZilbUIMaterialUtils_SetMaterialAnimation_Statics::NewProp_bLerp = { "bLerp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZilbUIMaterialUtils_eventSetMaterialAnimation_Parms), &Z_Construct_UFunction_UZilbUIMaterialUtils_SetMaterialAnimation_Statics::NewProp_bLerp_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZilbUIMaterialUtils_SetMaterialAnimation_Statics::NewProp_bIgnoreCurrentState_SetBit(void* Obj)
	{
		((ZilbUIMaterialUtils_eventSetMaterialAnimation_Parms*)Obj)->bIgnoreCurrentState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZilbUIMaterialUtils_SetMaterialAnimation_Statics::NewProp_bIgnoreCurrentState = { "bIgnoreCurrentState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZilbUIMaterialUtils_eventSetMaterialAnimation_Parms), &Z_Construct_UFunction_UZilbUIMaterialUtils_SetMaterialAnimation_Statics::NewProp_bIgnoreCurrentState_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZilbUIMaterialUtils_SetMaterialAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbUIMaterialUtils_SetMaterialAnimation_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbUIMaterialUtils_SetMaterialAnimation_Statics::NewProp_Mat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbUIMaterialUtils_SetMaterialAnimation_Statics::NewProp_bReverse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbUIMaterialUtils_SetMaterialAnimation_Statics::NewProp_MParams_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbUIMaterialUtils_SetMaterialAnimation_Statics::NewProp_MParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbUIMaterialUtils_SetMaterialAnimation_Statics::NewProp_bLerp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZilbUIMaterialUtils_SetMaterialAnimation_Statics::NewProp_bIgnoreCurrentState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZilbUIMaterialUtils_SetMaterialAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Material Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets the material animation for the given material's parameters.\n\x09*\n\x09* @param bLerp - Whether the animation should change states gradually or instantaneously.\n\x09* @param bIgnoreCurrentState - Whether we should ignore the current state of the curve animation.\n\x09*/" },
#endif
		{ "CPP_Default_bIgnoreCurrentState", "false" },
		{ "CPP_Default_bLerp", "true" },
		{ "ModuleRelativePath", "Public/ZilbUIMaterialUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the material animation for the given material's parameters.\n\n@param bLerp - Whether the animation should change states gradually or instantaneously.\n@param bIgnoreCurrentState - Whether we should ignore the current state of the curve animation." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZilbUIMaterialUtils_SetMaterialAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZilbUIMaterialUtils, nullptr, "SetMaterialAnimation", nullptr, nullptr, Z_Construct_UFunction_UZilbUIMaterialUtils_SetMaterialAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbUIMaterialUtils_SetMaterialAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZilbUIMaterialUtils_SetMaterialAnimation_Statics::ZilbUIMaterialUtils_eventSetMaterialAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbUIMaterialUtils_SetMaterialAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZilbUIMaterialUtils_SetMaterialAnimation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZilbUIMaterialUtils_SetMaterialAnimation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZilbUIMaterialUtils_SetMaterialAnimation_Statics::ZilbUIMaterialUtils_eventSetMaterialAnimation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZilbUIMaterialUtils_SetMaterialAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZilbUIMaterialUtils_SetMaterialAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UZilbUIMaterialUtils);
	UClass* Z_Construct_UClass_UZilbUIMaterialUtils_NoRegister()
	{
		return UZilbUIMaterialUtils::StaticClass();
	}
	struct Z_Construct_UClass_UZilbUIMaterialUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZilbUIMaterialUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ZilbUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbUIMaterialUtils_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UZilbUIMaterialUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UZilbUIMaterialUtils_GetMaterialAnimationLength, "GetMaterialAnimationLength" }, // 762949511
		{ &Z_Construct_UFunction_UZilbUIMaterialUtils_SetMaterialAnimation, "SetMaterialAnimation" }, // 439812594
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbUIMaterialUtils_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbUIMaterialUtils_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ZilbUIMaterialUtils.h" },
		{ "ModuleRelativePath", "Public/ZilbUIMaterialUtils.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZilbUIMaterialUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZilbUIMaterialUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UZilbUIMaterialUtils_Statics::ClassParams = {
		&UZilbUIMaterialUtils::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbUIMaterialUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UZilbUIMaterialUtils_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UZilbUIMaterialUtils()
	{
		if (!Z_Registration_Info_UClass_UZilbUIMaterialUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZilbUIMaterialUtils.OuterSingleton, Z_Construct_UClass_UZilbUIMaterialUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UZilbUIMaterialUtils.OuterSingleton;
	}
	template<> ZILBUI_API UClass* StaticClass<UZilbUIMaterialUtils>()
	{
		return UZilbUIMaterialUtils::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZilbUIMaterialUtils);
	UZilbUIMaterialUtils::~UZilbUIMaterialUtils() {}
	struct Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbUIMaterialUtils_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbUIMaterialUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UZilbUIMaterialUtils, UZilbUIMaterialUtils::StaticClass, TEXT("UZilbUIMaterialUtils"), &Z_Registration_Info_UClass_UZilbUIMaterialUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZilbUIMaterialUtils), 2825273420U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbUIMaterialUtils_h_531143227(TEXT("/Script/ZilbUI"),
		Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbUIMaterialUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbUIMaterialUtils_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
