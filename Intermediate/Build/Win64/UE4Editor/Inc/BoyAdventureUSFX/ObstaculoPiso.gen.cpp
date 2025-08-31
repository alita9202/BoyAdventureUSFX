// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoyAdventureUSFX/ObstaculoPiso.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculoPiso() {}
// Cross Module References
	BOYADVENTUREUSFX_API UClass* Z_Construct_UClass_AObstaculoPiso_NoRegister();
	BOYADVENTUREUSFX_API UClass* Z_Construct_UClass_AObstaculoPiso();
	BOYADVENTUREUSFX_API UClass* Z_Construct_UClass_AObstaculo();
	UPackage* Z_Construct_UPackage__Script_BoyAdventureUSFX();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AObstaculoPiso::StaticRegisterNativesAObstaculoPiso()
	{
	}
	UClass* Z_Construct_UClass_AObstaculoPiso_NoRegister()
	{
		return AObstaculoPiso::StaticClass();
	}
	struct Z_Construct_UClass_AObstaculoPiso_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMoverEnZ_MetaData[];
#endif
		static void NewProp_bMoverEnZ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMoverEnZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMoverEnY_MetaData[];
#endif
		static void NewProp_bMoverEnY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMoverEnY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amplitud_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amplitud;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocidad_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Velocidad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshObstaculo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshObstaculo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstaculoPiso_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstaculo,
		(UObject* (*)())Z_Construct_UPackage__Script_BoyAdventureUSFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoPiso_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ObstaculoPiso.h" },
		{ "ModuleRelativePath", "ObstaculoPiso.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoPiso_Statics::NewProp_bMoverEnZ_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "Comment", "// --- Configuraci?n de movimiento ---\n" },
		{ "ModuleRelativePath", "ObstaculoPiso.h" },
		{ "ToolTip", "--- Configuraci?n de movimiento ---" },
	};
#endif
	void Z_Construct_UClass_AObstaculoPiso_Statics::NewProp_bMoverEnZ_SetBit(void* Obj)
	{
		((AObstaculoPiso*)Obj)->bMoverEnZ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AObstaculoPiso_Statics::NewProp_bMoverEnZ = { "bMoverEnZ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AObstaculoPiso), &Z_Construct_UClass_AObstaculoPiso_Statics::NewProp_bMoverEnZ_SetBit, METADATA_PARAMS(Z_Construct_UClass_AObstaculoPiso_Statics::NewProp_bMoverEnZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoPiso_Statics::NewProp_bMoverEnZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoPiso_Statics::NewProp_bMoverEnY_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "ModuleRelativePath", "ObstaculoPiso.h" },
	};
#endif
	void Z_Construct_UClass_AObstaculoPiso_Statics::NewProp_bMoverEnY_SetBit(void* Obj)
	{
		((AObstaculoPiso*)Obj)->bMoverEnY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AObstaculoPiso_Statics::NewProp_bMoverEnY = { "bMoverEnY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AObstaculoPiso), &Z_Construct_UClass_AObstaculoPiso_Statics::NewProp_bMoverEnY_SetBit, METADATA_PARAMS(Z_Construct_UClass_AObstaculoPiso_Statics::NewProp_bMoverEnY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoPiso_Statics::NewProp_bMoverEnY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoPiso_Statics::NewProp_Amplitud_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "ModuleRelativePath", "ObstaculoPiso.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AObstaculoPiso_Statics::NewProp_Amplitud = { "Amplitud", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObstaculoPiso, Amplitud), METADATA_PARAMS(Z_Construct_UClass_AObstaculoPiso_Statics::NewProp_Amplitud_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoPiso_Statics::NewProp_Amplitud_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoPiso_Statics::NewProp_Velocidad_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "ModuleRelativePath", "ObstaculoPiso.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AObstaculoPiso_Statics::NewProp_Velocidad = { "Velocidad", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObstaculoPiso, Velocidad), METADATA_PARAMS(Z_Construct_UClass_AObstaculoPiso_Statics::NewProp_Velocidad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoPiso_Statics::NewProp_Velocidad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoPiso_Statics::NewProp_MeshObstaculo_MetaData[] = {
		{ "Category", "ObstaculoPiso" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ObstaculoPiso.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObstaculoPiso_Statics::NewProp_MeshObstaculo = { "MeshObstaculo", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObstaculoPiso, MeshObstaculo), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AObstaculoPiso_Statics::NewProp_MeshObstaculo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoPiso_Statics::NewProp_MeshObstaculo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObstaculoPiso_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstaculoPiso_Statics::NewProp_bMoverEnZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstaculoPiso_Statics::NewProp_bMoverEnY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstaculoPiso_Statics::NewProp_Amplitud,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstaculoPiso_Statics::NewProp_Velocidad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstaculoPiso_Statics::NewProp_MeshObstaculo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstaculoPiso_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculoPiso>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstaculoPiso_Statics::ClassParams = {
		&AObstaculoPiso::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AObstaculoPiso_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoPiso_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObstaculoPiso_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoPiso_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstaculoPiso()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstaculoPiso_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstaculoPiso, 3310608778);
	template<> BOYADVENTUREUSFX_API UClass* StaticClass<AObstaculoPiso>()
	{
		return AObstaculoPiso::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstaculoPiso(Z_Construct_UClass_AObstaculoPiso, &AObstaculoPiso::StaticClass, TEXT("/Script/BoyAdventureUSFX"), TEXT("AObstaculoPiso"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculoPiso);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
