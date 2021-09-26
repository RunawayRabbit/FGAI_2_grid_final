// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FGAI_2/Grid/FGGridActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGGridActor() {}
// Cross Module References
	FGAI_2_API UScriptStruct* Z_Construct_UScriptStruct_FFGTileinfo();
	UPackage* Z_Construct_UPackage__Script_FGAI_2();
	FGAI_2_API UScriptStruct* Z_Construct_UScriptStruct_FVector2Int();
	FGAI_2_API UClass* Z_Construct_UClass_AFGGridActor_NoRegister();
	FGAI_2_API UClass* Z_Construct_UClass_AFGGridActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	STATICMESHDESCRIPTION_API UClass* Z_Construct_UClass_UStaticMeshDescription_NoRegister();
	FGAI_2_API UClass* Z_Construct_UClass_UFGTileTextOverlay_NoRegister();
// End Cross Module References
class UScriptStruct* FFGTileinfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FGAI_2_API uint32 Get_Z_Construct_UScriptStruct_FFGTileinfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFGTileinfo, Z_Construct_UPackage__Script_FGAI_2(), TEXT("FGTileinfo"), sizeof(FFGTileinfo), Get_Z_Construct_UScriptStruct_FFGTileinfo_Hash());
	}
	return Singleton;
}
template<> FGAI_2_API UScriptStruct* StaticStruct<FFGTileinfo>()
{
	return FFGTileinfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFGTileinfo(FFGTileinfo::StaticStruct, TEXT("/Script/FGAI_2"), TEXT("FGTileinfo"), false, nullptr, nullptr);
static struct FScriptStruct_FGAI_2_StaticRegisterNativesFFGTileinfo
{
	FScriptStruct_FGAI_2_StaticRegisterNativesFFGTileinfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FGTileinfo")),new UScriptStruct::TCppStructOps<FFGTileinfo>);
	}
} ScriptStruct_FGAI_2_StaticRegisterNativesFFGTileinfo;
	struct Z_Construct_UScriptStruct_FFGTileinfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlock_MetaData[];
