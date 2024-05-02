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
	CABLECOMPONENT_API UClass* Z_Construct_UClass_UCableComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	TESTINGVR_API UClass* Z_Construct_UClass_ATestPlayer();
	TESTINGVR_API UClass* Z_Construct_UClass_ATestPlayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TestingVR();
// End Cross Module References
	DEFINE_FUNCTION(ATestPlayer::execOnBoost)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBoost(Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATestPlayer::execStopLeftShooting)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopLeftShooting(Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATestPlayer::execStopRightShooting)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopRightShooting(Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATestPlayer::execOnLeftShooting)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLeftShooting(Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATestPlayer::execOnRightShooting)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRightShooting(Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATestPlayer::execOnIATurnUpDown)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnIATurnUpDown(Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATestPlayer::execOnIATurn)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnIATurn(Z_Param_Out_value);
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
			{ "OnBoost", &ATestPlayer::execOnBoost },
			{ "OnIAJump", &ATestPlayer::execOnIAJump },
			{ "OnIAMove", &ATestPlayer::execOnIAMove },
			{ "OnIATurn", &ATestPlayer::execOnIATurn },
			{ "OnIATurnUpDown", &ATestPlayer::execOnIATurnUpDown },
			{ "OnLeftShooting", &ATestPlayer::execOnLeftShooting },
			{ "OnRightShooting", &ATestPlayer::execOnRightShooting },
			{ "StopLeftShooting", &ATestPlayer::execStopLeftShooting },
			{ "StopRightShooting", &ATestPlayer::execStopRightShooting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATestPlayer_OnBoost_Statics
	{
		struct TestPlayer_eventOnBoost_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestPlayer_OnBoost_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATestPlayer_OnBoost_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestPlayer_eventOnBoost_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnBoost_Statics::NewProp_value_MetaData), Z_Construct_UFunction_ATestPlayer_OnBoost_Statics::NewProp_value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestPlayer_OnBoost_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestPlayer_OnBoost_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestPlayer_OnBoost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestPlayer_OnBoost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestPlayer, nullptr, "OnBoost", nullptr, nullptr, Z_Construct_UFunction_ATestPlayer_OnBoost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnBoost_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATestPlayer_OnBoost_Statics::TestPlayer_eventOnBoost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnBoost_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestPlayer_OnBoost_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnBoost_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATestPlayer_OnBoost_Statics::TestPlayer_eventOnBoost_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATestPlayer_OnBoost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestPlayer_OnBoost_Statics::FuncParams);
		}
		return ReturnFunction;
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xc7\xb2\xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "TestPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc7\xb2\xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
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
	struct Z_Construct_UFunction_ATestPlayer_OnIATurn_Statics
	{
		struct TestPlayer_eventOnIATurn_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestPlayer_OnIATurn_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATestPlayer_OnIATurn_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestPlayer_eventOnIATurn_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnIATurn_Statics::NewProp_value_MetaData), Z_Construct_UFunction_ATestPlayer_OnIATurn_Statics::NewProp_value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestPlayer_OnIATurn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestPlayer_OnIATurn_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestPlayer_OnIATurn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestPlayer_OnIATurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestPlayer, nullptr, "OnIATurn", nullptr, nullptr, Z_Construct_UFunction_ATestPlayer_OnIATurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnIATurn_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATestPlayer_OnIATurn_Statics::TestPlayer_eventOnIATurn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnIATurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestPlayer_OnIATurn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnIATurn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATestPlayer_OnIATurn_Statics::TestPlayer_eventOnIATurn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATestPlayer_OnIATurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestPlayer_OnIATurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATestPlayer_OnIATurnUpDown_Statics
	{
		struct TestPlayer_eventOnIATurnUpDown_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestPlayer_OnIATurnUpDown_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATestPlayer_OnIATurnUpDown_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestPlayer_eventOnIATurnUpDown_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnIATurnUpDown_Statics::NewProp_value_MetaData), Z_Construct_UFunction_ATestPlayer_OnIATurnUpDown_Statics::NewProp_value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestPlayer_OnIATurnUpDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestPlayer_OnIATurnUpDown_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestPlayer_OnIATurnUpDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestPlayer_OnIATurnUpDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestPlayer, nullptr, "OnIATurnUpDown", nullptr, nullptr, Z_Construct_UFunction_ATestPlayer_OnIATurnUpDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnIATurnUpDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATestPlayer_OnIATurnUpDown_Statics::TestPlayer_eventOnIATurnUpDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnIATurnUpDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestPlayer_OnIATurnUpDown_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnIATurnUpDown_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATestPlayer_OnIATurnUpDown_Statics::TestPlayer_eventOnIATurnUpDown_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATestPlayer_OnIATurnUpDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestPlayer_OnIATurnUpDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATestPlayer_OnLeftShooting_Statics
	{
		struct TestPlayer_eventOnLeftShooting_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestPlayer_OnLeftShooting_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATestPlayer_OnLeftShooting_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestPlayer_eventOnLeftShooting_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnLeftShooting_Statics::NewProp_value_MetaData), Z_Construct_UFunction_ATestPlayer_OnLeftShooting_Statics::NewProp_value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestPlayer_OnLeftShooting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestPlayer_OnLeftShooting_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestPlayer_OnLeftShooting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestPlayer_OnLeftShooting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestPlayer, nullptr, "OnLeftShooting", nullptr, nullptr, Z_Construct_UFunction_ATestPlayer_OnLeftShooting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnLeftShooting_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATestPlayer_OnLeftShooting_Statics::TestPlayer_eventOnLeftShooting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnLeftShooting_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestPlayer_OnLeftShooting_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnLeftShooting_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATestPlayer_OnLeftShooting_Statics::TestPlayer_eventOnLeftShooting_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATestPlayer_OnLeftShooting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestPlayer_OnLeftShooting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATestPlayer_OnRightShooting_Statics
	{
		struct TestPlayer_eventOnRightShooting_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestPlayer_OnRightShooting_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATestPlayer_OnRightShooting_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestPlayer_eventOnRightShooting_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnRightShooting_Statics::NewProp_value_MetaData), Z_Construct_UFunction_ATestPlayer_OnRightShooting_Statics::NewProp_value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestPlayer_OnRightShooting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestPlayer_OnRightShooting_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestPlayer_OnRightShooting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestPlayer_OnRightShooting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestPlayer, nullptr, "OnRightShooting", nullptr, nullptr, Z_Construct_UFunction_ATestPlayer_OnRightShooting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnRightShooting_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATestPlayer_OnRightShooting_Statics::TestPlayer_eventOnRightShooting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnRightShooting_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestPlayer_OnRightShooting_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnRightShooting_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATestPlayer_OnRightShooting_Statics::TestPlayer_eventOnRightShooting_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATestPlayer_OnRightShooting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestPlayer_OnRightShooting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATestPlayer_StopLeftShooting_Statics
	{
		struct TestPlayer_eventStopLeftShooting_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestPlayer_StopLeftShooting_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATestPlayer_StopLeftShooting_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestPlayer_eventStopLeftShooting_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_StopLeftShooting_Statics::NewProp_value_MetaData), Z_Construct_UFunction_ATestPlayer_StopLeftShooting_Statics::NewProp_value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestPlayer_StopLeftShooting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestPlayer_StopLeftShooting_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestPlayer_StopLeftShooting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestPlayer_StopLeftShooting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestPlayer, nullptr, "StopLeftShooting", nullptr, nullptr, Z_Construct_UFunction_ATestPlayer_StopLeftShooting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_StopLeftShooting_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATestPlayer_StopLeftShooting_Statics::TestPlayer_eventStopLeftShooting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_StopLeftShooting_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestPlayer_StopLeftShooting_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_StopLeftShooting_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATestPlayer_StopLeftShooting_Statics::TestPlayer_eventStopLeftShooting_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATestPlayer_StopLeftShooting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestPlayer_StopLeftShooting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATestPlayer_StopRightShooting_Statics
	{
		struct TestPlayer_eventStopRightShooting_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestPlayer_StopRightShooting_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATestPlayer_StopRightShooting_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestPlayer_eventStopRightShooting_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_StopRightShooting_Statics::NewProp_value_MetaData), Z_Construct_UFunction_ATestPlayer_StopRightShooting_Statics::NewProp_value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestPlayer_StopRightShooting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestPlayer_StopRightShooting_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestPlayer_StopRightShooting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestPlayer_StopRightShooting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestPlayer, nullptr, "StopRightShooting", nullptr, nullptr, Z_Construct_UFunction_ATestPlayer_StopRightShooting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_StopRightShooting_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATestPlayer_StopRightShooting_Statics::TestPlayer_eventStopRightShooting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_StopRightShooting_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestPlayer_StopRightShooting_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_StopRightShooting_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATestPlayer_StopRightShooting_Statics::TestPlayer_eventStopRightShooting_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATestPlayer_StopRightShooting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestPlayer_StopRightShooting_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RcableComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RcableComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LcableComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LcableComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_imc_VRPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_imc_VRPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ia_move_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ia_move;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ia_turnLR_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ia_turnLR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ia_turnUD_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ia_turnUD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ia_jump_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ia_jump;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ia_Rshot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ia_Rshot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ia_Lshot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ia_Lshot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ia_boost_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ia_boost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boostComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_boostComp;
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
		{ &Z_Construct_UFunction_ATestPlayer_OnBoost, "OnBoost" }, // 3308999523
		{ &Z_Construct_UFunction_ATestPlayer_OnIAJump, "OnIAJump" }, // 732326605
		{ &Z_Construct_UFunction_ATestPlayer_OnIAMove, "OnIAMove" }, // 2671404153
		{ &Z_Construct_UFunction_ATestPlayer_OnIATurn, "OnIATurn" }, // 2067538803
		{ &Z_Construct_UFunction_ATestPlayer_OnIATurnUpDown, "OnIATurnUpDown" }, // 2424206905
		{ &Z_Construct_UFunction_ATestPlayer_OnLeftShooting, "OnLeftShooting" }, // 1521864508
		{ &Z_Construct_UFunction_ATestPlayer_OnRightShooting, "OnRightShooting" }, // 3535832395
		{ &Z_Construct_UFunction_ATestPlayer_StopLeftShooting, "StopLeftShooting" }, // 2241838669
		{ &Z_Construct_UFunction_ATestPlayer_StopRightShooting, "StopRightShooting" }, // 3519944959
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TestPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae" },
#endif
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_RcableComp_MetaData[] = {
		{ "Category", "TestPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_RcableComp = { "RcableComp", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, RcableComp), Z_Construct_UClass_UCableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_RcableComp_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_RcableComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_LcableComp_MetaData[] = {
		{ "Category", "TestPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_LcableComp = { "LcableComp", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, LcableComp), Z_Construct_UClass_UCableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_LcableComp_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_LcableComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_imc_VRPlayer_MetaData[] = {
		{ "Category", "VR|Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xc7\xb2\n" },
#endif
		{ "ModuleRelativePath", "TestPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc7\xb2" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_imc_VRPlayer = { "imc_VRPlayer", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, imc_VRPlayer), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_imc_VRPlayer_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_imc_VRPlayer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_move_MetaData[] = {
		{ "Category", "VR|Inputs" },
		{ "ModuleRelativePath", "TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_move = { "ia_move", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, ia_move), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_move_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_move_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_turnLR_MetaData[] = {
		{ "Category", "VR|Inputs" },
		{ "ModuleRelativePath", "TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_turnLR = { "ia_turnLR", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, ia_turnLR), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_turnLR_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_turnLR_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_turnUD_MetaData[] = {
		{ "Category", "VR|Inputs" },
		{ "ModuleRelativePath", "TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_turnUD = { "ia_turnUD", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, ia_turnUD), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_turnUD_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_turnUD_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_jump_MetaData[] = {
		{ "Category", "VR|Inputs" },
		{ "ModuleRelativePath", "TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_jump = { "ia_jump", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, ia_jump), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_jump_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_jump_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_Rshot_MetaData[] = {
		{ "Category", "VR|Inputs" },
		{ "ModuleRelativePath", "TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_Rshot = { "ia_Rshot", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, ia_Rshot), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_Rshot_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_Rshot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_Lshot_MetaData[] = {
		{ "Category", "VR|Inputs" },
		{ "ModuleRelativePath", "TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_Lshot = { "ia_Lshot", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, ia_Lshot), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_Lshot_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_Lshot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_boost_MetaData[] = {
		{ "Category", "VR|Inputs" },
		{ "ModuleRelativePath", "TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_boost = { "ia_boost", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, ia_boost), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_boost_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_boost_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_boostComp_MetaData[] = {
		{ "Category", "VR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xce\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TestPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xce\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_boostComp = { "boostComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, boostComp), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_boostComp_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_boostComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_VRcamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_leftMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_rightMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_leftHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_rightHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_RcableComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_LcableComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_imc_VRPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_move,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_turnLR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_turnUD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_jump,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_Rshot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_Lshot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_boost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_boostComp,
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
	struct Z_CompiledInDeferFile_FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_TestPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_TestPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestPlayer, ATestPlayer::StaticClass, TEXT("ATestPlayer"), &Z_Registration_Info_UClass_ATestPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestPlayer), 2610668502U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_TestPlayer_h_3616239955(TEXT("/Script/TestingVR"),
		Z_CompiledInDeferFile_FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_TestPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_TestPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
