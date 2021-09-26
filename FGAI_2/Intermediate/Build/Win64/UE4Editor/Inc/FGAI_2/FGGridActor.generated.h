// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2Int;
struct FFGTileinfo;
struct FVector;
#ifdef FGAI_2_FGGridActor_generated_h
#error "FGGridActor.generated.h already included, missing '#pragma once' in FGGridActor.h"
#endif
#define FGAI_2_FGGridActor_generated_h

#define FGAI_2_Source_FGAI_2_Grid_FGGridActor_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFGTileinfo_Statics; \
	FGAI_2_API static class UScriptStruct* StaticStruct();


template<> FGAI_2_API UScriptStruct* StaticStruct<struct FFGTileinfo>();

#define FGAI_2_Source_FGAI_2_Grid_FGGridActor_h_28_SPARSE_DATA
#define FGAI_2_Source_FGAI_2_Grid_FGGridActor_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNeighbours); \
	DECLARE_FUNCTION(execIsTileValid); \
	DECLARE_FUNCTION(execGetHeightExtends); \
	DECLARE_FUNCTION(execGetWidthExtends); \
	DECLARE_FUNCTION(execGetHeightSize); \
	DECLARE_FUNCTION(execGetWidthSize); \
	DECLARE_FUNCTION(execGetHalfHeight); \
	DECLARE_FUNCTION(execGetHalfWidth); \
	DECLARE_FUNCTION(execGetGridSize); \
	DECLARE_FUNCTION(execGetNumTiles); \
	DECLARE_FUNCTION(execGetTileSizeHalf); \
	DECLARE_FUNCTION(execGetTileIndexFromCoords); \
	DECLARE_FUNCTION(execGetTileIndexFromXY); \
	DECLARE_FUNCTION(execHeuristic); \
	DECLARE_FUNCTION(execTransformWorldLocationToTileLocation); \
	DECLARE_FUNCTION(execGetTileIndexFromWorldLocation); \
	DECLARE_FUNCTION(execGetXYFromWorldLocation); \
	DECLARE_FUNCTION(execGetCoordsFromIndex); \
	DECLARE_FUNCTION(execGetWorldLocationFromIndex); \
	DECLARE_FUNCTION(execGetWorldLocationFromCoords); \
	DECLARE_FUNCTION(execGetWorldLocationFromXY);


#define FGAI_2_Source_FGAI_2_Grid_FGGridActor_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNeighbours); \
	DECLARE_FUNCTION(execIsTileValid); \
	DECLARE_FUNCTION(execGetHeightExtends); \
	DECLARE_FUNCTION(execGetWidthExtends); \
	DECLARE_FUNCTION(execGetHeightSize); \
	DECLARE_FUNCTION(execGetWidthSize); \
	DECLARE_FUNCTION(execGetHalfHeight); \
	DECLARE_FUNCTION(execGetHalfWidth); \
	DECLARE_FUNCTION(execGetGridSize); \
	DECLARE_FUNCTION(execGetNumTiles); \
	DECLARE_FUNCTION(execGetTileSizeHalf); \
	DECLARE_FUNCTION(execGetTileIndexFromCoords); \
	DECLARE_FUNCTION(execGetTileIndexFromXY); \
	DECLARE_FUNCTION(execHeuristic); \
	DECLARE_FUNCTION(execTransformWorldLocationToTileLocation); \
	DECLARE_FUNCTION(execGetTileIndexFromWorldLocation); \
	DECLARE_FUNCTION(execGetXYFromWorldLocation); \
	DECLARE_FUNCTION(execGetCoordsFromIndex); \
	DECLARE_FUNCTION(execGetWorldLocationFromIndex); \
	DECLARE_FUNCTION(execGetWorldLocationFromCoords); \
	DECLARE_FUNCTION(execGetWorldLocationFromXY);


#define FGAI_2_Source_FGAI_2_Grid_FGGridActor_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGGridActor(); \
	friend struct Z_Construct_UClass_AFGGridActor_Statics; \
public: \
	DECLARE_CLASS(AFGGridActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI_2"), NO_API) \
	DECLARE_SERIALIZER(AFGGridActor)


#define FGAI_2_Source_FGAI_2_Grid_FGGridActor_h_28_INCLASS \
private: \
	static void StaticRegisterNativesAFGGridActor(); \
	friend struct Z_Construct_UClass_AFGGridActor_Statics; \
public: \
	DECLARE_CLASS(AFGGridActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI_2"), NO_API) \
	DECLARE_SERIALIZER(AFGGridActor)


#define FGAI_2_Source_FGAI_2_Grid_FGGridActor_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGGridActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGGridActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGGridActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGGridActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGGridActor(AFGGridActor&&); \
	NO_API AFGGridActor(const AFGGridActor&); \
public:


#define FGAI_2_Source_FGAI_2_Grid_FGGridActor_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGGridActor(AFGGridActor&&); \
	NO_API AFGGridActor(const AFGGridActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGGridActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGGridActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGGridActor)


#define FGAI_2_Source_FGAI_2_Grid_FGGridActor_h_28_PRIVATE_PROPERTY_OFFSET
#define FGAI_2_Source_FGAI_2_Grid_FGGridActor_h_25_PROLOG
#define FGAI_2_Source_FGAI_2_Grid_FGGridActor_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FGAI_2_Source_FGAI_2_Grid_FGGridActor_h_28_PRIVATE_PROPERTY_OFFSET \
	FGAI_2_Source_FGAI_2_Grid_FGGridActor_h_28_SPARSE_DATA \
	FGAI_2_Source_FGAI_2_Grid_FGGridActor_h_28_RPC_WRAPPERS \
	FGAI_2_Source_FGAI_2_Grid_FGGridActor_h_28_INCLASS \
	FGAI_2_Source_FGAI_2_Grid_FGGridActor_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FGAI_2_Source_FGAI_2_Grid_FGGridActor_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FGAI_2_Source_FGAI_2_Grid_FGGridActor_h_28_PRIVATE_PROPERTY_OFFSET \
	FGAI_2_Source_FGAI_2_Grid_FGGridActor_h_28_SPARSE_DATA \
	FGAI_2_Source_FGAI_2_Grid_FGGridActor_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FGAI_2_Source_FGAI_2_Grid_FGGridActor_h_28_INCLASS_NO_PURE_DECLS \
	FGAI_2_Source_FGAI_2_Grid_FGGridActor_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FGAI_2_API UClass* StaticClass<class AFGGridActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FGAI_2_Source_FGAI_2_Grid_FGGridActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
