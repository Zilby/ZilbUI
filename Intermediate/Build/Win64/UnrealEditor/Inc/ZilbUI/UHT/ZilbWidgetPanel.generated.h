// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ZilbWidgetPanel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef ZILBUI_ZilbWidgetPanel_generated_h
#error "ZilbWidgetPanel.generated.h already included, missing '#pragma once' in ZilbWidgetPanel.h"
#endif
#define ZILBUI_ZilbWidgetPanel_generated_h

#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetPanel_h_13_SPARSE_DATA
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetPanel_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetPanel_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetPanel_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearSubWidgets); \
	DECLARE_FUNCTION(execPopulateWidgets); \
	DECLARE_FUNCTION(execDeselectAll); \
	DECLARE_FUNCTION(execGetChildHasFocus); \
	DECLARE_FUNCTION(execSetChildGridPlacements); \
	DECLARE_FUNCTION(execAddWidget); \
	DECLARE_FUNCTION(execCreateSubWidget);


#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetPanel_h_13_ACCESSORS
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetPanel_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZilbWidgetPanel(); \
	friend struct Z_Construct_UClass_UZilbWidgetPanel_Statics; \
public: \
	DECLARE_CLASS(UZilbWidgetPanel, UZilbWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ZilbUI"), NO_API) \
	DECLARE_SERIALIZER(UZilbWidgetPanel)


#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetPanel_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UZilbWidgetPanel(UZilbWidgetPanel&&); \
	NO_API UZilbWidgetPanel(const UZilbWidgetPanel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZilbWidgetPanel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZilbWidgetPanel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZilbWidgetPanel) \
	NO_API virtual ~UZilbWidgetPanel();


#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetPanel_h_10_PROLOG
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetPanel_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetPanel_h_13_SPARSE_DATA \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetPanel_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetPanel_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetPanel_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetPanel_h_13_ACCESSORS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetPanel_h_13_INCLASS_NO_PURE_DECLS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetPanel_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ZILBUI_API UClass* StaticClass<class UZilbWidgetPanel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbWidgetPanel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
