// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TestPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FInputActionValue;
#ifdef TESTINGVR_TestPlayer_generated_h
#error "TestPlayer.generated.h already included, missing '#pragma once' in TestPlayer.h"
#endif
#define TESTINGVR_TestPlayer_generated_h

#define FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_TestPlayer_h_11_SPARSE_DATA
#define FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_TestPlayer_h_11_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_TestPlayer_h_11_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_TestPlayer_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execShowCrossHairL); \
	DECLARE_FUNCTION(execShowCrossHairR); \
	DECLARE_FUNCTION(execOnDamaged); \
	DECLARE_FUNCTION(execOnAttack); \
	DECLARE_FUNCTION(execOnBoost); \
	DECLARE_FUNCTION(execStopLeftShooting); \
	DECLARE_FUNCTION(execStopRightShooting); \
	DECLARE_FUNCTION(execOnLeftShooting); \
	DECLARE_FUNCTION(execOnRightShooting); \
	DECLARE_FUNCTION(execOnIATurnUpDown); \
	DECLARE_FUNCTION(execOnIATurn); \
	DECLARE_FUNCTION(execOnIAJump); \
	DECLARE_FUNCTION(execOnIAMove);


#define FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_TestPlayer_h_11_ACCESSORS
#define FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_TestPlayer_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestPlayer(); \
	friend struct Z_Construct_UClass_ATestPlayer_Statics; \
public: \
	DECLARE_CLASS(ATestPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestingVR"), NO_API) \
	DECLARE_SERIALIZER(ATestPlayer)


#define FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_TestPlayer_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestPlayer(ATestPlayer&&); \
	NO_API ATestPlayer(const ATestPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestPlayer) \
	NO_API virtual ~ATestPlayer();


#define FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_TestPlayer_h_8_PROLOG
#define FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_TestPlayer_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_TestPlayer_h_11_SPARSE_DATA \
	FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_TestPlayer_h_11_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_TestPlayer_h_11_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_TestPlayer_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_TestPlayer_h_11_ACCESSORS \
	FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_TestPlayer_h_11_INCLASS_NO_PURE_DECLS \
	FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_TestPlayer_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTINGVR_API UClass* StaticClass<class ATestPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_TestPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
