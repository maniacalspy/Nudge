// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test2/PauseHudWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePauseHudWidget() {}
// Cross Module References
	TEST2_API UClass* Z_Construct_UClass_UPauseHudWidget_NoRegister();
	TEST2_API UClass* Z_Construct_UClass_UPauseHudWidget();
	TEST2_API UClass* Z_Construct_UClass_UHUDWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Test2();
	TEST2_API UFunction* Z_Construct_UFunction_UPauseHudWidget_EnableMap();
// End Cross Module References
	static FName NAME_UPauseHudWidget_EnableMap = FName(TEXT("EnableMap"));
	void UPauseHudWidget::EnableMap()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPauseHudWidget_EnableMap),NULL);
	}
	void UPauseHudWidget::StaticRegisterNativesUPauseHudWidget()
	{
	}
	struct Z_Construct_UFunction_UPauseHudWidget_EnableMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPauseHudWidget_EnableMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Map" },
		{ "Comment", "//UFUNCTION(BlueprintCallable)\n//\x09void CloseMenu();\n" },
		{ "ModuleRelativePath", "PauseHudWidget.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable)\n       void CloseMenu();" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseHudWidget_EnableMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseHudWidget, nullptr, "EnableMap", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPauseHudWidget_EnableMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseHudWidget_EnableMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPauseHudWidget_EnableMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPauseHudWidget_EnableMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPauseHudWidget_NoRegister()
	{
		return UPauseHudWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPauseHudWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPauseHudWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHUDWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Test2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPauseHudWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPauseHudWidget_EnableMap, "EnableMap" }, // 425708375
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPauseHudWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PauseHudWidget.h" },
		{ "ModuleRelativePath", "PauseHudWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPauseHudWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPauseHudWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPauseHudWidget_Statics::ClassParams = {
		&UPauseHudWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPauseHudWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPauseHudWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPauseHudWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPauseHudWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPauseHudWidget, 344228424);
	template<> TEST2_API UClass* StaticClass<UPauseHudWidget>()
	{
		return UPauseHudWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPauseHudWidget(Z_Construct_UClass_UPauseHudWidget, &UPauseHudWidget::StaticClass, TEXT("/Script/Test2"), TEXT("UPauseHudWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPauseHudWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
