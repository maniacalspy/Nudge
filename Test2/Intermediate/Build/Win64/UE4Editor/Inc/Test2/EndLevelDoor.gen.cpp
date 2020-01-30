// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test2/EndLevelDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndLevelDoor() {}
// Cross Module References
	TEST2_API UClass* Z_Construct_UClass_AEndLevelDoor_NoRegister();
	TEST2_API UClass* Z_Construct_UClass_AEndLevelDoor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Test2();
	TEST2_API UFunction* Z_Construct_UFunction_AEndLevelDoor_OpenDoor();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AEndLevelDoor::StaticRegisterNativesAEndLevelDoor()
	{
		UClass* Class = AEndLevelDoor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OpenDoor", &AEndLevelDoor::execOpenDoor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEndLevelDoor_OpenDoor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEndLevelDoor_OpenDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EndLevelDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEndLevelDoor_OpenDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEndLevelDoor, nullptr, "OpenDoor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEndLevelDoor_OpenDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEndLevelDoor_OpenDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEndLevelDoor_OpenDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEndLevelDoor_OpenDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEndLevelDoor_NoRegister()
	{
		return AEndLevelDoor::StaticClass();
	}
	struct Z_Construct_UClass_AEndLevelDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pOpenSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pOpenSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorPanelSkeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorPanelSkeleton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorFrameSkeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorFrameSkeleton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEndLevelDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Test2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEndLevelDoor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEndLevelDoor_OpenDoor, "OpenDoor" }, // 64888331
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEndLevelDoor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EndLevelDoor.h" },
		{ "ModuleRelativePath", "EndLevelDoor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEndLevelDoor_Statics::NewProp_pOpenSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EndLevelDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEndLevelDoor_Statics::NewProp_pOpenSound = { "pOpenSound", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEndLevelDoor, pOpenSound), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEndLevelDoor_Statics::NewProp_pOpenSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEndLevelDoor_Statics::NewProp_pOpenSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEndLevelDoor_Statics::NewProp_DoorPanelSkeleton_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EndLevelDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEndLevelDoor_Statics::NewProp_DoorPanelSkeleton = { "DoorPanelSkeleton", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEndLevelDoor, DoorPanelSkeleton), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEndLevelDoor_Statics::NewProp_DoorPanelSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEndLevelDoor_Statics::NewProp_DoorPanelSkeleton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEndLevelDoor_Statics::NewProp_DoorFrameSkeleton_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EndLevelDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEndLevelDoor_Statics::NewProp_DoorFrameSkeleton = { "DoorFrameSkeleton", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEndLevelDoor, DoorFrameSkeleton), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEndLevelDoor_Statics::NewProp_DoorFrameSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEndLevelDoor_Statics::NewProp_DoorFrameSkeleton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEndLevelDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEndLevelDoor_Statics::NewProp_pOpenSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEndLevelDoor_Statics::NewProp_DoorPanelSkeleton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEndLevelDoor_Statics::NewProp_DoorFrameSkeleton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEndLevelDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEndLevelDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEndLevelDoor_Statics::ClassParams = {
		&AEndLevelDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEndLevelDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEndLevelDoor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEndLevelDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEndLevelDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEndLevelDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEndLevelDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEndLevelDoor, 2796989739);
	template<> TEST2_API UClass* StaticClass<AEndLevelDoor>()
	{
		return AEndLevelDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEndLevelDoor(Z_Construct_UClass_AEndLevelDoor, &AEndLevelDoor::StaticClass, TEXT("/Script/Test2"), TEXT("AEndLevelDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEndLevelDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
