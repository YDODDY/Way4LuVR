// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestingVR/TestPlayer.h"
#include "InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestPlayer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	TESTINGVR_API UClass* Z_Construct_UClass_ATestPlayer();
	TESTINGVR_API UClass* Z_Construct_UClass_ATestPlayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TestingVR();
// End Cross Module References
	DEFINE_FUNCTION(ATestPlayer::execOnIAShooting)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnIAShooting(Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATestPlayer::execOnIAJump)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnIAJump(Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATestPlayer::execOnIAMove)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnIAMove(Z_Param_Out_value);
		P_NATIVE_END;
	}
	void ATestPlayer::StaticRegisterNativesATestPlayer()
	{
		UClass* Class = ATestPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnIAJump", &ATestPlayer::execOnIAJump },
			{ "OnIAMove", &ATestPlayer::execOnIAMove },
			{ "OnIAShooting", &ATestPlayer::execOnIAShooting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATestPlayer_OnIAJump_Statics
	{
		struct TestPlayer_eventOnIAJump_Parms
		{
			FInputActionValue value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestPlayer_OnIAJump_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATestPlayer_OnIAJump_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestPlayer_eventOnIAJump_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnIAJump_Statics::NewProp_value_MetaData), Z_Construct_UFunction_ATestPlayer_OnIAJump_Statics::NewProp_value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestPlayer_OnIAJump_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestPlayer_OnIAJump_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestPlayer_OnIAJump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestPlayer_OnIAJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestPlayer, nullptr, "OnIAJump", nullptr, nullptr, Z_Construct_UFunction_ATestPlayer_OnIAJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnIAJump_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATestPlayer_OnIAJump_Statics::TestPlayer_eventOnIAJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnIAJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestPlayer_OnIAJump_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnIAJump_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATestPlayer_OnIAJump_Statics::TestPlayer_eventOnIAJump_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATestPlayer_OnIAJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestPlayer_OnIAJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATestPlayer_OnIAMove_Statics
	{
		struct TestPlayer_eventOnIAMove_Parms
		{
			FInputActionValue value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestPlayer_OnIAMove_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATestPlayer_OnIAMove_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestPlayer_eventOnIAMove_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnIAMove_Statics::NewProp_value_MetaData), Z_Construct_UFunction_ATestPlayer_OnIAMove_Statics::NewProp_value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestPlayer_OnIAMove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestPlayer_OnIAMove_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestPlayer_OnIAMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestPlayer_OnIAMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestPlayer, nullptr, "OnIAMove", nullptr, nullptr, Z_Construct_UFunction_ATestPlayer_OnIAMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnIAMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATestPlayer_OnIAMove_Statics::TestPlayer_eventOnIAMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnIAMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestPlayer_OnIAMove_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnIAMove_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATestPlayer_OnIAMove_Statics::TestPlayer_eventOnIAMove_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATestPlayer_OnIAMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestPlayer_OnIAMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATestPlayer_OnIAShooting_Statics
	{
		struct TestPlayer_eventOnIAShooting_Parms
		{
			FInputActionValue value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestPlayer_OnIAShooting_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATestPlayer_OnIAShooting_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestPlayer_eventOnIAShooting_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnIAShooting_Statics::NewProp_value_MetaData), Z_Construct_UFunction_ATestPlayer_OnIAShooting_Statics::NewProp_value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestPlayer_OnIAShooting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestPlayer_OnIAShooting_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestPlayer_OnIAShooting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestPlayer_OnIAShooting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestPlayer, nullptr, "OnIAShooting", nullptr, nullptr, Z_Construct_UFunction_ATestPlayer_OnIAShooting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnIAShooting_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATestPlayer_OnIAShooting_Statics::TestPlayer_eventOnIAShooting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnIAShooting_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestPlayer_OnIAShooting_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnIAShooting_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATestPlayer_OnIAShooting_Statics::TestPlayer_eventOnIAShooting_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATestPlayer_OnIAShooting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestPlayer_OnIAShooting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestPlayer);
	UClass* Z_Construct_UClass_ATestPlayer_NoRegister()
	{
		return ATestPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ATestPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VRcamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VRcamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftMotion_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_leftMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightMotion_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_rightMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftHand_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_leftHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightHand_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_rightHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_imc_VRPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_imc_VRPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ia_move_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ia_move;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ia_jump_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ia_jump;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ia_shooting_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ia_shooting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TestingVR,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATestPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATestPlayer_OnIAJump, "OnIAJump" }, // 732326605
		{ &Z_Construct_UFunction_ATestPlayer_OnIAMove, "OnIAMove" }, // 713460032
		{ &Z_Construct_UFunction_ATestPlayer_OnIAShooting, "OnIAShooting" }, // 3611275618
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TestPlayer.h" },
		{ "ModuleRelativePath", "TestPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_VRcamera_MetaData[] = {
		{ "Category", "TestPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_VRcamera = { "VRcamera", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, VRcamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_VRcamera_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_VRcamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_leftMotion_MetaData[] = {
		{ "Category", "TestPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_leftMotion = { "leftMotion", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, leftMotion), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_leftMotion_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_leftMotion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_rightMotion_MetaData[] = {
		{ "Category", "TestPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_rightMotion = { "rightMotion", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, rightMotion), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_rightMotion_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_rightMotion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_leftHand_MetaData[] = {
		{ "Category", "TestPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_leftHand = { "leftHand", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, leftHand), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_leftHand_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_leftHand_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_rightHand_MetaData[] = {
		{ "Category", "TestPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_rightHand = { "rightHand", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, rightHand), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_rightHand_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_rightHand_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_imc_VRPlayer_MetaData[] = {
		{ "Category", "VR" },
		{ "ModuleRelativePath", "TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_imc_VRPlayer = { "imc_VRPlayer", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, imc_VRPlayer), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_imc_VRPlayer_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_imc_VRPlayer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_move_MetaData[] = {
		{ "Category", "VR" },
		{ "ModuleRelativePath", "TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_move = { "ia_move", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, ia_move), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_move_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_move_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_jump_MetaData[] = {
		{ "Category", "VR" },
		{ "ModuleRelativePath", "TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_jump = { "ia_jump", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, ia_jump), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_jump_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_jump_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_shooting_MetaData[] = {
		{ "Category", "VR" },
		{ "ModuleRelativePath", "TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_shooting = { "ia_shooting", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, ia_shooting), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_shooting_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_shooting_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_VRcamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_leftMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_rightMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_leftHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_rightHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_imc_VRPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_move,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_jump,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_shooting,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestPlayer_Statics::ClassParams = {
		&ATestPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATestPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestPlayer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATestPlayer()
	{
		if (!Z_Registration_Info_UClass_ATestPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestPlayer.OuterSingleton, Z_Construct_UClass_ATestPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestPlayer.OuterSingleton;
	}
	template<> TESTINGVR_API UClass* StaticClass<ATestPlayer>()
	{
		return ATestPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestPlayer);
	ATestPlayer::~ATestPlayer() {}
	struct Z_CompiledInDeferFile_FID_Users_admin_Desktop_TestingVR_Source_TestingVR_TestPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Desktop_TestingVR_Source_TestingVR_TestPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestPlayer, ATestPlayer::StaticClass, TEXT("ATestPlayer"), &Z_Registration_Info_UClass_ATestPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestPlayer), 854829128U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Desktop_TestingVR_Source_TestingVR_TestPlayer_h_1752760563(TEXT("/Script/TestingVR"),
		Z_CompiledInDeferFile_FID_Users_admin_Desktop_TestingVR_Source_TestingVR_TestPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_admin_Desktop_TestingVR_Source_TestingVR_TestPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
