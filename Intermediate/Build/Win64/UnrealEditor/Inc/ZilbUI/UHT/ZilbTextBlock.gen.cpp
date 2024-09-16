// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZilbUI/Public/ZilbTextBlock.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZilbTextBlock() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock();
	UPackage* Z_Construct_UPackage__Script_ZilbUI();
	ZILBUI_API UClass* Z_Construct_UClass_UZilbTextBlock();
	ZILBUI_API UClass* Z_Construct_UClass_UZilbTextBlock_NoRegister();
// End Cross Module References
	void UZilbTextBlock::StaticRegisterNativesUZilbTextBlock()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UZilbTextBlock);
	UClass* Z_Construct_UClass_UZilbTextBlock_NoRegister()
	{
		return UZilbTextBlock::StaticClass();
	}
	struct Z_Construct_UClass_UZilbTextBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideColorAndOpacity_MetaData[];
#endif
		static void NewProp_bOverrideColorAndOpacity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideColorAndOpacity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZilbTextBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonTextBlock,
		(UObject* (*)())Z_Construct_UPackage__Script_ZilbUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbTextBlock_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbTextBlock_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ZilbTextBlock.h" },
		{ "ModuleRelativePath", "Public/ZilbTextBlock.h" },
		{ "PrioritizeCategories", "Content" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZilbTextBlock_Statics::NewProp_bOverrideColorAndOpacity_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/ZilbTextBlock.h" },
	};
#endif
	void Z_Construct_UClass_UZilbTextBlock_Statics::NewProp_bOverrideColorAndOpacity_SetBit(void* Obj)
	{
		((UZilbTextBlock*)Obj)->bOverrideColorAndOpacity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZilbTextBlock_Statics::NewProp_bOverrideColorAndOpacity = { "bOverrideColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZilbTextBlock), &Z_Construct_UClass_UZilbTextBlock_Statics::NewProp_bOverrideColorAndOpacity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbTextBlock_Statics::NewProp_bOverrideColorAndOpacity_MetaData), Z_Construct_UClass_UZilbTextBlock_Statics::NewProp_bOverrideColorAndOpacity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZilbTextBlock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZilbTextBlock_Statics::NewProp_bOverrideColorAndOpacity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZilbTextBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZilbTextBlock>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UZilbTextBlock_Statics::ClassParams = {
		&UZilbTextBlock::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UZilbTextBlock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UZilbTextBlock_Statics::PropPointers),
		0,
		0x00B000A2u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbTextBlock_Statics::Class_MetaDataParams), Z_Construct_UClass_UZilbTextBlock_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZilbTextBlock_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UZilbTextBlock()
	{
		if (!Z_Registration_Info_UClass_UZilbTextBlock.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZilbTextBlock.OuterSingleton, Z_Construct_UClass_UZilbTextBlock_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UZilbTextBlock.OuterSingleton;
	}
	template<> ZILBUI_API UClass* StaticClass<UZilbTextBlock>()
	{
		return UZilbTextBlock::StaticClass();
	}
	UZilbTextBlock::UZilbTextBlock(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZilbTextBlock);
	UZilbTextBlock::~UZilbTextBlock() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UZilbTextBlock)
	struct Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbTextBlock_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbTextBlock_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UZilbTextBlock, UZilbTextBlock::StaticClass, TEXT("UZilbTextBlock"), &Z_Registration_Info_UClass_UZilbTextBlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZilbTextBlock), 84378841U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbTextBlock_h_3371182373(TEXT("/Script/ZilbUI"),
		Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbTextBlock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbTextBlock_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
