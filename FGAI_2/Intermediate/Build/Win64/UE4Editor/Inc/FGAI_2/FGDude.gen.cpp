// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FGAI_2/Player/FGDude.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGDude() {}
// Cross Module References
	FGAI_2_API UClass* Z_Construct_UClass_AFGDude_NoRegister();
	FGAI_2_API UClass* Z_Construct_UClass_AFGDude();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FGAI_2();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(AFGDude::execMoveTo)
	{
		P_GET_STRUCT(FVector,Z_Param_TargetLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveTo(Z_Param_TargetLocation);
		P_NATIVE_END;
	}
	void AFGDude::StaticRegisterNativesAFGDude()
	{
		UClass* Class = AFGDude::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveTo", &AFGDude::execMoveTo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGDude_MoveTo_Statics
	{
		struct FGDude_eventMoveTo_Parms
		{
			FVector TargetLocation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGDude_MoveTo_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGDude_eventMoveTo_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGDude_MoveTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGDude_MoveTo_Statics::NewProp_TargetLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGDude_MoveTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Player/FGDude.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGDude_MoveTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGDude, nullptr, "MoveTo", nullptr, nullptr, sizeof(FGDude_eventMoveTo_Parms), Z_Construct_UFunction_AFGDude_MoveTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGDude_MoveTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGDude_MoveTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGDude_MoveTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGDude_MoveTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGDude_MoveTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGDude_NoRegister()
	{
		return AFGDude::StaticClass();
	}
	struct Z_Construct_UClass_AFGDude_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSelected_MetaData[];
#endif
		static void NewProp_bIsSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGDude_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI_2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGDude_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGDude_MoveTo, "MoveTo" }, // 3222578504
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDude_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/FGDude.h" },
		{ "ModuleRelativePath", "Player/FGDude.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDude_Statics::NewProp_bIsSelected_MetaData[] = {
		{ "ModuleRelativePath", "Player/FGDude.h" },
	};
#endif
	void Z_Construct_UClass_AFGDude_Statics::NewProp_bIsSelected_SetBit(void* Obj)
	{
		((AFGDude*)Obj)->bIsSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGDude_Statics::NewProp_bIsSelected = { "bIsSelected", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGDude), &Z_Construct_UClass_AFGDude_Statics::NewProp_bIsSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGDude_Statics::NewProp_bIsSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGDude_Statics::NewProp_bIsSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDude_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Player/FGDude.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGDude_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGDude, MoveSpeed), METADATA_PARAMS(Z_Construct_UClass_AFGDude_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGDude_Statics::NewProp_MoveSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGDude_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDude_Statics::NewProp_bIsSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDude_Statics::NewProp_MoveSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGDude_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGDude>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGDude_Statics::ClassParams = {
		&AFGDude::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGDude_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFGDude_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFGDude_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFGDude_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGDude()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGDude_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGDude, 636589851);
	template<> FGAI_2_API UClass* StaticClass<AFGDude>()
	{
		return AFGDude::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGDude(Z_Construct_UClass_AFGDude, &AFGDude::StaticClass, TEXT("/Script/FGAI_2"), TEXT("AFGDude"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGDude);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
