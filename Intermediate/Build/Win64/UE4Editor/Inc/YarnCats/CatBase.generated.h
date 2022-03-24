// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YARNCATS_CatBase_generated_h
#error "CatBase.generated.h already included, missing '#pragma once' in CatBase.h"
#endif
#define YARNCATS_CatBase_generated_h

#define YarnCats_Source_YarnCats_CatBase_h_15_SPARSE_DATA
#define YarnCats_Source_YarnCats_CatBase_h_15_RPC_WRAPPERS \
	virtual void StartPushLeft_Implementation(); \
	virtual void StartPushRight_Implementation(); \
	virtual void StartPushForward_Implementation(); \
	virtual void ReleaseSelected_Implementation(); \
 \
	DECLARE_FUNCTION(execStartPushLeft); \
	DECLARE_FUNCTION(execStartPushRight); \
	DECLARE_FUNCTION(execStartPushForward); \
	DECLARE_FUNCTION(execReleaseSelected);


#define YarnCats_Source_YarnCats_CatBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void StartPushLeft_Implementation(); \
	virtual void StartPushRight_Implementation(); \
	virtual void StartPushForward_Implementation(); \
	virtual void ReleaseSelected_Implementation(); \
 \
	DECLARE_FUNCTION(execStartPushLeft); \
	DECLARE_FUNCTION(execStartPushRight); \
	DECLARE_FUNCTION(execStartPushForward); \
	DECLARE_FUNCTION(execReleaseSelected);


#define YarnCats_Source_YarnCats_CatBase_h_15_EVENT_PARMS
#define YarnCats_Source_YarnCats_CatBase_h_15_CALLBACK_WRAPPERS
#define YarnCats_Source_YarnCats_CatBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACatBase(); \
	friend struct Z_Construct_UClass_ACatBase_Statics; \
public: \
	DECLARE_CLASS(ACatBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/YarnCats"), NO_API) \
	DECLARE_SERIALIZER(ACatBase)


#define YarnCats_Source_YarnCats_CatBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACatBase(); \
	friend struct Z_Construct_UClass_ACatBase_Statics; \
public: \
	DECLARE_CLASS(ACatBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/YarnCats"), NO_API) \
	DECLARE_SERIALIZER(ACatBase)


#define YarnCats_Source_YarnCats_CatBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACatBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACatBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACatBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACatBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACatBase(ACatBase&&); \
	NO_API ACatBase(const ACatBase&); \
public:


#define YarnCats_Source_YarnCats_CatBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACatBase(ACatBase&&); \
	NO_API ACatBase(const ACatBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACatBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACatBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACatBase)


#define YarnCats_Source_YarnCats_CatBase_h_15_PRIVATE_PROPERTY_OFFSET
#define YarnCats_Source_YarnCats_CatBase_h_12_PROLOG \
	YarnCats_Source_YarnCats_CatBase_h_15_EVENT_PARMS


#define YarnCats_Source_YarnCats_CatBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	YarnCats_Source_YarnCats_CatBase_h_15_PRIVATE_PROPERTY_OFFSET \
	YarnCats_Source_YarnCats_CatBase_h_15_SPARSE_DATA \
	YarnCats_Source_YarnCats_CatBase_h_15_RPC_WRAPPERS \
	YarnCats_Source_YarnCats_CatBase_h_15_CALLBACK_WRAPPERS \
	YarnCats_Source_YarnCats_CatBase_h_15_INCLASS \
	YarnCats_Source_YarnCats_CatBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define YarnCats_Source_YarnCats_CatBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	YarnCats_Source_YarnCats_CatBase_h_15_PRIVATE_PROPERTY_OFFSET \
	YarnCats_Source_YarnCats_CatBase_h_15_SPARSE_DATA \
	YarnCats_Source_YarnCats_CatBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	YarnCats_Source_YarnCats_CatBase_h_15_CALLBACK_WRAPPERS \
	YarnCats_Source_YarnCats_CatBase_h_15_INCLASS_NO_PURE_DECLS \
	YarnCats_Source_YarnCats_CatBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YARNCATS_API UClass* StaticClass<class ACatBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID YarnCats_Source_YarnCats_CatBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
