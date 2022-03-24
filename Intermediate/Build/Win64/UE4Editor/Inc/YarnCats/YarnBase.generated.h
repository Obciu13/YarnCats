// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YARNCATS_YarnBase_generated_h
#error "YarnBase.generated.h already included, missing '#pragma once' in YarnBase.h"
#endif
#define YARNCATS_YarnBase_generated_h

#define YarnCats_Source_YarnCats_YarnBase_h_14_SPARSE_DATA
#define YarnCats_Source_YarnCats_YarnBase_h_14_RPC_WRAPPERS
#define YarnCats_Source_YarnCats_YarnBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define YarnCats_Source_YarnCats_YarnBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAYarnBase(); \
	friend struct Z_Construct_UClass_AYarnBase_Statics; \
public: \
	DECLARE_CLASS(AYarnBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/YarnCats"), NO_API) \
	DECLARE_SERIALIZER(AYarnBase)


#define YarnCats_Source_YarnCats_YarnBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAYarnBase(); \
	friend struct Z_Construct_UClass_AYarnBase_Statics; \
public: \
	DECLARE_CLASS(AYarnBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/YarnCats"), NO_API) \
	DECLARE_SERIALIZER(AYarnBase)


#define YarnCats_Source_YarnCats_YarnBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AYarnBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AYarnBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AYarnBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AYarnBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AYarnBase(AYarnBase&&); \
	NO_API AYarnBase(const AYarnBase&); \
public:


#define YarnCats_Source_YarnCats_YarnBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AYarnBase(AYarnBase&&); \
	NO_API AYarnBase(const AYarnBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AYarnBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AYarnBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AYarnBase)


#define YarnCats_Source_YarnCats_YarnBase_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1() { return STRUCT_OFFSET(AYarnBase, Mesh1); }


#define YarnCats_Source_YarnCats_YarnBase_h_11_PROLOG
#define YarnCats_Source_YarnCats_YarnBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	YarnCats_Source_YarnCats_YarnBase_h_14_PRIVATE_PROPERTY_OFFSET \
	YarnCats_Source_YarnCats_YarnBase_h_14_SPARSE_DATA \
	YarnCats_Source_YarnCats_YarnBase_h_14_RPC_WRAPPERS \
	YarnCats_Source_YarnCats_YarnBase_h_14_INCLASS \
	YarnCats_Source_YarnCats_YarnBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define YarnCats_Source_YarnCats_YarnBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	YarnCats_Source_YarnCats_YarnBase_h_14_PRIVATE_PROPERTY_OFFSET \
	YarnCats_Source_YarnCats_YarnBase_h_14_SPARSE_DATA \
	YarnCats_Source_YarnCats_YarnBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	YarnCats_Source_YarnCats_YarnBase_h_14_INCLASS_NO_PURE_DECLS \
	YarnCats_Source_YarnCats_YarnBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YARNCATS_API UClass* StaticClass<class AYarnBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID YarnCats_Source_YarnCats_YarnBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
