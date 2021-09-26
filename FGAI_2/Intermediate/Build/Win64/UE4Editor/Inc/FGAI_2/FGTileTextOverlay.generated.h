// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FGAI_2_FGTileTextOverlay_generated_h
#error "FGTileTextOverlay.generated.h already included, missing '#pragma once' in FGTileTextOverlay.h"
#endif
#define FGAI_2_FGTileTextOverlay_generated_h

#define FGAI_2_Source_FGAI_2_Grid_FGTileTextOverlay_h_33_SPARSE_DATA
#define FGAI_2_Source_FGAI_2_Grid_FGTileTextOverlay_h_33_RPC_WRAPPERS
#define FGAI_2_Source_FGAI_2_Grid_FGTileTextOverlay_h_33_RPC_WRAPPERS_NO_PURE_DECLS
#define FGAI_2_Source_FGAI_2_Grid_FGTileTextOverlay_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGTileTextOverlay(); \
	friend struct Z_Construct_UClass_UFGTileTextOverlay_Statics; \
public: \
	DECLARE_CLASS(UFGTileTextOverlay, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI_2"), NO_API) \
	DECLARE_SERIALIZER(UFGTileTextOverlay)


#define FGAI_2_Source_FGAI_2_Grid_FGTileTextOverlay_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUFGTileTextOverlay(); \
	friend struct Z_Construct_UClass_UFGTileTextOverlay_Statics; \
public: \
	DECLARE_CLASS(UFGTileTextOverlay, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI_2"), NO_API) \
	DECLARE_SERIALIZER(UFGTileTextOverlay)


#define FGAI_2_Source_FGAI_2_Grid_FGTileTextOverlay_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGTileTextOverlay(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGTileTextOverlay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGTileTextOverlay); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGTileTextOverlay); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGTileTextOverlay(UFGTileTextOverlay&&); \
	NO_API UFGTileTextOverlay(const UFGTileTextOverlay&); \
public:


#define FGAI_2_Source_FGAI_2_Grid_FGTileTextOverlay_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGTileTextOverlay(UFGTileTextOverlay&&); \
	NO_API UFGTileTextOverlay(const UFGTileTextOverlay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGTileTextOverlay); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGTileTextOverlay); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGTileTextOverlay)


#define FGAI_2_Source_FGAI_2_Grid_FGTileTextOverlay_h_33_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TextComponents() { return STRUCT_OFFSET(UFGTileTextOverlay, TextComponents); } \
	FORCEINLINE static uint32 __PPO__Owner() { return STRUCT_OFFSET(UFGTileTextOverlay, Owner); }


#define FGAI_2_Source_FGAI_2_Grid_FGTileTextOverlay_h_30_PROLOG
#define FGAI_2_Source_FGAI_2_Grid_FGTileTextOverlay_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FGAI_2_Source_FGAI_2_Grid_FGTileTextOverlay_h_33_PRIVATE_PROPERTY_OFFSET \
	FGAI_2_Source_FGAI_2_Grid_FGTileTextOverlay_h_33_SPARSE_DATA \
	FGAI_2_Source_FGAI_2_Grid_FGTileTextOverlay_h_33_RPC_WRAPPERS \
	FGAI_2_Source_FGAI_2_Grid_FGTileTextOverlay_h_33_INCLASS \
	FGAI_2_Source_FGAI_2_Grid_FGTileTextOverlay_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FGAI_2_Source_FGAI_2_Grid_FGTileTextOverlay_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FGAI_2_Source_FGAI_2_Grid_FGTileTextOverlay_h_33_PRIVATE_PROPERTY_OFFSET \
	FGAI_2_Source_FGAI_2_Grid_FGTileTextOverlay_h_33_SPARSE_DATA \
	FGAI_2_Source_FGAI_2_Grid_FGTileTextOverlay_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FGAI_2_Source_FGAI_2_Grid_FGTileTextOverlay_h_33_INCLASS_NO_PURE_DECLS \
	FGAI_2_Source_FGAI_2_Grid_FGTileTextOverlay_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FGAI_2_API UClass* StaticClass<class UFGTileTextOverlay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FGAI_2_Source_FGAI_2_Grid_FGTileTextOverlay_h


#define FOREACH_ENUM_ETILETEXTOVERLAYALIGN(op) \
	op(ETileTextOverlayAlign::TopLeft) \
	op(ETileTextOverlayAlign::Top) \
	op(ETileTextOverlayAlign::TopRight) \
	op(ETileTextOverlayAlign::Left) \
	op(ETileTextOverlayAlign::Right) \
	op(ETileTextOverlayAlign::BottomLeft) \
	op(ETileTextOverlayAlign::Bottom) \
	op(ETileTextOverlayAlign::BottomRight) 

enum class ETileTextOverlayAlign : uint8;
template<> FGAI_2_API UEnum* StaticEnum<ETileTextOverlayAlign>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
