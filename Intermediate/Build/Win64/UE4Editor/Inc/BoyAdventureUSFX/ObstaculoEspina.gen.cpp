// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoyAdventureUSFX/ObstaculoEspina.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculoEspina() {}
// Cross Module References
	BOYADVENTUREUSFX_API UClass* Z_Construct_UClass_AObstaculoEspina_NoRegister();
	BOYADVENTUREUSFX_API UClass* Z_Construct_UClass_AObstaculoEspina();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BoyAdventureUSFX();
// End Cross Module References
	void AObstaculoEspina::StaticRegisterNativesAObstaculoEspina()
	{
	}
	UClass* Z_Construct_UClass_AObstaculoEspina_NoRegister()
	{
		return AObstaculoEspina::StaticClass();
	}
	struct Z_Construct_UClass_AObstaculoEspina_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstaculoEspina_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BoyAdventureUSFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoEspina_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObstaculoEspina.h" },
		{ "ModuleRelativePath", "ObstaculoEspina.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstaculoEspina_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculoEspina>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstaculoEspina_Statics::ClassParams = {
		&AObstaculoEspina::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObstaculoEspina_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoEspina_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstaculoEspina()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstaculoEspina_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstaculoEspina, 3745150243);
	template<> BOYADVENTUREUSFX_API UClass* StaticClass<AObstaculoEspina>()
	{
		return AObstaculoEspina::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstaculoEspina(Z_Construct_UClass_AObstaculoEspina, &AObstaculoEspina::StaticClass, TEXT("/Script/BoyAdventureUSFX"), TEXT("AObstaculoEspina"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculoEspina);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
