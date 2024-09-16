// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZilbUI/Public/ZilbFocusableNavbar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZilbFocusableNavbar() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_ZilbUI();
	ZILBUI_API UClass* Z_Construct_UClass_UZilbFocusableNavbar();
	ZILBUI_API UClass* Z_Construct_UClass_UZilbFocusableNavbar_NoRegister();
	ZILBUI_API UClass* Z_Construct_UClass_UZilbNavbar();
// End Cross Module References
	void UZilbFocusableNavbar::StaticRegisterNativesUZilbFocusableNavbar()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UZilbFocusableNavbar);
	UClass* Z_Construct_UClass_UZilbFocusableNavbar_NoRegister()
	{
		return UZilbFocusableNavbar::StaticClass();
	}
	struct Z_Construct_UClass_UZilbFocusableNavbar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFocusingNavigation_MetaData[];
#endif
		static void NewProp_bFocusingNavigation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFocusingNavigation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZilbFocusableNavbar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UZilbNavbar,
		(UObject* (*)())Z_Construct_UPackage__Script_ZilbUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbFocusableNavbar_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbFocusableNavbar_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Class for navigation bar widget that switches focus between navbar and widgets\n */" },
#endif
		{ "IncludePath", "ZilbFocusableNavbar.h" },
		{ "ModuleRelativePath", "Public/ZilbFocusableNavbar.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class for navigation bar widget that switches focus between navbar and widgets" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbFocusableNavbar_Statics::NewProp_bFocusingNavigation_MetaData[] = {
		{ "Category", "ZilbFocusableNavbar" },
		{ "ModuleRelativePath", "Public/ZilbFocusableNavbar.h" },
	};
#endif
	void Z_Construct_UClass_UZilbFocusableNavbar_Statics::NewProp_bFocusingNavigation_SetBit(void* Obj)
	{
		((UZilbFocusableNavbar*)Obj)->bFocusingNavigation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZilbFocusableNavbar_Statics::NewProp_bFocusingNavigation = { "bFocusingNavigation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZilbFocusableNavbar), &Z_Construct_UClass_UZilbFocusableNavbar_Statics::NewProp_bFocusingNavigation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbFocusableNavbar_Statics::NewProp_bFocusingNavigation_MetaData), Z_Construct_UClass_UZilbFocusableNavbar_Statics::NewProp_bFocusingNavigation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZilbFocusableNavbar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbFocusableNavbar_Statics::NewProp_bFocusingNavigation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZilbFocusableNavbar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZilbFocusableNavbar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UZilbFocusableNavbar_Statics::ClassParams = {
		&UZilbFocusableNavbar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UZilbFocusableNavbar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UZilbFocusableNavbar_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbFocusableNavbar_Statics::Class_MetaDataParams), Z_Construct_UClass_UZilbFocusableNavbar_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbFocusableNavbar_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UZilbFocusableNavbar()
	{
		if (!Z_Registration_Info_UClass_UZilbFocusableNavbar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZilbFocusableNavbar.OuterSingleton, Z_Construct_UClass_UZilbFocusableNavbar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UZilbFocusableNavbar.OuterSingleton;
	}
	template<> ZILBUI_API UClass* StaticClass<UZilbFocusableNavbar>()
	{
		return UZilbFocusableNavbar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZilbFocusableNavbar);
	UZilbFocusableNavbar::~UZilbFocusableNavbar() {}
	struct Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbFocusableNavbar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbFocusableNavbar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UZilbFocusableNavbar, UZilbFocusableNavbar::StaticClass, TEXT("UZilbFocusableNavbar"), &Z_Registration_Info_UClass_UZilbFocusableNavbar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZilbFocusableNavbar), 3538175241U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbFocusableNavbar_h_2593838345(TEXT("/Script/ZilbUI"),
		Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbFocusableNavbar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbFocusableNavbar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
