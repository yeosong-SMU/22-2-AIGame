// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chaptr1_to_6/Chaptr1_to_6GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaptr1_to_6GameMode() {}
// Cross Module References
	CHAPTR1_TO_6_API UClass* Z_Construct_UClass_AChaptr1_to_6GameMode_NoRegister();
	CHAPTR1_TO_6_API UClass* Z_Construct_UClass_AChaptr1_to_6GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Chaptr1_to_6();
// End Cross Module References
	void AChaptr1_to_6GameMode::StaticRegisterNativesAChaptr1_to_6GameMode()
	{
	}
	UClass* Z_Construct_UClass_AChaptr1_to_6GameMode_NoRegister()
	{
		return AChaptr1_to_6GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AChaptr1_to_6GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChaptr1_to_6GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Chaptr1_to_6,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaptr1_to_6GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Chaptr1_to_6GameMode.h" },
		{ "ModuleRelativePath", "Chaptr1_to_6GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChaptr1_to_6GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChaptr1_to_6GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChaptr1_to_6GameMode_Statics::ClassParams = {
		&AChaptr1_to_6GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AChaptr1_to_6GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChaptr1_to_6GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChaptr1_to_6GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChaptr1_to_6GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChaptr1_to_6GameMode, 3183053277);
	template<> CHAPTR1_TO_6_API UClass* StaticClass<AChaptr1_to_6GameMode>()
	{
		return AChaptr1_to_6GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChaptr1_to_6GameMode(Z_Construct_UClass_AChaptr1_to_6GameMode, &AChaptr1_to_6GameMode::StaticClass, TEXT("/Script/Chaptr1_to_6"), TEXT("AChaptr1_to_6GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChaptr1_to_6GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
