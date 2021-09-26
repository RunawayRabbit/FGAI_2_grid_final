// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef FGAI_2_FGDude_generated_h
#error "FGDude.generated.h already included, missing '#pragma once' in FGDude.h"
#endif
#define FGAI_2_FGDude_generated_h

#define FGAI_2_Source_FGAI_2_Player_FGDude_h_14_SPARSE_DATA
#define FGAI_2_Source_FGAI_2_Player_FGDude_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMoveTo);


#define FGAI_2_Source_FGAI_2_Player_FGDude_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMoveTo);


#define FGAI_2_Source_FGAI_2_Player_FGDude_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGDude(); \
	friend struct Z_Construct_UClass_AFGDude_Statics; \
public: \
	DECLARE_CLASS(AFGDude, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI_2"), NO_API) \
	DECLARE_SERIALIZER(AFGDude)


#define FGAI_2_Source_FGAI_2_Player_FGDude_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFGDude(); \
	friend struct Z_Construct_UClass_AFGDude_Statics; \
public: \
	DECLARE_CLASS(AFGDude, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI_2"), NO_API) \
	DECLARE_SERIALIZER(AFGDude)


#define FGAI_2_Source_FGAI_2_Player_FGDude_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGDude(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGDude) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGDude); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGDude); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGDude(AFGDude&&); \
	NO_API AFGDude(const AFGDude&); \
public:


#define FGAI_2_Source_FGAI_2_Player_FGDude_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGDude(AFGDude&&); \
	NO_API AFGDude(const AFGDude&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGDude); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGDude); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGDude)


#define FGAI_2_Source_FGAI_2_Player_FGDude_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsSelected() { return STRUCT_OFFSET(AFGDude, bIsSelected); }


#define FGAI_2_Source_FGAI_2_Player_FGDude_h_11_PROLOG
#define FGAI_2_Source_FGAI_2_Player_FGDude_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FGAI_2_Source_FGAI_2_Player_FGDude_h_14_PRIVATE_PROPERTY_OFFSET \
	FGAI_2_Source_FGAI_2_Player_FGDude_h_14_SPARSE_DATA \
	FGAI_2_Source_FGAI_2_Player_FGDude_h_14_RPC_WRAPPERS \
	FGAI_2_Source_FGAI_2_Player_FGDude_h_14_INCLASS \
	FGAI_2_Source_FGAI_2_Player_FGDude_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FGAI_2_Source_FGAI_2_Player_FGDude_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FGAI_2_Source_FGAI_2_Player_FGDude_h_14_PRIVATE_PROPERTY_OFFSET \
	FGAI_2_Source_FGAI_2_Player_FGDude_h_14_SPARSE_DATA \
	FGAI_2_Source_FGAI_2_Player_FGDude_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FGAI_2_Source_FGAI_2_Player_FGDude_h_14_INCLASS_NO_PURE_DECLS \
	FGAI_2_Source_FGAI_2_Player_FGDude_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FGAI_2_API UClass* StaticClass<class AFGDude>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FGAI_2_Source_FGAI_2_Player_FGDude_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
