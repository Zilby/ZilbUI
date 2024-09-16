// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ZilbNavbar.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
class UZilbButtonBase;
enum class ECommonInputType : uint8;
#ifdef ZILBUI_ZilbNavbar_generated_h
#error "ZilbNavbar.generated.h already included, missing '#pragma once' in ZilbNavbar.h"
#endif
#define ZILBUI_ZilbNavbar_generated_h

#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbNavbar_h_14_SPARSE_DATA
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbNavbar_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbNavbar_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbNavbar_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnButtonSelected_Implementation(UZilbButtonBase* Button, bool bSelected); \
	virtual void OnButtonClicked_Implementation(UZilbButtonBase* Button); \
	virtual void SetActiveWidget_Implementation(UWidget* Widget, bool bDisableAnimation); \
	virtual void OnNextInput_Implementation(); \
	virtual void OnPreviousInput_Implementation(); \
 \
	DECLARE_FUNCTION(execOnIsTransitioningChanged); \
	DECLARE_FUNCTION(execOnActiveWidgetSet); \
	DECLARE_FUNCTION(execUpdateInputActionWidgetsVisibility); \
	DECLARE_FUNCTION(execOnButtonSelected); \
	DECLARE_FUNCTION(execOnButtonClicked); \
	DECLARE_FUNCTION(execSetActiveWidget); \
	DECLARE_FUNCTION(execOnNextInput); \
	DECLARE_FUNCTION(execOnPreviousInput);


#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbNavbar_h_14_ACCESSORS
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbNavbar_h_14_CALLBACK_WRAPPERS
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbNavbar_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZilbNavbar(); \
	friend struct Z_Construct_UClass_UZilbNavbar_Statics; \
public: \
	DECLARE_CLASS(UZilbNavbar, UZilbWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ZilbUI"), NO_API) \
	DECLARE_SERIALIZER(UZilbNavbar)


#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbNavbar_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UZilbNavbar(UZilbNavbar&&); \
	NO_API UZilbNavbar(const UZilbNavbar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZilbNavbar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZilbNavbar); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZilbNavbar) \
	NO_API virtual ~UZilbNavbar();


#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbNavbar_h_11_PROLOG
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbNavbar_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbNavbar_h_14_SPARSE_DATA \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbNavbar_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbNavbar_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbNavbar_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbNavbar_h_14_ACCESSORS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbNavbar_h_14_CALLBACK_WRAPPERS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbNavbar_h_14_INCLASS_NO_PURE_DECLS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbNavbar_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ZILBUI_API UClass* StaticClass<class UZilbNavbar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbNavbar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
