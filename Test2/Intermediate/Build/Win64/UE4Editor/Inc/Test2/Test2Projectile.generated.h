// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TEST2_Test2Projectile_generated_h
#error "Test2Projectile.generated.h already included, missing '#pragma once' in Test2Projectile.h"
#endif
#define TEST2_Test2Projectile_generated_h

#define Test2_Source_Test2_Test2Projectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Test2_Source_Test2_Test2Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Test2_Source_Test2_Test2Projectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATest2Projectile(); \
	friend TEST2_API class UClass* Z_Construct_UClass_ATest2Projectile(); \
public: \
	DECLARE_CLASS(ATest2Projectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(ATest2Projectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Test2_Source_Test2_Test2Projectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATest2Projectile(); \
	friend TEST2_API class UClass* Z_Construct_UClass_ATest2Projectile(); \
public: \
	DECLARE_CLASS(ATest2Projectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Test2"), NO_API) \
	DECLARE_SERIALIZER(ATest2Projectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Test2_Source_Test2_Test2Projectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATest2Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATest2Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATest2Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATest2Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATest2Projectile(ATest2Projectile&&); \
	NO_API ATest2Projectile(const ATest2Projectile&); \
public:


#define Test2_Source_Test2_Test2Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATest2Projectile(ATest2Projectile&&); \
	NO_API ATest2Projectile(const ATest2Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATest2Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATest2Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATest2Projectile)


#define Test2_Source_Test2_Test2Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ATest2Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ATest2Projectile, ProjectileMovement); }


#define Test2_Source_Test2_Test2Projectile_h_9_PROLOG
#define Test2_Source_Test2_Test2Projectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_Test2Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_Test2Projectile_h_12_RPC_WRAPPERS \
	Test2_Source_Test2_Test2Projectile_h_12_INCLASS \
	Test2_Source_Test2_Test2Projectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test2_Source_Test2_Test2Projectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test2_Source_Test2_Test2Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Test2_Source_Test2_Test2Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Test2_Source_Test2_Test2Projectile_h_12_INCLASS_NO_PURE_DECLS \
	Test2_Source_Test2_Test2Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test2_Source_Test2_Test2Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
