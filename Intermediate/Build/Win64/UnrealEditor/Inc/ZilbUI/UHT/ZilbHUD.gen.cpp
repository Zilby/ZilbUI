// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZilbUI/Public/ZilbHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZilbHUD() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_ZilbUI();
	ZILBUI_API UClass* Z_Construct_UClass_AZilbHUD();
	ZILBUI_API UClass* Z_Construct_UClass_AZilbHUD_NoRegister();
	ZILBUI_API UFunction* Z_Construct_UDelegateFunction_ZilbUI_ZilbHUDWidgetVisibilityChangedDelegate__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ZilbUI_ZilbHUDWidgetVisibilityChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_ZilbUI_eventZilbHUDWidgetVisibilityChangedDelegate_Parms
		{
			AZilbHUD* HUD;
			bool bIsVisible;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HUD;
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ZilbUI_ZilbHUDWidgetVisibilityChangedDelegate__DelegateSignature_Statics::NewProp_HUD = { "HUD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ZilbUI_eventZilbHUDWidgetVisibilityChangedDelegate_Parms, HUD), Z_Construct_UClass_AZilbHUD_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UDelegateFunction_ZilbUI_ZilbHUDWidgetVisibilityChangedDelegate__DelegateSignature_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((_Script_ZilbUI_eventZilbHUDWidgetVisibilityChangedDelegate_Parms*)Obj)->bIsVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ZilbUI_ZilbHUDWidgetVisibilityChangedDelegate__DelegateSignature_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ZilbUI_eventZilbHUDWidgetVisibilityChangedDelegate_Parms), &Z_Construct_UDelegateFunction_ZilbUI_ZilbHUDWidgetVisibilityChangedDelegate__DelegateSignature_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ZilbUI_ZilbHUDWidgetVisibilityChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ZilbUI_ZilbHUDWidgetVisibilityChangedDelegate__DelegateSignature_Statics::NewProp_HUD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ZilbUI_ZilbHUDWidgetVisibilityChangedDelegate__DelegateSignature_Statics::NewProp_bIsVisible,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ZilbUI_ZilbHUDWidgetVisibilityChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZilbHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ZilbUI_ZilbHUDWidgetVisibilityChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ZilbUI, nullptr, "ZilbHUDWidgetVisibilityChangedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ZilbUI_ZilbHUDWidgetVisibilityChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ZilbUI_ZilbHUDWidgetVisibilityChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ZilbUI_ZilbHUDWidgetVisibilityChangedDelegate__DelegateSignature_Statics::_Script_ZilbUI_eventZilbHUDWidgetVisibilityChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ZilbUI_ZilbHUDWidgetVisibilityChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ZilbUI_ZilbHUDWidgetVisibilityChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ZilbUI_ZilbHUDWidgetVisibilityChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ZilbUI_ZilbHUDWidgetVisibilityChangedDelegate__DelegateSignature_Statics::_Script_ZilbUI_eventZilbHUDWidgetVisibilityChangedDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ZilbUI_ZilbHUDWidgetVisibilityChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ZilbUI_ZilbHUDWidgetVisibilityChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FZilbHUDWidgetVisibilityChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ZilbHUDWidgetVisibilityChangedDelegate, AZilbHUD* HUD, bool bIsVisible)
{
	struct _Script_ZilbUI_eventZilbHUDWidgetVisibilityChangedDelegate_Parms
	{
		AZilbHUD* HUD;
		bool bIsVisible;
	};
	_Script_ZilbUI_eventZilbHUDWidgetVisibilityChangedDelegate_Parms Parms;
	Parms.HUD=HUD;
	Parms.bIsVisible=bIsVisible ? true : false;
	ZilbHUDWidgetVisibilityChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	void AZilbHUD::StaticRegisterNativesAZilbHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AZilbHUD);
	UClass* Z_Construct_UClass_AZilbHUD_NoRegister()
	{
		return AZilbHUD::StaticClass();
	}
	struct Z_Construct_UClass_AZilbHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZilbHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_ZilbUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AZilbHUD_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZilbHUD_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base class for HUD.\n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "ZilbHUD.h" },
		{ "ModuleRelativePath", "Public/ZilbHUD.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for HUD." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZilbHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZilbHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AZilbHUD_Statics::ClassParams = {
		&AZilbHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AZilbHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AZilbHUD_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AZilbHUD()
	{
		if (!Z_Registration_Info_UClass_AZilbHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AZilbHUD.OuterSingleton, Z_Construct_UClass_AZilbHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AZilbHUD.OuterSingleton;
	}
	template<> ZILBUI_API UClass* StaticClass<AZilbHUD>()
	{
		return AZilbHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZilbHUD);
	AZilbHUD::~AZilbHUD() {}
	struct Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AZilbHUD, AZilbHUD::StaticClass, TEXT("AZilbHUD"), &Z_Registration_Info_UClass_AZilbHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AZilbHUD), 4096198890U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbHUD_h_694508437(TEXT("/Script/ZilbUI"),
		Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
