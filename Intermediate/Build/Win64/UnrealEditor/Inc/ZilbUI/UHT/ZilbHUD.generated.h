// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ZilbHUD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AZilbHUD;
#ifdef ZILBUI_ZilbHUD_generated_h
#error "ZilbHUD.generated.h already included, missing '#pragma once' in ZilbHUD.h"
#endif
#define ZILBUI_ZilbHUD_generated_h

#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbHUD_h_6_DELEGATE \
ZILBUI_API void FZilbHUDWidgetVisibilityChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ZilbHUDWidgetVisibilityChangedDelegate, AZilbHUD* HUD, bool bIsVisible);


#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbHUD_h_14_SPARSE_DATA
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbHUD_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbHUD_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbHUD_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbHUD_h_14_ACCESSORS
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbHUD_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZilbHUD(); \
	friend struct Z_Construct_UClass_AZilbHUD_Statics; \
public: \
	DECLARE_CLASS(AZilbHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ZilbUI"), NO_API) \
	DECLARE_SERIALIZER(AZilbHUD)


#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbHUD_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZilbHUD(AZilbHUD&&); \
	NO_API AZilbHUD(const AZilbHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZilbHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZilbHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZilbHUD) \
	NO_API virtual ~AZilbHUD();


#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbHUD_h_11_PROLOG
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbHUD_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbHUD_h_14_SPARSE_DATA \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbHUD_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbHUD_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbHUD_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbHUD_h_14_ACCESSORS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbHUD_h_14_INCLASS_NO_PURE_DECLS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbHUD_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ZILBUI_API UClass* StaticClass<class AZilbHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
