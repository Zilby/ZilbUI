// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ZilbWidgetStack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonActivatableWidget;
#ifdef ZILBUI_ZilbWidgetStack_generated_h
#error "ZilbWidgetStack.generated.h already included, missing '#pragma once' in ZilbWidgetStack.h"
#endif
#define ZILBUI_ZilbWidgetStack_generated_h

#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetStack_h_14_SPARSE_DATA
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetStack_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetStack_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetStack_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearWidgetsInstantly); \
	DECLARE_FUNCTION(execPopWidget); \
	DECLARE_FUNCTION(execSetRootContentWidgetClass); \
	DECLARE_FUNCTION(execGetTopmostWidget); \
	DECLARE_FUNCTION(execGetWidgetCount);


#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetStack_h_14_ACCESSORS
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetStack_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZilbWidgetStack(); \
	friend struct Z_Construct_UClass_UZilbWidgetStack_Statics; \
public: \
	DECLARE_CLASS(UZilbWidgetStack, UCommonActivatableWidgetStack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ZilbUI"), NO_API) \
	DECLARE_SERIALIZER(UZilbWidgetStack)


#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetStack_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UZilbWidgetStack(UZilbWidgetStack&&); \
	NO_API UZilbWidgetStack(const UZilbWidgetStack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZilbWidgetStack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZilbWidgetStack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZilbWidgetStack) \
	NO_API virtual ~UZilbWidgetStack();


#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetStack_h_11_PROLOG
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetStack_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetStack_h_14_SPARSE_DATA \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetStack_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetStack_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetStack_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetStack_h_14_ACCESSORS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetStack_h_14_INCLASS_NO_PURE_DECLS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetStack_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ZILBUI_API UClass* StaticClass<class UZilbWidgetStack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetStack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
