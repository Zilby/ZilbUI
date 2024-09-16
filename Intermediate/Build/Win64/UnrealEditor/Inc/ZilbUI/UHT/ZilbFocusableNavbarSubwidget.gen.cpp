// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZilbUI/Public/ZilbFocusableNavbarSubwidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZilbFocusableNavbarSubwidget() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_ZilbUI();
	ZILBUI_API UClass* Z_Construct_UClass_UZilbFocusableNavbar_NoRegister();
	ZILBUI_API UClass* Z_Construct_UClass_UZilbFocusableNavbarSubwidget();
	ZILBUI_API UClass* Z_Construct_UClass_UZilbFocusableNavbarSubwidget_NoRegister();
	ZILBUI_API UClass* Z_Construct_UClass_UZilbWidgetBase();
// End Cross Module References
	void UZilbFocusableNavbarSubwidget::StaticRegisterNativesUZilbFocusableNavbarSubwidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UZilbFocusableNavbarSubwidget);
	UClass* Z_Construct_UClass_UZilbFocusableNavbarSubwidget_NoRegister()
	{
		return UZilbFocusableNavbarSubwidget::StaticClass();
	}
	struct Z_Construct_UClass_UZilbFocusableNavbarSubwidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Navbar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Navbar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZilbFocusableNavbarSubwidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UZilbWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ZilbUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbFocusableNavbarSubwidget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbFocusableNavbarSubwidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A subwidget within a ZilbFocusableNavbar. Contains functionality to keep navigation of the focusable navbar running smoothly.\n */" },
#endif
		{ "IncludePath", "ZilbFocusableNavbarSubwidget.h" },
		{ "ModuleRelativePath", "Public/ZilbFocusableNavbarSubwidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A subwidget within a ZilbFocusableNavbar. Contains functionality to keep navigation of the focusable navbar running smoothly." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbFocusableNavbarSubwidget_Statics::NewProp_Navbar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZilbFocusableNavbarSubwidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZilbFocusableNavbarSubwidget_Statics::NewProp_Navbar = { "Navbar", nullptr, (EPropertyFlags)0x0010000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZilbFocusableNavbarSubwidget, Navbar), Z_Construct_UClass_UZilbFocusableNavbar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbFocusableNavbarSubwidget_Statics::NewProp_Navbar_MetaData), Z_Construct_UClass_UZilbFocusableNavbarSubwidget_Statics::NewProp_Navbar_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZilbFocusableNavbarSubwidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbFocusableNavbarSubwidget_Statics::NewProp_Navbar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZilbFocusableNavbarSubwidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZilbFocusableNavbarSubwidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UZilbFocusableNavbarSubwidget_Statics::ClassParams = {
		&UZilbFocusableNavbarSubwidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UZilbFocusableNavbarSubwidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UZilbFocusableNavbarSubwidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbFocusableNavbarSubwidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UZilbFocusableNavbarSubwidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbFocusableNavbarSubwidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UZilbFocusableNavbarSubwidget()
	{
		if (!Z_Registration_Info_UClass_UZilbFocusableNavbarSubwidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZilbFocusableNavbarSubwidget.OuterSingleton, Z_Construct_UClass_UZilbFocusableNavbarSubwidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UZilbFocusableNavbarSubwidget.OuterSingleton;
	}
	template<> ZILBUI_API UClass* StaticClass<UZilbFocusableNavbarSubwidget>()
	{
		return UZilbFocusableNavbarSubwidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZilbFocusableNavbarSubwidget);
	UZilbFocusableNavbarSubwidget::~UZilbFocusableNavbarSubwidget() {}
	struct Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbFocusableNavbarSubwidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbFocusableNavbarSubwidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UZilbFocusableNavbarSubwidget, UZilbFocusableNavbarSubwidget::StaticClass, TEXT("UZilbFocusableNavbarSubwidget"), &Z_Registration_Info_UClass_UZilbFocusableNavbarSubwidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZilbFocusableNavbarSubwidget), 2580645283U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbFocusableNavbarSubwidget_h_750871672(TEXT("/Script/ZilbUI"),
		Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbFocusableNavbarSubwidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbFocusableNavbarSubwidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
