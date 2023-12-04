// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PGCPP/PGCPPGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePGCPPGameMode() {}
// Cross Module References
	PGCPP_API UClass* Z_Construct_UClass_APGCPPGameMode_NoRegister();
	PGCPP_API UClass* Z_Construct_UClass_APGCPPGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PGCPP();
// End Cross Module References
	void APGCPPGameMode::StaticRegisterNativesAPGCPPGameMode()
	{
	}
	UClass* Z_Construct_UClass_APGCPPGameMode_NoRegister()
	{
		return APGCPPGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APGCPPGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APGCPPGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PGCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APGCPPGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PGCPPGameMode.h" },
		{ "ModuleRelativePath", "PGCPPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APGCPPGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APGCPPGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APGCPPGameMode_Statics::ClassParams = {
		&APGCPPGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APGCPPGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APGCPPGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APGCPPGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APGCPPGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APGCPPGameMode, 2201311149);
	template<> PGCPP_API UClass* StaticClass<APGCPPGameMode>()
	{
		return APGCPPGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APGCPPGameMode(Z_Construct_UClass_APGCPPGameMode, &APGCPPGameMode::StaticClass, TEXT("/Script/PGCPP"), TEXT("APGCPPGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APGCPPGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