#endif
		static void NewProp_bBlock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coords_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Coords;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGTileinfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFGTileinfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFGTileinfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGTileinfo_Statics::NewProp_bBlock_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFGTileinfo_Statics::NewProp_bBlock_SetBit(void* Obj)
	{
		((FFGTileinfo*)Obj)->bBlock = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFGTileinfo_Statics::NewProp_bBlock = { "bBlock", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFGTileinfo), &Z_Construct_UScriptStruct_FFGTileinfo_Statics::NewProp_bBlock_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFGTileinfo_Statics::NewProp_bBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFGTileinfo_Statics::NewProp_bBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGTileinfo_Statics::NewProp_Coords_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFGTileinfo_Statics::NewProp_Coords = { "Coords", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFGTileinfo, Coords), Z_Construct_UScriptStruct_FVector2Int, METADATA_PARAMS(Z_Construct_UScriptStruct_FFGTileinfo_Statics::NewProp_Coords_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFGTileinfo_Statics::NewProp_Coords_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFGTileinfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGTileinfo_Statics::NewProp_bBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGTileinfo_Statics::NewProp_Coords,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFGTileinfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI_2,
		nullptr,
		&NewStructOps,
		"FGTileinfo",
		sizeof(FFGTileinfo),
		alignof(FFGTileinfo),
		Z_Construct_UScriptStruct_FFGTileinfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFGTileinfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFGTileinfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFGTileinfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFGTileinfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFGTileinfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FGAI_2();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FGTileinfo"), sizeof(FFGTileinfo), Get_Z_Construct_UScriptStruct_FFGTileinfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFGTileinfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFGTileinfo_Hash() { return 1585075655U; }
	DEFINE_FUNCTION(AFGGridActor::execGetNeighbours)
	{
		P_GET_STRUCT(FVector2Int,Z_Param_TileCoords);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FFGTileinfo>*)Z_Param__Result=P_THIS->GetNeighbours(Z_Param_TileCoords);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execIsTileValid)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TileX);
		P_GET_PROPERTY(FIntProperty,Z_Param_TileY);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTileValid(Z_Param_TileX,Z_Param_TileY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execGetHeightExtends)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetHeightExtends();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execGetWidthExtends)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetWidthExtends();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execGetHeightSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHeightSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execGetWidthSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWidthSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execGetHalfHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHalfHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execGetHalfWidth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHalfWidth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execGetGridSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGridSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execGetNumTiles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumTiles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execGetTileSizeHalf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTileSizeHalf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execGetTileIndexFromCoords)
	{
		P_GET_STRUCT(FVector2Int,Z_Param_TileCoords);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTileIndexFromCoords(Z_Param_TileCoords);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execGetTileIndexFromXY)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TileX);
		P_GET_PROPERTY(FIntProperty,Z_Param_TileY);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTileIndexFromXY(Z_Param_TileX,Z_Param_TileY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execHeuristic)
	{
		P_GET_STRUCT(FVector2Int,Z_Param_A);
		P_GET_STRUCT(FVector2Int,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Heuristic(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execTransformWorldLocationToTileLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InWorldLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutTileWorldLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TransformWorldLocationToTileLocation(Z_Param_Out_InWorldLocation,Z_Param_Out_OutTileWorldLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execGetTileIndexFromWorldLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTileIndexFromWorldLocation(Z_Param_Out_WorldLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execGetXYFromWorldLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TileX);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TileY);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetXYFromWorldLocation(Z_Param_Out_WorldLocation,Z_Param_Out_TileX,Z_Param_Out_TileY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execGetCoordsFromIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TileIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2Int*)Z_Param__Result=P_THIS->GetCoordsFromIndex(Z_Param_TileIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execGetWorldLocationFromIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TileIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetWorldLocationFromIndex(Z_Param_TileIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execGetWorldLocationFromCoords)
	{
		P_GET_STRUCT(FVector2Int,Z_Param_Coords);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetWorldLocationFromCoords(Z_Param_Coords);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGGridActor::execGetWorldLocationFromXY)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TileX);
		P_GET_PROPERTY(FIntProperty,Z_Param_TileY);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetWorldLocationFromXY(Z_Param_TileX,Z_Param_TileY);
		P_NATIVE_END;
	}
	void AFGGridActor::StaticRegisterNativesAFGGridActor()
	{
		UClass* Class = AFGGridActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCoordsFromIndex", &AFGGridActor::execGetCoordsFromIndex },
			{ "GetGridSize", &AFGGridActor::execGetGridSize },
			{ "GetHalfHeight", &AFGGridActor::execGetHalfHeight },
			{ "GetHalfWidth", &AFGGridActor::execGetHalfWidth },
			{ "GetHeightExtends", &AFGGridActor::execGetHeightExtends },
			{ "GetHeightSize", &AFGGridActor::execGetHeightSize },
			{ "GetNeighbours", &AFGGridActor::execGetNeighbours },
			{ "GetNumTiles", &AFGGridActor::execGetNumTiles },
			{ "GetTileIndexFromCoords", &AFGGridActor::execGetTileIndexFromCoords },
			{ "GetTileIndexFromWorldLocation", &AFGGridActor::execGetTileIndexFromWorldLocation },
			{ "GetTileIndexFromXY", &AFGGridActor::execGetTileIndexFromXY },
			{ "GetTileSizeHalf", &AFGGridActor::execGetTileSizeHalf },
			{ "GetWidthExtends", &AFGGridActor::execGetWidthExtends },
			{ "GetWidthSize", &AFGGridActor::execGetWidthSize },
			{ "GetWorldLocationFromCoords", &AFGGridActor::execGetWorldLocationFromCoords },
			{ "GetWorldLocationFromIndex", &AFGGridActor::execGetWorldLocationFromIndex },
			{ "GetWorldLocationFromXY", &AFGGridActor::execGetWorldLocationFromXY },
			{ "GetXYFromWorldLocation", &AFGGridActor::execGetXYFromWorldLocation },
			{ "Heuristic", &AFGGridActor::execHeuristic },
			{ "IsTileValid", &AFGGridActor::execIsTileValid },
			{ "TransformWorldLocationToTileLocation", &AFGGridActor::execTransformWorldLocationToTileLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGGridActor_GetCoordsFromIndex_Statics
	{
		struct FGGridActor_eventGetCoordsFromIndex_Parms
		{
			int32 TileIndex;
			FVector2Int ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetCoordsFromIndex_Statics::NewProp_TileIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGGridActor_GetCoordsFromIndex_Statics::NewProp_TileIndex = { "TileIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetCoordsFromIndex_Parms, TileIndex), METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetCoordsFromIndex_Statics::NewProp_TileIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetCoordsFromIndex_Statics::NewProp_TileIndex_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGGridActor_GetCoordsFromIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetCoordsFromIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2Int, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_GetCoordsFromIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetCoordsFromIndex_Statics::NewProp_TileIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetCoordsFromIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetCoordsFromIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_GetCoordsFromIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "GetCoordsFromIndex", nullptr, nullptr, sizeof(FGGridActor_eventGetCoordsFromIndex_Parms), Z_Construct_UFunction_AFGGridActor_GetCoordsFromIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetCoordsFromIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetCoordsFromIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetCoordsFromIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_GetCoordsFromIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_GetCoordsFromIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_GetGridSize_Statics
	{
		struct FGGridActor_eventGetGridSize_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGGridActor_GetGridSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetGridSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_GetGridSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetGridSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetGridSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_GetGridSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "GetGridSize", nullptr, nullptr, sizeof(FGGridActor_eventGetGridSize_Parms), Z_Construct_UFunction_AFGGridActor_GetGridSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetGridSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetGridSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetGridSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_GetGridSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_GetGridSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_GetHalfHeight_Statics
	{
		struct FGGridActor_eventGetHalfHeight_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGGridActor_GetHalfHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetHalfHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_GetHalfHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetHalfHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetHalfHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_GetHalfHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "GetHalfHeight", nullptr, nullptr, sizeof(FGGridActor_eventGetHalfHeight_Parms), Z_Construct_UFunction_AFGGridActor_GetHalfHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetHalfHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetHalfHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetHalfHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_GetHalfHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_GetHalfHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_GetHalfWidth_Statics
	{
		struct FGGridActor_eventGetHalfWidth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGGridActor_GetHalfWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetHalfWidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_GetHalfWidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetHalfWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetHalfWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_GetHalfWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "GetHalfWidth", nullptr, nullptr, sizeof(FGGridActor_eventGetHalfWidth_Parms), Z_Construct_UFunction_AFGGridActor_GetHalfWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetHalfWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetHalfWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetHalfWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_GetHalfWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_GetHalfWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_GetHeightExtends_Statics
	{
		struct FGGridActor_eventGetHeightExtends_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGGridActor_GetHeightExtends_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetHeightExtends_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_GetHeightExtends_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetHeightExtends_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetHeightExtends_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_GetHeightExtends_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "GetHeightExtends", nullptr, nullptr, sizeof(FGGridActor_eventGetHeightExtends_Parms), Z_Construct_UFunction_AFGGridActor_GetHeightExtends_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetHeightExtends_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetHeightExtends_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetHeightExtends_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_GetHeightExtends()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_GetHeightExtends_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_GetHeightSize_Statics
	{
		struct FGGridActor_eventGetHeightSize_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGGridActor_GetHeightSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetHeightSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_GetHeightSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetHeightSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetHeightSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_GetHeightSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "GetHeightSize", nullptr, nullptr, sizeof(FGGridActor_eventGetHeightSize_Parms), Z_Construct_UFunction_AFGGridActor_GetHeightSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetHeightSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetHeightSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetHeightSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_GetHeightSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_GetHeightSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_GetNeighbours_Statics
	{
		struct FGGridActor_eventGetNeighbours_Parms
		{
			FVector2Int TileCoords;
			TArray<FFGTileinfo> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileCoords_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TileCoords;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetNeighbours_Statics::NewProp_TileCoords_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGGridActor_GetNeighbours_Statics::NewProp_TileCoords = { "TileCoords", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetNeighbours_Parms, TileCoords), Z_Construct_UScriptStruct_FVector2Int, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetNeighbours_Statics::NewProp_TileCoords_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetNeighbours_Statics::NewProp_TileCoords_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGGridActor_GetNeighbours_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFGTileinfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGGridActor_GetNeighbours_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetNeighbours_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_GetNeighbours_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetNeighbours_Statics::NewProp_TileCoords,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetNeighbours_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetNeighbours_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetNeighbours_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_GetNeighbours_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "GetNeighbours", nullptr, nullptr, sizeof(FGGridActor_eventGetNeighbours_Parms), Z_Construct_UFunction_AFGGridActor_GetNeighbours_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetNeighbours_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetNeighbours_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetNeighbours_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_GetNeighbours()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_GetNeighbours_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_GetNumTiles_Statics
	{
		struct FGGridActor_eventGetNumTiles_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGGridActor_GetNumTiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetNumTiles_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_GetNumTiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetNumTiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetNumTiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_GetNumTiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "GetNumTiles", nullptr, nullptr, sizeof(FGGridActor_eventGetNumTiles_Parms), Z_Construct_UFunction_AFGGridActor_GetNumTiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetNumTiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetNumTiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetNumTiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_GetNumTiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_GetNumTiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_GetTileIndexFromCoords_Statics
	{
		struct FGGridActor_eventGetTileIndexFromCoords_Parms
		{
			FVector2Int TileCoords;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TileCoords;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGGridActor_GetTileIndexFromCoords_Statics::NewProp_TileCoords = { "TileCoords", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetTileIndexFromCoords_Parms, TileCoords), Z_Construct_UScriptStruct_FVector2Int, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGGridActor_GetTileIndexFromCoords_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetTileIndexFromCoords_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_GetTileIndexFromCoords_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetTileIndexFromCoords_Statics::NewProp_TileCoords,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetTileIndexFromCoords_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetTileIndexFromCoords_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_GetTileIndexFromCoords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "GetTileIndexFromCoords", nullptr, nullptr, sizeof(FGGridActor_eventGetTileIndexFromCoords_Parms), Z_Construct_UFunction_AFGGridActor_GetTileIndexFromCoords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetTileIndexFromCoords_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetTileIndexFromCoords_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetTileIndexFromCoords_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_GetTileIndexFromCoords()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_GetTileIndexFromCoords_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_GetTileIndexFromWorldLocation_Statics
	{
		struct FGGridActor_eventGetTileIndexFromWorldLocation_Parms
		{
			FVector WorldLocation;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetTileIndexFromWorldLocation_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGGridActor_GetTileIndexFromWorldLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetTileIndexFromWorldLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetTileIndexFromWorldLocation_Statics::NewProp_WorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetTileIndexFromWorldLocation_Statics::NewProp_WorldLocation_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGGridActor_GetTileIndexFromWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetTileIndexFromWorldLocation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_GetTileIndexFromWorldLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetTileIndexFromWorldLocation_Statics::NewProp_WorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetTileIndexFromWorldLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetTileIndexFromWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_GetTileIndexFromWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "GetTileIndexFromWorldLocation", nullptr, nullptr, sizeof(FGGridActor_eventGetTileIndexFromWorldLocation_Parms), Z_Construct_UFunction_AFGGridActor_GetTileIndexFromWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetTileIndexFromWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetTileIndexFromWorldLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetTileIndexFromWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_GetTileIndexFromWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_GetTileIndexFromWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_GetTileIndexFromXY_Statics
	{
		struct FGGridActor_eventGetTileIndexFromXY_Parms
		{
			int32 TileX;
			int32 TileY;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileX;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGGridActor_GetTileIndexFromXY_Statics::NewProp_TileX = { "TileX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetTileIndexFromXY_Parms, TileX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGGridActor_GetTileIndexFromXY_Statics::NewProp_TileY = { "TileY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetTileIndexFromXY_Parms, TileY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGGridActor_GetTileIndexFromXY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetTileIndexFromXY_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_GetTileIndexFromXY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetTileIndexFromXY_Statics::NewProp_TileX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetTileIndexFromXY_Statics::NewProp_TileY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetTileIndexFromXY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetTileIndexFromXY_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_GetTileIndexFromXY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "GetTileIndexFromXY", nullptr, nullptr, sizeof(FGGridActor_eventGetTileIndexFromXY_Parms), Z_Construct_UFunction_AFGGridActor_GetTileIndexFromXY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetTileIndexFromXY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetTileIndexFromXY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetTileIndexFromXY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_GetTileIndexFromXY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_GetTileIndexFromXY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_GetTileSizeHalf_Statics
	{
		struct FGGridActor_eventGetTileSizeHalf_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGGridActor_GetTileSizeHalf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetTileSizeHalf_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_GetTileSizeHalf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetTileSizeHalf_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetTileSizeHalf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_GetTileSizeHalf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "GetTileSizeHalf", nullptr, nullptr, sizeof(FGGridActor_eventGetTileSizeHalf_Parms), Z_Construct_UFunction_AFGGridActor_GetTileSizeHalf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetTileSizeHalf_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetTileSizeHalf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetTileSizeHalf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_GetTileSizeHalf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_GetTileSizeHalf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_GetWidthExtends_Statics
	{
		struct FGGridActor_eventGetWidthExtends_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGGridActor_GetWidthExtends_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetWidthExtends_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_GetWidthExtends_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetWidthExtends_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetWidthExtends_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_GetWidthExtends_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "GetWidthExtends", nullptr, nullptr, sizeof(FGGridActor_eventGetWidthExtends_Parms), Z_Construct_UFunction_AFGGridActor_GetWidthExtends_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetWidthExtends_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetWidthExtends_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetWidthExtends_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_GetWidthExtends()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_GetWidthExtends_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_GetWidthSize_Statics
	{
		struct FGGridActor_eventGetWidthSize_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGGridActor_GetWidthSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetWidthSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_GetWidthSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetWidthSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetWidthSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_GetWidthSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "GetWidthSize", nullptr, nullptr, sizeof(FGGridActor_eventGetWidthSize_Parms), Z_Construct_UFunction_AFGGridActor_GetWidthSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetWidthSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetWidthSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetWidthSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_GetWidthSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_GetWidthSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromCoords_Statics
	{
		struct FGGridActor_eventGetWorldLocationFromCoords_Parms
		{
			FVector2Int Coords;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Coords;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromCoords_Statics::NewProp_Coords = { "Coords", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetWorldLocationFromCoords_Parms, Coords), Z_Construct_UScriptStruct_FVector2Int, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromCoords_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetWorldLocationFromCoords_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromCoords_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromCoords_Statics::NewProp_Coords,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromCoords_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromCoords_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromCoords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "GetWorldLocationFromCoords", nullptr, nullptr, sizeof(FGGridActor_eventGetWorldLocationFromCoords_Parms), Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromCoords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromCoords_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromCoords_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromCoords_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromCoords()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromCoords_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromIndex_Statics
	{
		struct FGGridActor_eventGetWorldLocationFromIndex_Parms
		{
			int32 TileIndex;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromIndex_Statics::NewProp_TileIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromIndex_Statics::NewProp_TileIndex = { "TileIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetWorldLocationFromIndex_Parms, TileIndex), METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromIndex_Statics::NewProp_TileIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromIndex_Statics::NewProp_TileIndex_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetWorldLocationFromIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromIndex_Statics::NewProp_TileIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "GetWorldLocationFromIndex", nullptr, nullptr, sizeof(FGGridActor_eventGetWorldLocationFromIndex_Parms), Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromXY_Statics
	{
		struct FGGridActor_eventGetWorldLocationFromXY_Parms
		{
			int32 TileX;
			int32 TileY;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileX;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileY;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromXY_Statics::NewProp_TileX = { "TileX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetWorldLocationFromXY_Parms, TileX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromXY_Statics::NewProp_TileY = { "TileY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetWorldLocationFromXY_Parms, TileY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromXY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetWorldLocationFromXY_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromXY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromXY_Statics::NewProp_TileX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromXY_Statics::NewProp_TileY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromXY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromXY_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromXY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "GetWorldLocationFromXY", nullptr, nullptr, sizeof(FGGridActor_eventGetWorldLocationFromXY_Parms), Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromXY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromXY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromXY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromXY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromXY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromXY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics
	{
		struct FGGridActor_eventGetXYFromWorldLocation_Parms
		{
			FVector WorldLocation;
			int32 TileX;
			int32 TileY;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileX;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileY;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetXYFromWorldLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::NewProp_WorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::NewProp_WorldLocation_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::NewProp_TileX = { "TileX", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetXYFromWorldLocation_Parms, TileX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::NewProp_TileY = { "TileY", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventGetXYFromWorldLocation_Parms, TileY), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGGridActor_eventGetXYFromWorldLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGGridActor_eventGetXYFromWorldLocation_Parms), &Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::NewProp_WorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::NewProp_TileX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::NewProp_TileY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "GetXYFromWorldLocation", nullptr, nullptr, sizeof(FGGridActor_eventGetXYFromWorldLocation_Parms), Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_Heuristic_Statics
	{
		struct FGGridActor_eventHeuristic_Parms
		{
			FVector2Int A;
			FVector2Int B;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_Heuristic_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGGridActor_Heuristic_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventHeuristic_Parms, A), Z_Construct_UScriptStruct_FVector2Int, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_Heuristic_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_Heuristic_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_Heuristic_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGGridActor_Heuristic_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventHeuristic_Parms, B), Z_Construct_UScriptStruct_FVector2Int, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_Heuristic_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_Heuristic_Statics::NewProp_B_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGGridActor_Heuristic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventHeuristic_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_Heuristic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_Heuristic_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_Heuristic_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_Heuristic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_Heuristic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_Heuristic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "Heuristic", nullptr, nullptr, sizeof(FGGridActor_eventHeuristic_Parms), Z_Construct_UFunction_AFGGridActor_Heuristic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_Heuristic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_Heuristic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_Heuristic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_Heuristic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_Heuristic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_IsTileValid_Statics
	{
		struct FGGridActor_eventIsTileValid_Parms
		{
			int32 TileX;
			int32 TileY;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileY;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_IsTileValid_Statics::NewProp_TileX_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGGridActor_IsTileValid_Statics::NewProp_TileX = { "TileX", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventIsTileValid_Parms, TileX), METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_IsTileValid_Statics::NewProp_TileX_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_IsTileValid_Statics::NewProp_TileX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_IsTileValid_Statics::NewProp_TileY_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGGridActor_IsTileValid_Statics::NewProp_TileY = { "TileY", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventIsTileValid_Parms, TileY), METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_IsTileValid_Statics::NewProp_TileY_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_IsTileValid_Statics::NewProp_TileY_MetaData)) };
	void Z_Construct_UFunction_AFGGridActor_IsTileValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGGridActor_eventIsTileValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGGridActor_IsTileValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGGridActor_eventIsTileValid_Parms), &Z_Construct_UFunction_AFGGridActor_IsTileValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_IsTileValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_IsTileValid_Statics::NewProp_TileX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_IsTileValid_Statics::NewProp_TileY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_IsTileValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_IsTileValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_IsTileValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "IsTileValid", nullptr, nullptr, sizeof(FGGridActor_eventIsTileValid_Parms), Z_Construct_UFunction_AFGGridActor_IsTileValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_IsTileValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_IsTileValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_IsTileValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_IsTileValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_IsTileValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics
	{
		struct FGGridActor_eventTransformWorldLocationToTileLocation_Parms
		{
			FVector InWorldLocation;
			FVector OutTileWorldLocation;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InWorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InWorldLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutTileWorldLocation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::NewProp_InWorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::NewProp_InWorldLocation = { "InWorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventTransformWorldLocationToTileLocation_Parms, InWorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::NewProp_InWorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::NewProp_InWorldLocation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::NewProp_OutTileWorldLocation = { "OutTileWorldLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridActor_eventTransformWorldLocationToTileLocation_Parms, OutTileWorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGGridActor_eventTransformWorldLocationToTileLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGGridActor_eventTransformWorldLocationToTileLocation_Parms), &Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::NewProp_InWorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::NewProp_OutTileWorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGridActor, nullptr, "TransformWorldLocationToTileLocation", nullptr, nullptr, sizeof(FGGridActor_eventTransformWorldLocationToTileLocation_Parms), Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGGridActor_NoRegister()
	{
		return AFGGridActor::StaticClass();
	}
	struct Z_Construct_UClass_AFGGridActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockStaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockStaticMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GridMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockMeshDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockMeshDescription;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TileList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TileList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BorderSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BorderSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TileSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TileText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGGridActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI_2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGGridActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGGridActor_GetCoordsFromIndex, "GetCoordsFromIndex" }, // 499272714
		{ &Z_Construct_UFunction_AFGGridActor_GetGridSize, "GetGridSize" }, // 2307445230
		{ &Z_Construct_UFunction_AFGGridActor_GetHalfHeight, "GetHalfHeight" }, // 253618382
		{ &Z_Construct_UFunction_AFGGridActor_GetHalfWidth, "GetHalfWidth" }, // 3872700224
		{ &Z_Construct_UFunction_AFGGridActor_GetHeightExtends, "GetHeightExtends" }, // 1236244370
		{ &Z_Construct_UFunction_AFGGridActor_GetHeightSize, "GetHeightSize" }, // 2721093084
		{ &Z_Construct_UFunction_AFGGridActor_GetNeighbours, "GetNeighbours" }, // 3103974361
		{ &Z_Construct_UFunction_AFGGridActor_GetNumTiles, "GetNumTiles" }, // 2348894125
		{ &Z_Construct_UFunction_AFGGridActor_GetTileIndexFromCoords, "GetTileIndexFromCoords" }, // 3188620199
		{ &Z_Construct_UFunction_AFGGridActor_GetTileIndexFromWorldLocation, "GetTileIndexFromWorldLocation" }, // 869475791
		{ &Z_Construct_UFunction_AFGGridActor_GetTileIndexFromXY, "GetTileIndexFromXY" }, // 3619695776
		{ &Z_Construct_UFunction_AFGGridActor_GetTileSizeHalf, "GetTileSizeHalf" }, // 3134275453
		{ &Z_Construct_UFunction_AFGGridActor_GetWidthExtends, "GetWidthExtends" }, // 3252175490
		{ &Z_Construct_UFunction_AFGGridActor_GetWidthSize, "GetWidthSize" }, // 967772472
		{ &Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromCoords, "GetWorldLocationFromCoords" }, // 2114131972
		{ &Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromIndex, "GetWorldLocationFromIndex" }, // 4129946550
		{ &Z_Construct_UFunction_AFGGridActor_GetWorldLocationFromXY, "GetWorldLocationFromXY" }, // 3077897216
		{ &Z_Construct_UFunction_AFGGridActor_GetXYFromWorldLocation, "GetXYFromWorldLocation" }, // 3875782800
		{ &Z_Construct_UFunction_AFGGridActor_Heuristic, "Heuristic" }, // 4002776388
		{ &Z_Construct_UFunction_AFGGridActor_IsTileValid, "IsTileValid" }, // 3926693002
		{ &Z_Construct_UFunction_AFGGridActor_TransformWorldLocationToTileLocation, "TransformWorldLocationToTileLocation" }, // 3121063452
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGridActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Grid/FGGridActor.h" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGridActor_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGGridActor_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGridActor, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGGridActor_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGGridActor_Statics::NewProp_StaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGridActor_Statics::NewProp_BlockStaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGGridActor_Statics::NewProp_BlockStaticMeshComponent = { "BlockStaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGridActor, BlockStaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGGridActor_Statics::NewProp_BlockStaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGGridActor_Statics::NewProp_BlockStaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGridActor_Statics::NewProp_GridMesh_MetaData[] = {
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGGridActor_Statics::NewProp_GridMesh = { "GridMesh", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGridActor, GridMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGGridActor_Statics::NewProp_GridMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGGridActor_Statics::NewProp_GridMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGridActor_Statics::NewProp_BlockMesh_MetaData[] = {
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGGridActor_Statics::NewProp_BlockMesh = { "BlockMesh", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGridActor, BlockMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGGridActor_Statics::NewProp_BlockMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGGridActor_Statics::NewProp_BlockMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGridActor_Statics::NewProp_MeshDescription_MetaData[] = {
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGGridActor_Statics::NewProp_MeshDescription = { "MeshDescription", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGridActor, MeshDescription), Z_Construct_UClass_UStaticMeshDescription_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGGridActor_Statics::NewProp_MeshDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGGridActor_Statics::NewProp_MeshDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGridActor_Statics::NewProp_BlockMeshDescription_MetaData[] = {
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGGridActor_Statics::NewProp_BlockMeshDescription = { "BlockMeshDescription", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGridActor, BlockMeshDescription), Z_Construct_UClass_UStaticMeshDescription_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGGridActor_Statics::NewProp_BlockMeshDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGGridActor_Statics::NewProp_BlockMeshDescription_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGGridActor_Statics::NewProp_TileList_Inner = { "TileList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFGTileinfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGridActor_Statics::NewProp_TileList_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "/*\n\x09* Initializes to the size of the number of tiles in the grid.\n\x09*/" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
		{ "ToolTip", "* Initializes to the size of the number of tiles in the grid." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGGridActor_Statics::NewProp_TileList = { "TileList", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGridActor, TileList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFGGridActor_Statics::NewProp_TileList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGGridActor_Statics::NewProp_TileList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGridActor_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "Grid" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFGGridActor_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGridActor, Width), METADATA_PARAMS(Z_Construct_UClass_AFGGridActor_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGGridActor_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGridActor_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "Grid" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFGGridActor_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGridActor, Height), METADATA_PARAMS(Z_Construct_UClass_AFGGridActor_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGGridActor_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGridActor_Statics::NewProp_BorderSize_MetaData[] = {
		{ "Category", "Grid" },
		{ "ClampMin", "0.100000" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGGridActor_Statics::NewProp_BorderSize = { "BorderSize", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGridActor, BorderSize), METADATA_PARAMS(Z_Construct_UClass_AFGGridActor_Statics::NewProp_BorderSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGGridActor_Statics::NewProp_BorderSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGridActor_Statics::NewProp_TileSize_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGGridActor_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGridActor, TileSize), METADATA_PARAMS(Z_Construct_UClass_AFGGridActor_Statics::NewProp_TileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGGridActor_Statics::NewProp_TileSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGridActor_Statics::NewProp_TileText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Grid/FGGridActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGGridActor_Statics::NewProp_TileText = { "TileText", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGridActor, TileText), Z_Construct_UClass_UFGTileTextOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGGridActor_Statics::NewProp_TileText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGGridActor_Statics::NewProp_TileText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGGridActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGridActor_Statics::NewProp_StaticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGridActor_Statics::NewProp_BlockStaticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGridActor_Statics::NewProp_GridMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGridActor_Statics::NewProp_BlockMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGridActor_Statics::NewProp_MeshDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGridActor_Statics::NewProp_BlockMeshDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGridActor_Statics::NewProp_TileList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGridActor_Statics::NewProp_TileList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGridActor_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGridActor_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGridActor_Statics::NewProp_BorderSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGridActor_Statics::NewProp_TileSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGridActor_Statics::NewProp_TileText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGGridActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGGridActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGGridActor_Statics::ClassParams = {
		&AFGGridActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGGridActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFGGridActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFGGridActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFGGridActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGGridActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGGridActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGGridActor, 2872349826);
	template<> FGAI_2_API UClass* StaticClass<AFGGridActor>()
	{
		return AFGGridActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGGridActor(Z_Construct_UClass_AFGGridActor, &AFGGridActor::StaticClass, TEXT("/Script/FGAI_2"), TEXT("AFGGridActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGGridActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
