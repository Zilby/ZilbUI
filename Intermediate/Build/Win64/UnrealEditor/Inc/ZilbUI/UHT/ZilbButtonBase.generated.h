// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ZilbButtonBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ZILBUI_ZilbButtonBase_generated_h
#error "ZilbButtonBase.generated.h already included, missing '#pragma once' in ZilbButtonBase.h"
#endif
#define ZILBUI_ZilbButtonBase_generated_h

#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbButtonBase_h_23_SPARSE_DATA
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbButtonBase_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbButtonBase_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbButtonBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHoldTimerTick); \
	DECLARE_FUNCTION(execVirtualClick); \
	DECLARE_FUNCTION(execSetGamepadText); \
	DECLARE_FUNCTION(execSetText); \
	DECLARE_FUNCTION(execGetText); \
	DECLARE_FUNCTION(execHandleInputActionTriggered);


#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbButtonBase_h_23_ACCESSORS
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbButtonBase_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZilbButtonBase(); \
	friend struct Z_Construct_UClass_UZilbButtonBase_Statics; \
public: \
	DECLARE_CLASS(UZilbButtonBase, UCommonButtonBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ZilbUI"), NO_API) \
	DECLARE_SERIALIZER(UZilbButtonBase)


#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbButtonBase_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UZilbButtonBase(UZilbButtonBase&&); \
	NO_API UZilbButtonBase(const UZilbButtonBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZilbButtonBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZilbButtonBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZilbButtonBase) \
	NO_API virtual ~UZilbButtonBase();


#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbButtonBase_h_20_PROLOG
#define FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbButtonBase_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbButtonBase_h_23_SPARSE_DATA \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbButtonBase_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbButtonBase_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbButtonBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbButtonBase_h_23_ACCESSORS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbButtonBase_h_23_INCLASS_NO_PURE_DECLS \
	FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbButtonBase_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ZILBUI_API UClass* StaticClass<class UZilbButtonBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Plugins_Zilb_ZilbUI_Source_ZilbUI_Public_ZilbButtonBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
