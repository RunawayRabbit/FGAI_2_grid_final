// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FGAI_2/Player/FGHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGHUD() {}
// Cross Module References
	FGAI_2_API UClass* Z_Construct_UClass_AFGHUD_NoRegister();
	FGAI_2_API UClass* Z_Construct_UClass_AFGHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_FGAI_2();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	DEFINE_FUNCTION(AFGHUD::execOnSelectRelease)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSelectRelease();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFGHUD::execOnSelectPress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSelectPress();
		P_NATIVE_END;
	}
	void AFGHUD::StaticRegisterNativesAFGHUD()
	{
		UClass* Class = AFGHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSelectPress", &AFGHUD::execOnSelectPress },
			{ "OnSelectRelease", &AFGHUD::execOnSelectRelease },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGHUD_OnSelectPress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUD_OnSelectPress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/FGHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_OnSelectPress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, nullptr, "OnSelectPress", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_OnSelectPress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_OnSelectPress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHUD_OnSelectPress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHUD_OnSelectPress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHUD_OnSelectRelease_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUD_OnSelectRelease_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/FGHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_OnSelectRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, nullptr, "OnSelectRelease", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_OnSelectRelease_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_OnSelectRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHUD_OnSelectRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHUD_OnSelectRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGHUD_NoRegister()
	{
		return AFGHUD::StaticClass();
	}
	struct Z_Construct_UClass_AFGHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FillColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FillColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BorderColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BorderColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxThresholdSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoxThresholdSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI_2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGHUD_OnSelectPress, "OnSelectPress" }, // 3422465622
		{ &Z_Construct_UFunction_AFGHUD_OnSelectRelease, "OnSelectRelease" }, // 982128691
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Player/FGHUD.h" },
		{ "ModuleRelativePath", "Player/FGHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::NewProp_FillColor_MetaData[] = {
		{ "Category", "FGHUD" },
		{ "ModuleRelativePath", "Player/FGHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_FillColor = { "FillColor", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHUD, FillColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_FillColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_FillColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::NewProp_BorderColor_MetaData[] = {
		{ "Category", "FGHUD" },
		{ "ModuleRelativePath", "Player/FGHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_BorderColor = { "BorderColor", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHUD, BorderColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_BorderColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_BorderColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::NewProp_BoxThresholdSize_MetaData[] = {
		{ "Category", "FGHUD" },
		{ "ModuleRelativePath", "Player/FGHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_BoxThresholdSize = { "BoxThresholdSize", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHUD, BoxThresholdSize), METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_BoxThresholdSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_BoxThresholdSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHUD_Statics::NewProp_FillColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHUD_Statics::NewProp_BorderColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHUD_Statics::NewProp_BoxThresholdSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGHUD_Statics::ClassParams = {
		&AFGHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGHUD, 4200864414);
	template<> FGAI_2_API UClass* StaticClass<AFGHUD>()
	{
		return AFGHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGHUD(Z_Construct_UClass_AFGHUD, &AFGHUD::StaticClass, TEXT("/Script/FGAI_2"), TEXT("AFGHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
