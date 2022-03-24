// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YarnCats/CatBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCatBase() {}
// Cross Module References
	YARNCATS_API UClass* Z_Construct_UClass_ACatBase_NoRegister();
	YARNCATS_API UClass* Z_Construct_UClass_ACatBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_YarnCats();
	YARNCATS_API UClass* Z_Construct_UClass_AYarnBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	DEFINE_FUNCTION(ACatBase::execStartPushLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartPushLeft_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACatBase::execStartPushRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartPushRight_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACatBase::execStartPushForward)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartPushForward_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACatBase::execReleaseSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseSelected_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ACatBase_Push = FName(TEXT("Push"));
	void ACatBase::Push()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACatBase_Push),NULL);
	}
	static FName NAME_ACatBase_ReleaseSelected = FName(TEXT("ReleaseSelected"));
	void ACatBase::ReleaseSelected()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACatBase_ReleaseSelected),NULL);
	}
	static FName NAME_ACatBase_StartPushForward = FName(TEXT("StartPushForward"));
	void ACatBase::StartPushForward()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACatBase_StartPushForward),NULL);
	}
	static FName NAME_ACatBase_StartPushLeft = FName(TEXT("StartPushLeft"));
	void ACatBase::StartPushLeft()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACatBase_StartPushLeft),NULL);
	}
	static FName NAME_ACatBase_StartPushRight = FName(TEXT("StartPushRight"));
	void ACatBase::StartPushRight()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACatBase_StartPushRight),NULL);
	}
	void ACatBase::StaticRegisterNativesACatBase()
	{
		UClass* Class = ACatBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReleaseSelected", &ACatBase::execReleaseSelected },
			{ "StartPushForward", &ACatBase::execStartPushForward },
			{ "StartPushLeft", &ACatBase::execStartPushLeft },
			{ "StartPushRight", &ACatBase::execStartPushRight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACatBase_Push_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACatBase_Push_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CatBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACatBase_Push_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACatBase, nullptr, "Push", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACatBase_Push_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACatBase_Push_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACatBase_Push()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACatBase_Push_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACatBase_ReleaseSelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACatBase_ReleaseSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CatBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACatBase_ReleaseSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACatBase, nullptr, "ReleaseSelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACatBase_ReleaseSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACatBase_ReleaseSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACatBase_ReleaseSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACatBase_ReleaseSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACatBase_StartPushForward_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACatBase_StartPushForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CatBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACatBase_StartPushForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACatBase, nullptr, "StartPushForward", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACatBase_StartPushForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACatBase_StartPushForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACatBase_StartPushForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACatBase_StartPushForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACatBase_StartPushLeft_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACatBase_StartPushLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CatBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACatBase_StartPushLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACatBase, nullptr, "StartPushLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACatBase_StartPushLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACatBase_StartPushLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACatBase_StartPushLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACatBase_StartPushLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACatBase_StartPushRight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACatBase_StartPushRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CatBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACatBase_StartPushRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACatBase, nullptr, "StartPushRight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACatBase_StartPushRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACatBase_StartPushRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACatBase_StartPushRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACatBase_StartPushRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACatBase_NoRegister()
	{
		return ACatBase::StaticClass();
	}
	struct Z_Construct_UClass_ACatBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookAtRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookAtRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSprintSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSprintSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsJumping_MetaData[];
#endif
		static void NewProp_IsJumping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsJumping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPushing_MetaData[];
#endif
		static void NewProp_IsPushing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPushing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PushDirectionMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PushDirectionMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedYarn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedYarn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PushForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PushForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPushForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPushForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingForce_MetaData[];
#endif
		static void NewProp_LoadingForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LoadingForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForceHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACatBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_YarnCats,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACatBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACatBase_Push, "Push" }, // 2238530592
		{ &Z_Construct_UFunction_ACatBase_ReleaseSelected, "ReleaseSelected" }, // 3969132208
		{ &Z_Construct_UFunction_ACatBase_StartPushForward, "StartPushForward" }, // 3431194327
		{ &Z_Construct_UFunction_ACatBase_StartPushLeft, "StartPushLeft" }, // 628328131
		{ &Z_Construct_UFunction_ACatBase_StartPushRight, "StartPushRight" }, // 658473681
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACatBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CatBase.h" },
		{ "ModuleRelativePath", "CatBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACatBase_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Cat" },
		{ "ModuleRelativePath", "CatBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACatBase_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACatBase, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ACatBase_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACatBase_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACatBase_Statics::NewProp_BaseLookAtRate_MetaData[] = {
		{ "Category", "Cat" },
		{ "ModuleRelativePath", "CatBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACatBase_Statics::NewProp_BaseLookAtRate = { "BaseLookAtRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACatBase, BaseLookAtRate), METADATA_PARAMS(Z_Construct_UClass_ACatBase_Statics::NewProp_BaseLookAtRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACatBase_Statics::NewProp_BaseLookAtRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACatBase_Statics::NewProp_MaxSprintSpeed_MetaData[] = {
		{ "Category", "Cat" },
		{ "ModuleRelativePath", "CatBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACatBase_Statics::NewProp_MaxSprintSpeed = { "MaxSprintSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACatBase, MaxSprintSpeed), METADATA_PARAMS(Z_Construct_UClass_ACatBase_Statics::NewProp_MaxSprintSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACatBase_Statics::NewProp_MaxSprintSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACatBase_Statics::NewProp_IsJumping_MetaData[] = {
		{ "Category", "Cat" },
		{ "ModuleRelativePath", "CatBase.h" },
	};
#endif
	void Z_Construct_UClass_ACatBase_Statics::NewProp_IsJumping_SetBit(void* Obj)
	{
		((ACatBase*)Obj)->IsJumping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACatBase_Statics::NewProp_IsJumping = { "IsJumping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACatBase), &Z_Construct_UClass_ACatBase_Statics::NewProp_IsJumping_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACatBase_Statics::NewProp_IsJumping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACatBase_Statics::NewProp_IsJumping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACatBase_Statics::NewProp_IsPushing_MetaData[] = {
		{ "Category", "Cat" },
		{ "ModuleRelativePath", "CatBase.h" },
	};
#endif
	void Z_Construct_UClass_ACatBase_Statics::NewProp_IsPushing_SetBit(void* Obj)
	{
		((ACatBase*)Obj)->IsPushing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACatBase_Statics::NewProp_IsPushing = { "IsPushing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACatBase), &Z_Construct_UClass_ACatBase_Statics::NewProp_IsPushing_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACatBase_Statics::NewProp_IsPushing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACatBase_Statics::NewProp_IsPushing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACatBase_Statics::NewProp_PushDirectionMode_MetaData[] = {
		{ "Category", "Cat" },
		{ "ModuleRelativePath", "CatBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACatBase_Statics::NewProp_PushDirectionMode = { "PushDirectionMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACatBase, PushDirectionMode), METADATA_PARAMS(Z_Construct_UClass_ACatBase_Statics::NewProp_PushDirectionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACatBase_Statics::NewProp_PushDirectionMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACatBase_Statics::NewProp_SelectedYarn_MetaData[] = {
		{ "Category", "Yarn" },
		{ "ModuleRelativePath", "CatBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACatBase_Statics::NewProp_SelectedYarn = { "SelectedYarn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACatBase, SelectedYarn), Z_Construct_UClass_AYarnBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACatBase_Statics::NewProp_SelectedYarn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACatBase_Statics::NewProp_SelectedYarn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACatBase_Statics::NewProp_PushForce_MetaData[] = {
		{ "Category", "Cats" },
		{ "ModuleRelativePath", "CatBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACatBase_Statics::NewProp_PushForce = { "PushForce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACatBase, PushForce), METADATA_PARAMS(Z_Construct_UClass_ACatBase_Statics::NewProp_PushForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACatBase_Statics::NewProp_PushForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACatBase_Statics::NewProp_MaxPushForce_MetaData[] = {
		{ "Category", "Cats" },
		{ "ModuleRelativePath", "CatBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACatBase_Statics::NewProp_MaxPushForce = { "MaxPushForce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACatBase, MaxPushForce), METADATA_PARAMS(Z_Construct_UClass_ACatBase_Statics::NewProp_MaxPushForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACatBase_Statics::NewProp_MaxPushForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACatBase_Statics::NewProp_LoadingForce_MetaData[] = {
		{ "Category", "Cats" },
		{ "ModuleRelativePath", "CatBase.h" },
	};
#endif
	void Z_Construct_UClass_ACatBase_Statics::NewProp_LoadingForce_SetBit(void* Obj)
	{
		((ACatBase*)Obj)->LoadingForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACatBase_Statics::NewProp_LoadingForce = { "LoadingForce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACatBase), &Z_Construct_UClass_ACatBase_Statics::NewProp_LoadingForce_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACatBase_Statics::NewProp_LoadingForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACatBase_Statics::NewProp_LoadingForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACatBase_Statics::NewProp_ForceHandle_MetaData[] = {
		{ "Category", "Cats" },
		{ "ModuleRelativePath", "CatBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACatBase_Statics::NewProp_ForceHandle = { "ForceHandle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACatBase, ForceHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ACatBase_Statics::NewProp_ForceHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACatBase_Statics::NewProp_ForceHandle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACatBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACatBase_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACatBase_Statics::NewProp_BaseLookAtRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACatBase_Statics::NewProp_MaxSprintSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACatBase_Statics::NewProp_IsJumping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACatBase_Statics::NewProp_IsPushing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACatBase_Statics::NewProp_PushDirectionMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACatBase_Statics::NewProp_SelectedYarn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACatBase_Statics::NewProp_PushForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACatBase_Statics::NewProp_MaxPushForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACatBase_Statics::NewProp_LoadingForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACatBase_Statics::NewProp_ForceHandle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACatBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACatBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACatBase_Statics::ClassParams = {
		&ACatBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACatBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACatBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACatBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACatBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACatBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACatBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACatBase, 1988651016);
	template<> YARNCATS_API UClass* StaticClass<ACatBase>()
	{
		return ACatBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACatBase(Z_Construct_UClass_ACatBase, &ACatBase::StaticClass, TEXT("/Script/YarnCats"), TEXT("ACatBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACatBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
