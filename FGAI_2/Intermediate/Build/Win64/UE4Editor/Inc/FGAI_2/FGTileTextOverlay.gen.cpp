// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FGAI_2/Grid/FGTileTextOverlay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGTileTextOverlay() {}
// Cross Module References
	FGAI_2_API UEnum* Z_Construct_UEnum_FGAI_2_ETileTextOverlayAlign();
	UPackage* Z_Construct_UPackage__Script_FGAI_2();
	FGAI_2_API UClass* Z_Construct_UClass_UFGTileTextOverlay_NoRegister();
	FGAI_2_API UClass* Z_Construct_UClass_UFGTileTextOverlay();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	FGAI_2_API UClass* Z_Construct_UClass_AFGGridActor_NoRegister();
// End Cross Module References
	static UEnum* ETileTextOverlayAlign_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FGAI_2_ETileTextOverlayAlign, Z_Construct_UPackage__Script_FGAI_2(), TEXT("ETileTextOverlayAlign"));
		}
		return Singleton;
	}
	template<> FGAI_2_API UEnum* StaticEnum<ETileTextOverlayAlign>()
	{
		return ETileTextOverlayAlign_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETileTextOverlayAlign(ETileTextOverlayAlign_StaticEnum, TEXT("/Script/FGAI_2"), TEXT("ETileTextOverlayAlign"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FGAI_2_ETileTextOverlayAlign_Hash() { return 1202352339U; }
	UEnum* Z_Construct_UEnum_FGAI_2_ETileTextOverlayAlign()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FGAI_2();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETileTextOverlayAlign"), 0, Get_Z_Construct_UEnum_FGAI_2_ETileTextOverlayAlign_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETileTextOverlayAlign::TopLeft", (int64)ETileTextOverlayAlign::TopLeft },
				{ "ETileTextOverlayAlign::Top", (int64)ETileTextOverlayAlign::Top },
				{ "ETileTextOverlayAlign::TopRight", (int64)ETileTextOverlayAlign::TopRight },
				{ "ETileTextOverlayAlign::Left", (int64)ETileTextOverlayAlign::Left },
				{ "ETileTextOverlayAlign::Right", (int64)ETileTextOverlayAlign::Right },
				{ "ETileTextOverlayAlign::BottomLeft", (int64)ETileTextOverlayAlign::BottomLeft },
				{ "ETileTextOverlayAlign::Bottom", (int64)ETileTextOverlayAlign::Bottom },
				{ "ETileTextOverlayAlign::BottomRight", (int64)ETileTextOverlayAlign::BottomRight },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bottom.Name", "ETileTextOverlayAlign::Bottom" },
				{ "BottomLeft.Name", "ETileTextOverlayAlign::BottomLeft" },
				{ "BottomRight.Name", "ETileTextOverlayAlign::BottomRight" },
				{ "Left.Name", "ETileTextOverlayAlign::Left" },
				{ "ModuleRelativePath", "Grid/FGTileTextOverlay.h" },
				{ "Right.Name", "ETileTextOverlayAlign::Right" },
				{ "Top.Name", "ETileTextOverlayAlign::Top" },
				{ "TopLeft.Name", "ETileTextOverlayAlign::TopLeft" },
				{ "TopRight.Name", "ETileTextOverlayAlign::TopRight" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FGAI_2,
				nullptr,
				"ETileTextOverlayAlign",
				"ETileTextOverlayAlign",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UFGTileTextOverlay::StaticRegisterNativesUFGTileTextOverlay()
	{
	}
	UClass* Z_Construct_UClass_UFGTileTextOverlay_NoRegister()
	{
		return UFGTileTextOverlay::StaticClass();
	}
	struct Z_Construct_UClass_UFGTileTextOverlay_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FontSize;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TextComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGTileTextOverlay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FGAI_2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGTileTextOverlay_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Grid/FGTileTextOverlay.h" },
		{ "ModuleRelativePath", "Grid/FGTileTextOverlay.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGTileTextOverlay_Statics::NewProp_FontSize_MetaData[] = {
		{ "Category", "FGTileTextOverlay" },
		{ "ModuleRelativePath", "Grid/FGTileTextOverlay.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGTileTextOverlay_Statics::NewProp_FontSize = { "FontSize", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGTileTextOverlay, FontSize), METADATA_PARAMS(Z_Construct_UClass_UFGTileTextOverlay_Statics::NewProp_FontSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGTileTextOverlay_Statics::NewProp_FontSize_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGTileTextOverlay_Statics::NewProp_TextComponents_Inner = { "TextComponents", nullptr, (EPropertyFlags)0x00000000000a0008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGTileTextOverlay_Statics::NewProp_TextComponents_MetaData[] = {
		{ "Category", "FGTileTextOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Grid/FGTileTextOverlay.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGTileTextOverlay_Statics::NewProp_TextComponents = { "TextComponents", nullptr, (EPropertyFlags)0x0040008000020009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGTileTextOverlay, TextComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFGTileTextOverlay_Statics::NewProp_TextComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGTileTextOverlay_Statics::NewProp_TextComponents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGTileTextOverlay_Statics::NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Grid/FGTileTextOverlay.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGTileTextOverlay_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGTileTextOverlay, Owner), Z_Construct_UClass_AFGGridActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGTileTextOverlay_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFGTileTextOverlay_Statics::NewProp_Owner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGTileTextOverlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGTileTextOverlay_Statics::NewProp_FontSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGTileTextOverlay_Statics::NewProp_TextComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGTileTextOverlay_Statics::NewProp_TextComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGTileTextOverlay_Statics::NewProp_Owner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGTileTextOverlay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGTileTextOverlay>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGTileTextOverlay_Statics::ClassParams = {
		&UFGTileTextOverlay::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFGTileTextOverlay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFGTileTextOverlay_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFGTileTextOverlay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFGTileTextOverlay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGTileTextOverlay()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGTileTextOverlay_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGTileTextOverlay, 1097731706);
	template<> FGAI_2_API UClass* StaticClass<UFGTileTextOverlay>()
	{
		return UFGTileTextOverlay::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGTileTextOverlay(Z_Construct_UClass_UFGTileTextOverlay, &UFGTileTextOverlay::StaticClass, TEXT("/Script/FGAI_2"), TEXT("UFGTileTextOverlay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGTileTextOverlay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
