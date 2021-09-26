// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FGAI_2/Util/Morton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMorton() {}
// Cross Module References
	FGAI_2_API UClass* Z_Construct_UClass_UMorton_NoRegister();
	FGAI_2_API UClass* Z_Construct_UClass_UMorton();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FGAI_2();
// End Cross Module References
	void UMorton::StaticRegisterNativesUMorton()
	{
	}
	UClass* Z_Construct_UClass_UMorton_NoRegister()
	{
		return UMorton::StaticClass();
	}
	struct Z_Construct_UClass_UMorton_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMorton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI_2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMorton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Util/Morton.h" },
		{ "ModuleRelativePath", "Util/Morton.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMorton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMorton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMorton_Statics::ClassParams = {
		&UMorton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMorton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMorton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMorton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMorton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMorton, 2631489558);
	template<> FGAI_2_API UClass* StaticClass<UMorton>()
	{
		return UMorton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMorton(Z_Construct_UClass_UMorton, &UMorton::StaticClass, TEXT("/Script/FGAI_2"), TEXT("UMorton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMorton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
