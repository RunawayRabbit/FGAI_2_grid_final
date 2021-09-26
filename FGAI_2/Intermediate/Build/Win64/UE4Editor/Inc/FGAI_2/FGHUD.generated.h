// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FGAI_2_FGHUD_generated_h
#error "FGHUD.generated.h already included, missing '#pragma once' in FGHUD.h"
#endif
#define FGAI_2_FGHUD_generated_h

#define FGAI_2_Source_FGAI_2_Player_FGHUD_h_18_SPARSE_DATA
#define FGAI_2_Source_FGAI_2_Player_FGHUD_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSelectRelease); \
	DECLARE_FUNCTION(execOnSelectPress);


#define FGAI_2_Source_FGAI_2_Player_FGHUD_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSelectRelease); \
	DECLARE_FUNCTION(execOnSelectPress);


#define FGAI_2_Source_FGAI_2_Player_FGHUD_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGHUD(); \
	friend struct Z_Construct_UClass_AFGHUD_Statics; \
public: \
	DECLARE_CLASS(AFGHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI_2"), NO_API) \
	DECLARE_SERIALIZER(AFGHUD)


#define FGAI_2_Source_FGAI_2_Player_FGHUD_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAFGHUD(); \
	friend struct Z_Construct_UClass_AFGHUD_Statics; \
public: \
	DECLARE_CLASS(AFGHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI_2"), NO_API) \
	DECLARE_SERIALIZER(AFGHUD)


#define FGAI_2_Source_FGAI_2_Player_FGHUD_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGHUD(AFGHUD&&); \
	NO_API AFGHUD(const AFGHUD&); \
public:


#define FGAI_2_Source_FGAI_2_Player_FGHUD_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGHUD(AFGHUD&&); \
	NO_API AFGHUD(const AFGHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGHUD)


#define FGAI_2_Source_FGAI_2_Player_FGHUD_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FillColor() { return STRUCT_OFFSET(AFGHUD, FillColor); } \
	FORCEINLINE static uint32 __PPO__BorderColor() { return STRUCT_OFFSET(AFGHUD, BorderColor); } \
	FORCEINLINE static uint32 __PPO__BoxThresholdSize() { return STRUCT_OFFSET(AFGHUD, BoxThresholdSize); }


#define FGAI_2_Source_FGAI_2_Player_FGHUD_h_15_PROLOG
#define FGAI_2_Source_FGAI_2_Player_FGHUD_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FGAI_2_Source_FGAI_2_Player_FGHUD_h_18_PRIVATE_PROPERTY_OFFSET \
	FGAI_2_Source_FGAI_2_Player_FGHUD_h_18_SPARSE_DATA \
	FGAI_2_Source_FGAI_2_Player_FGHUD_h_18_RPC_WRAPPERS \
	FGAI_2_Source_FGAI_2_Player_FGHUD_h_18_INCLASS \
	FGAI_2_Source_FGAI_2_Player_FGHUD_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FGAI_2_Source_FGAI_2_Player_FGHUD_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FGAI_2_Source_FGAI_2_Player_FGHUD_h_18_PRIVATE_PROPERTY_OFFSET \
	FGAI_2_Source_FGAI_2_Player_FGHUD_h_18_SPARSE_DATA \
	FGAI_2_Source_FGAI_2_Player_FGHUD_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FGAI_2_Source_FGAI_2_Player_FGHUD_h_18_INCLASS_NO_PURE_DECLS \
	FGAI_2_Source_FGAI_2_Player_FGHUD_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FGAI_2_API UClass* StaticClass<class AFGHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FGAI_2_Source_FGAI_2_Player_FGHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
