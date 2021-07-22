// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CSKO_CSKOCharacter_generated_h
#error "CSKOCharacter.generated.h already included, missing '#pragma once' in CSKOCharacter.h"
#endif
#define CSKO_CSKOCharacter_generated_h

#define CSKO_Source_CSKO_CSKOCharacter_h_12_SPARSE_DATA
#define CSKO_Source_CSKO_CSKOCharacter_h_12_RPC_WRAPPERS
#define CSKO_Source_CSKO_CSKOCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define CSKO_Source_CSKO_CSKOCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACSKOCharacter(); \
	friend struct Z_Construct_UClass_ACSKOCharacter_Statics; \
public: \
	DECLARE_CLASS(ACSKOCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CSKO"), NO_API) \
	DECLARE_SERIALIZER(ACSKOCharacter)


#define CSKO_Source_CSKO_CSKOCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACSKOCharacter(); \
	friend struct Z_Construct_UClass_ACSKOCharacter_Statics; \
public: \
	DECLARE_CLASS(ACSKOCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CSKO"), NO_API) \
	DECLARE_SERIALIZER(ACSKOCharacter)


#define CSKO_Source_CSKO_CSKOCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACSKOCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACSKOCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACSKOCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACSKOCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACSKOCharacter(ACSKOCharacter&&); \
	NO_API ACSKOCharacter(const ACSKOCharacter&); \
public:


#define CSKO_Source_CSKO_CSKOCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACSKOCharacter(ACSKOCharacter&&); \
	NO_API ACSKOCharacter(const ACSKOCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACSKOCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACSKOCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACSKOCharacter)


#define CSKO_Source_CSKO_CSKOCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ACSKOCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ACSKOCharacter, FollowCamera); }


#define CSKO_Source_CSKO_CSKOCharacter_h_9_PROLOG
#define CSKO_Source_CSKO_CSKOCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CSKO_Source_CSKO_CSKOCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	CSKO_Source_CSKO_CSKOCharacter_h_12_SPARSE_DATA \
	CSKO_Source_CSKO_CSKOCharacter_h_12_RPC_WRAPPERS \
	CSKO_Source_CSKO_CSKOCharacter_h_12_INCLASS \
	CSKO_Source_CSKO_CSKOCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CSKO_Source_CSKO_CSKOCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CSKO_Source_CSKO_CSKOCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	CSKO_Source_CSKO_CSKOCharacter_h_12_SPARSE_DATA \
	CSKO_Source_CSKO_CSKOCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CSKO_Source_CSKO_CSKOCharacter_h_12_INCLASS_NO_PURE_DECLS \
	CSKO_Source_CSKO_CSKOCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CSKO_API UClass* StaticClass<class ACSKOCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CSKO_Source_CSKO_CSKOCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
