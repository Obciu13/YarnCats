// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YarnCats/YarnBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYarnBase() {}
// Cross Module References
	YARNCATS_API UClass* Z_Construct_UClass_AYarnBase_NoRegister();
	YARNCATS_API UClass* Z_Construct_UClass_AYarnBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_YarnCats();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AYarnBase::StaticRegisterNativesAYarnBase()
	{
	}
	UClass* Z_Construct_UClass_AYarnBase_NoRegister()
	{
		return AYarnBase::StaticClass();
	}
	struct Z_Construct_UClass_AYarnBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AYarnBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_YarnCats,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AYarnBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "YarnBase.h" },
		{ "ModuleRelativePath", "YarnBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AYarnBase_Statics::NewProp_Mesh1_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Cat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "YarnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYarnBase_Statics::NewProp_Mesh1 = { "Mesh1", nullptr, (EPropertyFlags)0x00400000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AYarnBase, Mesh1), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AYarnBase_Statics::NewProp_Mesh1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AYarnBase_Statics::NewProp_Mesh1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AYarnBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYarnBase_Statics::NewProp_Mesh1,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AYarnBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AYarnBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AYarnBase_Statics::ClassParams = {
		&AYarnBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AYarnBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AYarnBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AYarnBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AYarnBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AYarnBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AYarnBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AYarnBase, 1174176062);
	template<> YARNCATS_API UClass* StaticClass<AYarnBase>()
	{
		return AYarnBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AYarnBase(Z_Construct_UClass_AYarnBase, &AYarnBase::StaticClass, TEXT("/Script/YarnCats"), TEXT("AYarnBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AYarnBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
