// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ZilbWidgetBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
struct FDataTableRowHandle;
#ifdef ZILBUI_ZilbWidgetBase_generated_h
#error "ZilbWidgetBase.generated.h already included, missing '#pragma once' in ZilbWidgetBase.h"
#endif
#define ZILBUI_ZilbWidgetBase_generated_h

#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetBase_h_13_DELEGATE \
static void FOnDestroyedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDestroyedDelegate, UUserWidget* Widget);


#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetBase_h_10_SPARSE_DATA
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetBase_h_10_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetBase_h_10_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnFadeTimerTick_Implementation(); \
 \
	DECLARE_FUNCTION(execOnFadeTimerTick); \
	DECLARE_FUNCTION(execOnDeactivatedAnimFinished); \
	DECLARE_FUNCTION(execOnActivatedAnimFinished); \
	DECLARE_FUNCTION(execBP_RegisterUIActionBinding); \
	DECLARE_FUNCTION(execFadeIn); \
	DECLARE_FUNCTION(execFadeOut);


#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetBase_h_10_ACCESSORS
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetBase_h_10_CALLBACK_WRAPPERS
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetBase_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZilbWidgetBase(); \
	friend struct Z_Construct_UClass_UZilbWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UZilbWidgetBase, UCommonActivatableWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ZilbUI"), NO_API) \
	DECLARE_SERIALIZER(UZilbWidgetBase)


#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UZilbWidgetBase(UZilbWidgetBase&&); \
	NO_API UZilbWidgetBase(const UZilbWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZilbWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZilbWidgetBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZilbWidgetBase) \
	NO_API virtual ~UZilbWidgetBase();


#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetBase_h_7_PROLOG
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetBase_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetBase_h_10_SPARSE_DATA \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetBase_h_10_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetBase_h_10_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetBase_h_10_ACCESSORS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetBase_h_10_CALLBACK_WRAPPERS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetBase_h_10_INCLASS_NO_PURE_DECLS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ZILBUI_API UClass* StaticClass<class UZilbWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
