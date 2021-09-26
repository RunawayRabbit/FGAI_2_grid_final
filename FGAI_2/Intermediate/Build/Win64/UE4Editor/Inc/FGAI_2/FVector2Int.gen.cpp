// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FGAI_2/Util/FVector2Int.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFVector2Int() {}
// Cross Module References
	FGAI_2_API UScriptStruct* Z_Construct_UScriptStruct_FVector2Int();
	UPackage* Z_Construct_UPackage__Script_FGAI_2();
// End Cross Module References
class UScriptStruct* FVector2Int::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FGAI_2_API uint32 Get_Z_Construct_UScriptStruct_FVector2Int_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector2Int, Z_Construct_UPackage__Script_FGAI_2(), TEXT("Vector2Int"), sizeof(FVector2Int), Get_Z_Construct_UScriptStruct_FVector2Int_Hash());
	}
	return Singleton;
}
template<> FGAI_2_API UScriptStruct* StaticStruct<FVector2Int>()
{
	return FVector2Int::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVector2Int(FVector2Int::StaticStruct, TEXT("/Script/FGAI_2"), TEXT("Vector2Int"), false, nullptr, nullptr);
static struct FScriptStruct_FGAI_2_StaticRegisterNativesFVector2Int
{
	FScriptStruct_FGAI_2_StaticRegisterNativesFVector2Int()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Vector2Int")),new UScriptStruct::TCppStructOps<FVector2Int>);
	}
} ScriptStruct_FGAI_2_StaticRegisterNativesFVector2Int;
	struct Z_Construct_UScriptStruct_FVector2Int_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_X;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVector2Int_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Util/FVector2Int.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVector2Int_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector2Int>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVector2Int_Statics::NewProp_X_MetaData[] = {
		{ "Category", "Vector2Int" },
		{ "ModuleRelativePath", "Util/FVector2Int.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVector2Int_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVector2Int, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FVector2Int_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2Int_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVector2Int_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "Vector2Int" },
		{ "ModuleRelativePath", "Util/FVector2Int.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVector2Int_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVector2Int, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FVector2Int_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2Int_Statics::NewProp_Y_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVector2Int_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector2Int_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector2Int_Statics::NewProp_Y,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector2Int_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI_2,
		nullptr,
		&NewStructOps,
		"Vector2Int",
		sizeof(FVector2Int),
		alignof(FVector2Int),
		Z_Construct_UScriptStruct_FVector2Int_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2Int_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVector2Int_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2Int_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVector2Int()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVector2Int_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FGAI_2();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Vector2Int"), sizeof(FVector2Int), Get_Z_Construct_UScriptStruct_FVector2Int_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVector2Int_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVector2Int_Hash() { return 272852U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
