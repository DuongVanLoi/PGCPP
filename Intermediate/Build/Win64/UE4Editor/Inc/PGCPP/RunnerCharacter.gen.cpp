// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PGCPP/RunnerCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRunnerCharacter() {}
// Cross Module References
	PGCPP_API UClass* Z_Construct_UClass_ARunnerCharacter_NoRegister();
	PGCPP_API UClass* Z_Construct_UClass_ARunnerCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_PGCPP();
// End Cross Module References
	void ARunnerCharacter::StaticRegisterNativesARunnerCharacter()
	{
	}
	UClass* Z_Construct_UClass_ARunnerCharacter_NoRegister()
	{
		return ARunnerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ARunnerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARunnerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PGCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunnerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RunnerCharacter.h" },
		{ "ModuleRelativePath", "RunnerCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARunnerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARunnerCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARunnerCharacter_Statics::ClassParams = {
		&ARunnerCharacter::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARunnerCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARunnerCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARunnerCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARunnerCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARunnerCharacter, 3876928027);
	template<> PGCPP_API UClass* StaticClass<ARunnerCharacter>()
	{
		return ARunnerCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARunnerCharacter(Z_Construct_UClass_ARunnerCharacter, &ARunnerCharacter::StaticClass, TEXT("/Script/PGCPP"), TEXT("ARunnerCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARunnerCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
