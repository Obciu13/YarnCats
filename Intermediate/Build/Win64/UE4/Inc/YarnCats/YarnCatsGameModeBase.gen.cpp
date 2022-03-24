// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YarnCats/YarnCatsGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYarnCatsGameModeBase() {}
// Cross Module References
	YARNCATS_API UClass* Z_Construct_UClass_AYarnCatsGameModeBase_NoRegister();
	YARNCATS_API UClass* Z_Construct_UClass_AYarnCatsGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_YarnCats();
// End Cross Module References
	void AYarnCatsGameModeBase::StaticRegisterNativesAYarnCatsGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AYarnCatsGameModeBase_NoRegister()
	{
		return AYarnCatsGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AYarnCatsGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AYarnCatsGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_YarnCats,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AYarnCatsGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "YarnCatsGameModeBase.h" },
		{ "ModuleRelativePath", "YarnCatsGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AYarnCatsGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AYarnCatsGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AYarnCatsGameModeBase_Statics::ClassParams = {
		&AYarnCatsGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AYarnCatsGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AYarnCatsGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AYarnCatsGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AYarnCatsGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AYarnCatsGameModeBase, 509661281);
	template<> YARNCATS_API UClass* StaticClass<AYarnCatsGameModeBase>()
	{
		return AYarnCatsGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AYarnCatsGameModeBase(Z_Construct_UClass_AYarnCatsGameModeBase, &AYarnCatsGameModeBase::StaticClass, TEXT("/Script/YarnCats"), TEXT("AYarnCatsGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AYarnCatsGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
