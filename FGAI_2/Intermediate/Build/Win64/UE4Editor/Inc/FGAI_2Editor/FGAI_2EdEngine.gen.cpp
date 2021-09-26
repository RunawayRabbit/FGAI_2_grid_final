// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FGAI_2Editor/FGAI_2EdEngine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGAI_2EdEngine() {}
// Cross Module References
	FGAI_2EDITOR_API UClass* Z_Construct_UClass_UFGAI_2EdEngine_NoRegister();
	FGAI_2EDITOR_API UClass* Z_Construct_UClass_UFGAI_2EdEngine();
	UNREALED_API UClass* Z_Construct_UClass_UUnrealEdEngine();
	UPackage* Z_Construct_UPackage__Script_FGAI_2Editor();
// End Cross Module References
	void UFGAI_2EdEngine::StaticRegisterNativesUFGAI_2EdEngine()
	{
	}
	UClass* Z_Construct_UClass_UFGAI_2EdEngine_NoRegister()
	{
		return UFGAI_2EdEngine::StaticClass();
	}
	struct Z_Construct_UClass_UFGAI_2EdEngine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGAI_2EdEngine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUnrealEdEngine,
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI_2Editor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAI_2EdEngine_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGAI_2EdEngine.h" },
		{ "ModuleRelativePath", "FGAI_2EdEngine.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGAI_2EdEngine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGAI_2EdEngine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGAI_2EdEngine_Statics::ClassParams = {
		&UFGAI_2EdEngine::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000AEu,
		METADATA_PARAMS(Z_Construct_UClass_UFGAI_2EdEngine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFGAI_2EdEngine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGAI_2EdEngine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGAI_2EdEngine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGAI_2EdEngine, 2857006277);
	template<> FGAI_2EDITOR_API UClass* StaticClass<UFGAI_2EdEngine>()
	{
		return UFGAI_2EdEngine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGAI_2EdEngine(Z_Construct_UClass_UFGAI_2EdEngine, &UFGAI_2EdEngine::StaticClass, TEXT("/Script/FGAI_2Editor"), TEXT("UFGAI_2EdEngine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGAI_2EdEngine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
