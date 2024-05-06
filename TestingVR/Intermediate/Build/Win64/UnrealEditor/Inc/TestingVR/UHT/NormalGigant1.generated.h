// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NormalGigant1.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TESTINGVR_NormalGigant1_generated_h
#error "NormalGigant1.generated.h already included, missing '#pragma once' in NormalGigant1.h"
#endif
#define TESTINGVR_NormalGigant1_generated_h

#define FID_Users_USER_Desktop_Way4LuVR_TestingVR_Source_TestingVR_Public_NormalGigant1_h_23_SPARSE_DATA
#define FID_Users_USER_Desktop_Way4LuVR_TestingVR_Source_TestingVR_Public_NormalGigant1_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_USER_Desktop_Way4LuVR_TestingVR_Source_TestingVR_Public_NormalGigant1_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_USER_Desktop_Way4LuVR_TestingVR_Source_TestingVR_Public_NormalGigant1_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEndOverlapRightLeg); \
	DECLARE_FUNCTION(execOnBeginOverlapRightLeg); \
	DECLARE_FUNCTION(execOnEndOverlapLeftLeg); \
	DECLARE_FUNCTION(execOnBeginOverlapLeftLeg); \
	DECLARE_FUNCTION(execOnEndOverlapRightArm); \
	DECLARE_FUNCTION(execOnBeginOverlapRightArm); \
	DECLARE_FUNCTION(execOnEndOverlapLeftArm); \
	DECLARE_FUNCTION(execOnBeginOverlapLeftArm); \
	DECLARE_FUNCTION(execOnEndOverlapBody); \
	DECLARE_FUNCTION(execOnBeginOverlapBody); \
	DECLARE_FUNCTION(execOnEndOverlapNeck); \
	DECLARE_FUNCTION(execOnBeginOverlapNeck);


#define FID_Users_USER_Desktop_Way4LuVR_TestingVR_Source_TestingVR_Public_NormalGigant1_h_23_ACCESSORS
#define FID_Users_USER_Desktop_Way4LuVR_TestingVR_Source_TestingVR_Public_NormalGigant1_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANormalGigant1(); \
	friend struct Z_Construct_UClass_ANormalGigant1_Statics; \
public: \
	DECLARE_CLASS(ANormalGigant1, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestingVR"), NO_API) \
	DECLARE_SERIALIZER(ANormalGigant1)


#define FID_Users_USER_Desktop_Way4LuVR_TestingVR_Source_TestingVR_Public_NormalGigant1_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANormalGigant1(ANormalGigant1&&); \
	NO_API ANormalGigant1(const ANormalGigant1&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANormalGigant1); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANormalGigant1); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANormalGigant1) \
	NO_API virtual ~ANormalGigant1();


#define FID_Users_USER_Desktop_Way4LuVR_TestingVR_Source_TestingVR_Public_NormalGigant1_h_20_PROLOG
#define FID_Users_USER_Desktop_Way4LuVR_TestingVR_Source_TestingVR_Public_NormalGigant1_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_USER_Desktop_Way4LuVR_TestingVR_Source_TestingVR_Public_NormalGigant1_h_23_SPARSE_DATA \
	FID_Users_USER_Desktop_Way4LuVR_TestingVR_Source_TestingVR_Public_NormalGigant1_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_USER_Desktop_Way4LuVR_TestingVR_Source_TestingVR_Public_NormalGigant1_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_USER_Desktop_Way4LuVR_TestingVR_Source_TestingVR_Public_NormalGigant1_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_USER_Desktop_Way4LuVR_TestingVR_Source_TestingVR_Public_NormalGigant1_h_23_ACCESSORS \
	FID_Users_USER_Desktop_Way4LuVR_TestingVR_Source_TestingVR_Public_NormalGigant1_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_USER_Desktop_Way4LuVR_TestingVR_Source_TestingVR_Public_NormalGigant1_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTINGVR_API UClass* StaticClass<class ANormalGigant1>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_USER_Desktop_Way4LuVR_TestingVR_Source_TestingVR_Public_NormalGigant1_h


#define FOREACH_ENUM_ENORMALGIGAN1STATE(op) \
	op(ENormalGigan1State::IDLE) \
	op(ENormalGigan1State::PATROL) \
	op(ENormalGigan1State::MOVE) \
	op(ENormalGigan1State::ATTACK) \
	op(ENormalGigan1State::DAMAGED) \
	op(ENormalGigan1State::DIE) 

enum class ENormalGigan1State : uint8;
template<> struct TIsUEnumClass<ENormalGigan1State> { enum { Value = true }; };
template<> TESTINGVR_API UEnum* StaticEnum<ENormalGigan1State>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
