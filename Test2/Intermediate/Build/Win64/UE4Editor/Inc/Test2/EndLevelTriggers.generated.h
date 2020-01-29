// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST2_EndLevelTriggers_generated_h
#error "EndLevelTriggers.generated.h already included, missing '#pragma once' in EndLevelTriggers.h"
#endif
#define TEST2_EndLevelTriggers_generated_h

#define Test2_Source_Test2_EndLevelTriggers_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayNextSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayNextSound(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugPing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DebugPing(); \
		P_NATIVE_END; \
	}


#define Test2_Source_Test2_EndLevelTriggers_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayNextSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayNextSound(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugPing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DebugPing(); \
		P_NATIVE_END; \
	}


#define Test2_Source_Test2_EndLevelTriggers_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEndLevelTriggers(); \
	friend TEST2_API class UClass* Z_Construct_UClass_AEndLevelTriggers(); \
public: \
	DECLARE_CLASS(AEndLevelTriggers, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(AEndLevelTriggers) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Test2_Source_Test2_EndLevelTriggers_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAEndLevelTriggers(); \
	friend TEST2_API class UClass* Z_Construct_UClass_AEndLevelTriggers(); \
public: \
	DECLARE_CLASS(AEndLevelTriggers, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(AEndLevelTriggers) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Test2_Source_Test2_EndLevelTriggers_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEndLevelTriggers(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEndLevelTriggers) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEndLevelTriggers); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEndLevelTriggers); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEndLevelTriggers(AEndLevelTriggers&&); \
	NO_API AEndLevelTriggers(const AEndLevelTriggers&); \
public:


#define Test2_Source_Test2_EndLevelTriggers_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEndLevelTriggers(AEndLevelTriggers&&); \
	NO_API AEndLevelTriggers(const AEndLevelTriggers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEndLevelTriggers); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEndLevelTriggers); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEndLevelTriggers)


#define Test2_Source_Test2_EndLevelTriggers_h_16_PRIVATE_PROPERTY_OFFSET
#define Test2_Source_Test2_EndLevelTriggers_h_13_PROLOG
#define Test2_Source_Test2_EndLevelTriggers_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_EndLevelTriggers_h_16_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_EndLevelTriggers_h_16_RPC_WRAPPERS \
	Test2_Source_Test2_EndLevelTriggers_h_16_INCLASS \
	Test2_Source_Test2_EndLevelTriggers_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test2_Source_Test2_EndLevelTriggers_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_EndLevelTriggers_h_16_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_EndLevelTriggers_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Test2_Source_Test2_EndLevelTriggers_h_16_INCLASS_NO_PURE_DECLS \
	Test2_Source_Test2_EndLevelTriggers_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test2_Source_Test2_EndLevelTriggers_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
