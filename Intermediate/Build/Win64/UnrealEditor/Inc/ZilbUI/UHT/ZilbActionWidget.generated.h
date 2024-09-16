// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ZilbActionWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef ZILBUI_ZilbActionWidget_generated_h
#error "ZilbActionWidget.generated.h already included, missing '#pragma once' in ZilbActionWidget.h"
#endif
#define ZILBUI_ZilbActionWidget_generated_h

#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbActionWidget_h_10_SPARSE_DATA
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbActionWidget_h_10_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbActionWidget_h_10_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbActionWidget_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetColor); \
	DECLARE_FUNCTION(execSetInputActionOverride);


#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbActionWidget_h_10_ACCESSORS
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbActionWidget_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZilbActionWidget(); \
	friend struct Z_Construct_UClass_UZilbActionWidget_Statics; \
public: \
	DECLARE_CLASS(UZilbActionWidget, UCommonActionWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ZilbUI"), NO_API) \
	DECLARE_SERIALIZER(UZilbActionWidget)


#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbActionWidget_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UZilbActionWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UZilbActionWidget(UZilbActionWidget&&); \
	NO_API UZilbActionWidget(const UZilbActionWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZilbActionWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZilbActionWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZilbActionWidget) \
	NO_API virtual ~UZilbActionWidget();


#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbActionWidget_h_7_PROLOG
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbActionWidget_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbActionWidget_h_10_SPARSE_DATA \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbActionWidget_h_10_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbActionWidget_h_10_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbActionWidget_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbActionWidget_h_10_ACCESSORS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbActionWidget_h_10_INCLASS_NO_PURE_DECLS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbActionWidget_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ZILBUI_API UClass* StaticClass<class UZilbActionWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbActionWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
