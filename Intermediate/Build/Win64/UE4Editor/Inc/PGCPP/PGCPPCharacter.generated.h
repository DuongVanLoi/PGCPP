// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PGCPP_PGCPPCharacter_generated_h
#error "PGCPPCharacter.generated.h already included, missing '#pragma once' in PGCPPCharacter.h"
#endif
#define PGCPP_PGCPPCharacter_generated_h

#define PGCPP_Source_PGCPP_PGCPPCharacter_h_12_SPARSE_DATA
#define PGCPP_Source_PGCPP_PGCPPCharacter_h_12_RPC_WRAPPERS
#define PGCPP_Source_PGCPP_PGCPPCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define PGCPP_Source_PGCPP_PGCPPCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPGCPPCharacter(); \
	friend struct Z_Construct_UClass_APGCPPCharacter_Statics; \
public: \
	DECLARE_CLASS(APGCPPCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PGCPP"), NO_API) \
	DECLARE_SERIALIZER(APGCPPCharacter)


#define PGCPP_Source_PGCPP_PGCPPCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPGCPPCharacter(); \
	friend struct Z_Construct_UClass_APGCPPCharacter_Statics; \
public: \
	DECLARE_CLASS(APGCPPCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PGCPP"), NO_API) \
	DECLARE_SERIALIZER(APGCPPCharacter)


#define PGCPP_Source_PGCPP_PGCPPCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APGCPPCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APGCPPCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APGCPPCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APGCPPCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APGCPPCharacter(APGCPPCharacter&&); \
	NO_API APGCPPCharacter(const APGCPPCharacter&); \
public:


#define PGCPP_Source_PGCPP_PGCPPCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APGCPPCharacter(APGCPPCharacter&&); \
	NO_API APGCPPCharacter(const APGCPPCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APGCPPCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APGCPPCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APGCPPCharacter)


#define PGCPP_Source_PGCPP_PGCPPCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(APGCPPCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(APGCPPCharacter, FollowCamera); }


#define PGCPP_Source_PGCPP_PGCPPCharacter_h_9_PROLOG
#define PGCPP_Source_PGCPP_PGCPPCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PGCPP_Source_PGCPP_PGCPPCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	PGCPP_Source_PGCPP_PGCPPCharacter_h_12_SPARSE_DATA \
	PGCPP_Source_PGCPP_PGCPPCharacter_h_12_RPC_WRAPPERS \
	PGCPP_Source_PGCPP_PGCPPCharacter_h_12_INCLASS \
	PGCPP_Source_PGCPP_PGCPPCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PGCPP_Source_PGCPP_PGCPPCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PGCPP_Source_PGCPP_PGCPPCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	PGCPP_Source_PGCPP_PGCPPCharacter_h_12_SPARSE_DATA \
	PGCPP_Source_PGCPP_PGCPPCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PGCPP_Source_PGCPP_PGCPPCharacter_h_12_INCLASS_NO_PURE_DECLS \
	PGCPP_Source_PGCPP_PGCPPCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PGCPP_API UClass* StaticClass<class APGCPPCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PGCPP_Source_PGCPP_PGCPPCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
