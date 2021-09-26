// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef FGAI_2_FGPlayer_generated_h
#error "FGPlayer.generated.h already included, missing '#pragma once' in FGPlayer.h"
#endif
#define FGAI_2_FGPlayer_generated_h

#define FGAI_2_Source_FGAI_2_Player_FGPlayer_h_12_SPARSE_DATA
#define FGAI_2_Source_FGAI_2_Player_FGPlayer_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMouseLocationOnGrid);


#define FGAI_2_Source_FGAI_2_Player_FGPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMouseLocationOnGrid);


#define FGAI_2_Source_FGAI_2_Player_FGPlayer_h_12_EVENT_PARMS \
	struct FGPlayer_eventBP_SetEnd_Parms \
	{ \
		FVector Position; \
	}; \
	struct FGPlayer_eventBP_SetStart_Parms \
	{ \
		FVector Position; \
	};


#define FGAI_2_Source_FGAI_2_Player_FGPlayer_h_12_CALLBACK_WRAPPERS
#define FGAI_2_Source_FGAI_2_Player_FGPlayer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGPlayer(); \
	friend struct Z_Construct_UClass_AFGPlayer_Statics; \
public: \
	DECLARE_CLASS(AFGPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI_2"), NO_API) \
	DECLARE_SERIALIZER(AFGPlayer)


#define FGAI_2_Source_FGAI_2_Player_FGPlayer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFGPlayer(); \
	friend struct Z_Construct_UClass_AFGPlayer_Statics; \
public: \
	DECLARE_CLASS(AFGPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI_2"), NO_API) \
	DECLARE_SERIALIZER(AFGPlayer)


#define FGAI_2_Source_FGAI_2_Player_FGPlayer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGPlayer(AFGPlayer&&); \
	NO_API AFGPlayer(const AFGPlayer&); \
public:


#define FGAI_2_Source_FGAI_2_Player_FGPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGPlayer(AFGPlayer&&); \
	NO_API AFGPlayer(const AFGPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGPlayer)


#define FGAI_2_Source_FGAI_2_Player_FGPlayer_h_12_PRIVATE_PROPERTY_OFFSET
#define FGAI_2_Source_FGAI_2_Player_FGPlayer_h_9_PROLOG \
	FGAI_2_Source_FGAI_2_Player_FGPlayer_h_12_EVENT_PARMS


#define FGAI_2_Source_FGAI_2_Player_FGPlayer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FGAI_2_Source_FGAI_2_Player_FGPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	FGAI_2_Source_FGAI_2_Player_FGPlayer_h_12_SPARSE_DATA \
	FGAI_2_Source_FGAI_2_Player_FGPlayer_h_12_RPC_WRAPPERS \
	FGAI_2_Source_FGAI_2_Player_FGPlayer_h_12_CALLBACK_WRAPPERS \
	FGAI_2_Source_FGAI_2_Player_FGPlayer_h_12_INCLASS \
	FGAI_2_Source_FGAI_2_Player_FGPlayer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FGAI_2_Source_FGAI_2_Player_FGPlayer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FGAI_2_Source_FGAI_2_Player_FGPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	FGAI_2_Source_FGAI_2_Player_FGPlayer_h_12_SPARSE_DATA \
	FGAI_2_Source_FGAI_2_Player_FGPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FGAI_2_Source_FGAI_2_Player_FGPlayer_h_12_CALLBACK_WRAPPERS \
	FGAI_2_Source_FGAI_2_Player_FGPlayer_h_12_INCLASS_NO_PURE_DECLS \
	FGAI_2_Source_FGAI_2_Player_FGPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FGAI_2_API UClass* StaticClass<class AFGPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FGAI_2_Source_FGAI_2_Player_FGPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
