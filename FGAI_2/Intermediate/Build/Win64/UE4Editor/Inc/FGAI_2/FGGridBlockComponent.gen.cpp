// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FGAI_2/Grid/FGGridBlockComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGGridBlockComponent() {}
// Cross Module References
	FGAI_2_API UClass* Z_Construct_UClass_UFGGridBlockComponent_NoRegister();
	FGAI_2_API UClass* Z_Construct_UClass_UFGGridBlockComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_FGAI_2();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UFGGridBlockComponent::execGetBlockTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetBlockTransform();
		P_NATIVE_END;
	}
	void UFGGridBlockComponent::StaticRegisterNativesUFGGridBlockComponent()
	{
		UClass* Class = UFGGridBlockComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBlockTransform", &UFGGridBlockComponent::execGetBlockTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGGridBlockComponent_GetBlockTransform_Statics
	{
		struct FGGridBlockComponent_eventGetBlockTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGGridBlockComponent_GetBlockTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGridBlockComponent_eventGetBlockTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGridBlockComponent_GetBlockTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGridBlockComponent_GetBlockTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGridBlockComponent_GetBlockTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid/FGGridBlockComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGridBlockComponent_GetBlockTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGridBlockComponent, nullptr, "GetBlockTransform", nullptr, nullptr, sizeof(FGGridBlockComponent_eventGetBlockTransform_Parms), Z_Construct_UFunction_UFGGridBlockComponent_GetBlockTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFGGridBlockComponent_GetBlockTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGridBlockComponent_GetBlockTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFGGridBlockComponent_GetBlockTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGridBlockComponent_GetBlockTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGridBlockComponent_GetBlockTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGGridBlockComponent_NoRegister()
	{
		return UFGGridBlockComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFGGridBlockComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Extents_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Extents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGGridBlockComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI_2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGGridBlockComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGGridBlockComponent_GetBlockTransform, "GetBlockTransform" }, // 1427822066
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGridBlockComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Grid/FGGridBlockComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Grid/FGGridBlockComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGridBlockComponent_Statics::NewProp_Extents_MetaData[] = {
		{ "Category", "FGGridBlockComponent" },
		{ "ModuleRelativePath", "Grid/FGGridBlockComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGGridBlockComponent_Statics::NewProp_Extents = { "Extents", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGGridBlockComponent, Extents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFGGridBlockComponent_Statics::NewProp_Extents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGGridBlockComponent_Statics::NewProp_Extents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGGridBlockComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGGridBlockComponent_Statics::NewProp_Extents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGGridBlockComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGGridBlockComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGGridBlockComponent_Statics::ClassParams = {
		&UFGGridBlockComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGGridBlockComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFGGridBlockComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFGGridBlockComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFGGridBlockComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGGridBlockComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGGridBlockComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGGridBlockComponent, 3304566974);
	template<> FGAI_2_API UClass* StaticClass<UFGGridBlockComponent>()
	{
		return UFGGridBlockComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGGridBlockComponent(Z_Construct_UClass_UFGGridBlockComponent, &UFGGridBlockComponent::StaticClass, TEXT("/Script/FGAI_2"), TEXT("UFGGridBlockComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGGridBlockComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
