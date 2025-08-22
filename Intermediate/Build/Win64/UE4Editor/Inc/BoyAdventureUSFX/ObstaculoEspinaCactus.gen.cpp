// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoyAdventureUSFX/ObstaculoEspinaCactus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculoEspinaCactus() {}
// Cross Module References
	BOYADVENTUREUSFX_API UClass* Z_Construct_UClass_AObstaculoEspinaCactus_NoRegister();
	BOYADVENTUREUSFX_API UClass* Z_Construct_UClass_AObstaculoEspinaCactus();
	BOYADVENTUREUSFX_API UClass* Z_Construct_UClass_AObstaculoEspina();
	UPackage* Z_Construct_UPackage__Script_BoyAdventureUSFX();
// End Cross Module References
	void AObstaculoEspinaCactus::StaticRegisterNativesAObstaculoEspinaCactus()
	{
	}
	UClass* Z_Construct_UClass_AObstaculoEspinaCactus_NoRegister()
	{
		return AObstaculoEspinaCactus::StaticClass();
	}
	struct Z_Construct_UClass_AObstaculoEspinaCactus_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstaculoEspinaCactus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstaculoEspina,
		(UObject* (*)())Z_Construct_UPackage__Script_BoyAdventureUSFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoEspinaCactus_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ObstaculoEspinaCactus.h" },
		{ "ModuleRelativePath", "ObstaculoEspinaCactus.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstaculoEspinaCactus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculoEspinaCactus>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstaculoEspinaCactus_Statics::ClassParams = {
		&AObstaculoEspinaCactus::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AObstaculoEspinaCactus_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoEspinaCactus_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstaculoEspinaCactus()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstaculoEspinaCactus_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstaculoEspinaCactus, 3339970517);
	template<> BOYADVENTUREUSFX_API UClass* StaticClass<AObstaculoEspinaCactus>()
	{
		return AObstaculoEspinaCactus::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstaculoEspinaCactus(Z_Construct_UClass_AObstaculoEspinaCactus, &AObstaculoEspinaCactus::StaticClass, TEXT("/Script/BoyAdventureUSFX"), TEXT("AObstaculoEspinaCactus"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculoEspinaCactus);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
