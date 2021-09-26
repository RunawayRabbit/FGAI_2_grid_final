// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FGAI_2/Player/FGPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGPlayer() {}
// Cross Module References
	FGAI_2_API UClass* Z_Construct_UClass_AFGPlayer_NoRegister();
	FGAI_2_API UClass* Z_Construct_UClass_AFGPlayer();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_FGAI_2();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	FGAI_2_API UClass* Z_Construct_UClass_AFGGridActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFGPlayer::execGetMouseLocationOnGrid)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutWorldMouseLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMouseLocationOnGrid(Z_Param_Out_OutWorldMouseLocation);
		P_NATIVE_END;
	}
	static FName NAME_AFGPlayer_BP_SetEnd = FName(TEXT("BP_SetEnd"));
	void AFGPlayer::BP_SetEnd(const FVector Position)
	{
		FGPlayer_eventBP_SetEnd_Parms Parms;
		Parms.Position=Position;
		ProcessEvent(FindFunctionChecked(NAME_AFGPlayer_BP_SetEnd),&Parms);
	}
	static FName NAME_AFGPlayer_BP_SetStart = FName(TEXT("BP_SetStart"));
	void AFGPlayer::BP_SetStart(const FVector Position)
	{
		FGPlayer_eventBP_SetStart_Parms Parms;
		Parms.Position=Position;
		ProcessEvent(FindFunctionChecked(NAME_AFGPlayer_BP_SetStart),&Parms);
	}
	void AFGPlayer::StaticRegisterNativesAFGPlayer()
	{
		UClass* Class = AFGPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMouseLocationOnGrid", &AFGPlayer::execGetMouseLocationOnGrid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGPlayer_BP_SetEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayer_BP_SetEnd_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGPlayer_BP_SetEnd_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayer_eventBP_SetEnd_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayer_BP_SetEnd_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGPlayer_BP_SetEnd_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayer_BP_SetEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayer_BP_SetEnd_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayer_BP_SetEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "DisplayName", "Set End" },
		{ "ModuleRelativePath", "Player/FGPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayer_BP_SetEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayer, nullptr, "BP_SetEnd", nullptr, nullptr, sizeof(FGPlayer_eventBP_SetEnd_Parms), Z_Construct_UFunction_AFGPlayer_BP_SetEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGPlayer_BP_SetEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayer_BP_SetEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGPlayer_BP_SetEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayer_BP_SetEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayer_BP_SetEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayer_BP_SetStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayer_BP_SetStart_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGPlayer_BP_SetStart_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayer_eventBP_SetStart_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayer_BP_SetStart_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGPlayer_BP_SetStart_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayer_BP_SetStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayer_BP_SetStart_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayer_BP_SetStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "DisplayName", "Set Start" },
		{ "ModuleRelativePath", "Player/FGPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayer_BP_SetStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayer, nullptr, "BP_SetStart", nullptr, nullptr, sizeof(FGPlayer_eventBP_SetStart_Parms), Z_Construct_UFunction_AFGPlayer_BP_SetStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGPlayer_BP_SetStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayer_BP_SetStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGPlayer_BP_SetStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayer_BP_SetStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayer_BP_SetStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayer_GetMouseLocationOnGrid_Statics
	{
		struct FGPlayer_eventGetMouseLocationOnGrid_Parms
		{
			FVector OutWorldMouseLocation;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutWorldMouseLocation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGPlayer_GetMouseLocationOnGrid_Statics::NewProp_OutWorldMouseLocation = { "OutWorldMouseLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayer_eventGetMouseLocationOnGrid_Parms, OutWorldMouseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFGPlayer_GetMouseLocationOnGrid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGPlayer_eventGetMouseLocationOnGrid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGPlayer_GetMouseLocationOnGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGPlayer_eventGetMouseLocationOnGrid_Parms), &Z_Construct_UFunction_AFGPlayer_GetMouseLocationOnGrid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayer_GetMouseLocationOnGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayer_GetMouseLocationOnGrid_Statics::NewProp_OutWorldMouseLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayer_GetMouseLocationOnGrid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayer_GetMouseLocationOnGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player/FGPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayer_GetMouseLocationOnGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayer, nullptr, "GetMouseLocationOnGrid", nullptr, nullptr, sizeof(FGPlayer_eventGetMouseLocationOnGrid_Parms), Z_Construct_UFunction_AFGPlayer_GetMouseLocationOnGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGPlayer_GetMouseLocationOnGrid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayer_GetMouseLocationOnGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFGPlayer_GetMouseLocationOnGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayer_GetMouseLocationOnGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayer_GetMouseLocationOnGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGPlayer_NoRegister()
	{
		return AFGPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AFGPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentGridActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentGridActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalMovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HorizontalMovementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalMovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VerticalMovementSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI_2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGPlayer_BP_SetEnd, "BP_SetEnd" }, // 194041620
		{ &Z_Construct_UFunction_AFGPlayer_BP_SetStart, "BP_SetStart" }, // 1904011994
		{ &Z_Construct_UFunction_AFGPlayer_GetMouseLocationOnGrid, "GetMouseLocationOnGrid" }, // 3516578874
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/FGPlayer.h" },
		{ "ModuleRelativePath", "Player/FGPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayer_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/FGPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGPlayer_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPlayer, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGPlayer_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGPlayer_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayer_Statics::NewProp_CurrentGridActor_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player/FGPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGPlayer_Statics::NewProp_CurrentGridActor = { "CurrentGridActor", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPlayer, CurrentGridActor), Z_Construct_UClass_AFGGridActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGPlayer_Statics::NewProp_CurrentGridActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGPlayer_Statics::NewProp_CurrentGridActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayer_Statics::NewProp_HorizontalMovementSpeed_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player/FGPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGPlayer_Statics::NewProp_HorizontalMovementSpeed = { "HorizontalMovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPlayer, HorizontalMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_AFGPlayer_Statics::NewProp_HorizontalMovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGPlayer_Statics::NewProp_HorizontalMovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayer_Statics::NewProp_VerticalMovementSpeed_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player/FGPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGPlayer_Statics::NewProp_VerticalMovementSpeed = { "VerticalMovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPlayer, VerticalMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_AFGPlayer_Statics::NewProp_VerticalMovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFGPlayer_Statics::NewProp_VerticalMovementSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayer_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayer_Statics::NewProp_CurrentGridActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayer_Statics::NewProp_HorizontalMovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayer_Statics::NewProp_VerticalMovementSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGPlayer_Statics::ClassParams = {
		&AFGPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFGPlayer_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFGPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFGPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGPlayer, 749308230);
	template<> FGAI_2_API UClass* StaticClass<AFGPlayer>()
	{
		return AFGPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGPlayer(Z_Construct_UClass_AFGPlayer, &AFGPlayer::StaticClass, TEXT("/Script/FGAI_2"), TEXT("AFGPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
