// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestingVR/Public/TestPlayer.h"
#include "InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestPlayer() {}
// Cross Module References
	CABLECOMPONENT_API UClass* Z_Construct_UClass_UCableComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	TESTINGVR_API UClass* Z_Construct_UClass_AFocusPointWidgetActor_NoRegister();
	TESTINGVR_API UClass* Z_Construct_UClass_ALeftFocusPointWidgetActor_NoRegister();
	TESTINGVR_API UClass* Z_Construct_UClass_APlayerKnifeActor_NoRegister();
	TESTINGVR_API UClass* Z_Construct_UClass_ATestPlayer();
	TESTINGVR_API UClass* Z_Construct_UClass_ATestPlayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TestingVR();
// End Cross Module References
	DEFINE_FUNCTION(ATestPlayer::execDie)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Die();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATestPlayer::execShowCrossHairL)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowCrossHairL();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATestPlayer::execShowCrossHairR)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowCrossHairR();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATestPlayer::execOnDamaged)
	{
		P_GET_OBJECT(AActor,Z_Param_attacker);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDamaged(Z_Param_attacker);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATestPlayer::execOnAttack)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttack(Z_Param_Out_value);
		P_NATIVE_END;
	}
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
			{ "Die", &ATestPlayer::execDie },
			{ "OnAttack", &ATestPlayer::execOnAttack },
			{ "OnBoost", &ATestPlayer::execOnBoost },
			{ "OnDamaged", &ATestPlayer::execOnDamaged },
			{ "OnIAJump", &ATestPlayer::execOnIAJump },
			{ "OnIAMove", &ATestPlayer::execOnIAMove },
			{ "OnIATurn", &ATestPlayer::execOnIATurn },
			{ "OnIATurnUpDown", &ATestPlayer::execOnIATurnUpDown },
			{ "OnLeftShooting", &ATestPlayer::execOnLeftShooting },
			{ "OnRightShooting", &ATestPlayer::execOnRightShooting },
			{ "ShowCrossHairL", &ATestPlayer::execShowCrossHairL },
			{ "ShowCrossHairR", &ATestPlayer::execShowCrossHairR },
			{ "StopLeftShooting", &ATestPlayer::execStopLeftShooting },
			{ "StopRightShooting", &ATestPlayer::execStopRightShooting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATestPlayer_Die_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestPlayer_Die_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xd7\xb4\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd7\xb4\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestPlayer_Die_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestPlayer, nullptr, "Die", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_Die_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestPlayer_Die_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATestPlayer_Die()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestPlayer_Die_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATestPlayer_OnAttack_Statics
	{
		struct TestPlayer_eventOnAttack_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestPlayer_OnAttack_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATestPlayer_OnAttack_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestPlayer_eventOnAttack_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnAttack_Statics::NewProp_value_MetaData), Z_Construct_UFunction_ATestPlayer_OnAttack_Statics::NewProp_value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestPlayer_OnAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestPlayer_OnAttack_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestPlayer_OnAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestPlayer_OnAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestPlayer, nullptr, "OnAttack", nullptr, nullptr, Z_Construct_UFunction_ATestPlayer_OnAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnAttack_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATestPlayer_OnAttack_Statics::TestPlayer_eventOnAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestPlayer_OnAttack_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnAttack_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATestPlayer_OnAttack_Statics::TestPlayer_eventOnAttack_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATestPlayer_OnAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestPlayer_OnAttack_Statics::FuncParams);
		}
		return ReturnFunction;
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
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
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
	struct Z_Construct_UFunction_ATestPlayer_OnDamaged_Statics
	{
		struct TestPlayer_eventOnDamaged_Parms
		{
			AActor* attacker;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_attacker;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATestPlayer_OnDamaged_Statics::NewProp_attacker = { "attacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestPlayer_eventOnDamaged_Parms, attacker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestPlayer_OnDamaged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestPlayer_OnDamaged_Statics::NewProp_attacker,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestPlayer_OnDamaged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestPlayer_OnDamaged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestPlayer, nullptr, "OnDamaged", nullptr, nullptr, Z_Construct_UFunction_ATestPlayer_OnDamaged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnDamaged_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATestPlayer_OnDamaged_Statics::TestPlayer_eventOnDamaged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnDamaged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestPlayer_OnDamaged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_OnDamaged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATestPlayer_OnDamaged_Statics::TestPlayer_eventOnDamaged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATestPlayer_OnDamaged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestPlayer_OnDamaged_Statics::FuncParams);
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
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
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
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
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
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
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
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
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
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
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
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
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
	struct Z_Construct_UFunction_ATestPlayer_ShowCrossHairL_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestPlayer_ShowCrossHairL_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestPlayer_ShowCrossHairL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestPlayer, nullptr, "ShowCrossHairL", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_ShowCrossHairL_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestPlayer_ShowCrossHairL_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATestPlayer_ShowCrossHairL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestPlayer_ShowCrossHairL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATestPlayer_ShowCrossHairR_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestPlayer_ShowCrossHairR_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestPlayer_ShowCrossHairR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestPlayer, nullptr, "ShowCrossHairR", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayer_ShowCrossHairR_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestPlayer_ShowCrossHairR_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATestPlayer_ShowCrossHairR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestPlayer_ShowCrossHairR_Statics::FuncParams);
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
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
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
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightAim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_rightAim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftAim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_leftAim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RcableComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RcableComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LcableComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LcableComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_crossHairR_bp_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_crossHairR_bp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_crossHairL_bp_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_crossHairL_bp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_knifeLocation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_knifeLocation;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ia_attack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ia_attack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ia_restart_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ia_restart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sensivility_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_sensivility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boostComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_boostComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_windEffectComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_windEffectComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attackEffectComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_attackEffectComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jumpSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_jumpSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_shootingSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_shootingSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boostingSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_boostingSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attackingSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_attackingSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_windSoundComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_windSoundComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_runningSoundComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_runningSoundComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_knifeActor_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_knifeActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentHP_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_currentHP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxHP_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_maxHP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsGrapplingR_MetaData[];
#endif
		static void NewProp_bIsGrapplingR_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGrapplingR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsGrapplingL_MetaData[];
#endif
		static void NewProp_bIsGrapplingL_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGrapplingL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsGrappling_MetaData[];
#endif
		static void NewProp_bIsGrappling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGrappling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_grabPointR_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_grabPointR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_grabPointL_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_grabPointL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_kAdjustCrossJairScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_kAdjustCrossJairScale;
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
		{ &Z_Construct_UFunction_ATestPlayer_Die, "Die" }, // 3383337718
		{ &Z_Construct_UFunction_ATestPlayer_OnAttack, "OnAttack" }, // 2372502975
		{ &Z_Construct_UFunction_ATestPlayer_OnBoost, "OnBoost" }, // 2004199384
		{ &Z_Construct_UFunction_ATestPlayer_OnDamaged, "OnDamaged" }, // 1164556170
		{ &Z_Construct_UFunction_ATestPlayer_OnIAJump, "OnIAJump" }, // 917622198
		{ &Z_Construct_UFunction_ATestPlayer_OnIAMove, "OnIAMove" }, // 336786476
		{ &Z_Construct_UFunction_ATestPlayer_OnIATurn, "OnIATurn" }, // 471590827
		{ &Z_Construct_UFunction_ATestPlayer_OnIATurnUpDown, "OnIATurnUpDown" }, // 3315145475
		{ &Z_Construct_UFunction_ATestPlayer_OnLeftShooting, "OnLeftShooting" }, // 537871742
		{ &Z_Construct_UFunction_ATestPlayer_OnRightShooting, "OnRightShooting" }, // 889791880
		{ &Z_Construct_UFunction_ATestPlayer_ShowCrossHairL, "ShowCrossHairL" }, // 4019720169
		{ &Z_Construct_UFunction_ATestPlayer_ShowCrossHairR, "ShowCrossHairR" }, // 2838083031
		{ &Z_Construct_UFunction_ATestPlayer_StopLeftShooting, "StopLeftShooting" }, // 3172697352
		{ &Z_Construct_UFunction_ATestPlayer_StopRightShooting, "StopRightShooting" }, // 362483085
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TestPlayer.h" },
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_VRcamera_MetaData[] = {
		{ "Category", "TestPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
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
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_leftMotion = { "leftMotion", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, leftMotion), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_leftMotion_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_leftMotion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_rightMotion_MetaData[] = {
		{ "Category", "TestPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_rightMotion = { "rightMotion", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, rightMotion), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_rightMotion_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_rightMotion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_leftHand_MetaData[] = {
		{ "Category", "TestPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_leftHand = { "leftHand", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, leftHand), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_leftHand_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_leftHand_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_rightHand_MetaData[] = {
		{ "Category", "TestPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_rightHand = { "rightHand", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, rightHand), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_rightHand_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_rightHand_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_rightAim_MetaData[] = {
		{ "Category", "TestPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_rightAim = { "rightAim", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, rightAim), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_rightAim_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_rightAim_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_leftAim_MetaData[] = {
		{ "Category", "TestPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_leftAim = { "leftAim", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, leftAim), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_leftAim_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_leftAim_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_RcableComp_MetaData[] = {
		{ "Category", "TestPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xba\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xba\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_RcableComp = { "RcableComp", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, RcableComp), Z_Construct_UClass_UCableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_RcableComp_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_RcableComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_LcableComp_MetaData[] = {
		{ "Category", "TestPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_LcableComp = { "LcableComp", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, LcableComp), Z_Construct_UClass_UCableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_LcableComp_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_LcableComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_crossHairR_bp_MetaData[] = {
		{ "Category", "VR|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd UI \n" },
#endif
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd UI" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_crossHairR_bp = { "crossHairR_bp", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, crossHairR_bp), Z_Construct_UClass_UClass, Z_Construct_UClass_AFocusPointWidgetActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_crossHairR_bp_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_crossHairR_bp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_crossHairL_bp_MetaData[] = {
		{ "Category", "VR|UI" },
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_crossHairL_bp = { "crossHairL_bp", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, crossHairL_bp), Z_Construct_UClass_UClass, Z_Construct_UClass_ALeftFocusPointWidgetActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_crossHairL_bp_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_crossHairL_bp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_knifeLocation_MetaData[] = {
		{ "Category", "TestPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xc4\xae\xef\xbf\xbd\xef\xbf\xbd\xc4\xa1 \xc8\xad\xef\xbf\xbd\xef\xbf\xbd\xc7\xa5\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc4\xae\xef\xbf\xbd\xef\xbf\xbd\xc4\xa1 \xc8\xad\xef\xbf\xbd\xef\xbf\xbd\xc7\xa5" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_knifeLocation = { "knifeLocation", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, knifeLocation), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_knifeLocation_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_knifeLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_imc_VRPlayer_MetaData[] = {
		{ "Category", "VR|Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xc7\xb2\n" },
#endif
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc7\xb2" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_imc_VRPlayer = { "imc_VRPlayer", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, imc_VRPlayer), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_imc_VRPlayer_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_imc_VRPlayer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_move_MetaData[] = {
		{ "Category", "VR|Inputs" },
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_move = { "ia_move", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, ia_move), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_move_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_move_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_turnLR_MetaData[] = {
		{ "Category", "VR|Inputs" },
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_turnLR = { "ia_turnLR", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, ia_turnLR), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_turnLR_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_turnLR_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_turnUD_MetaData[] = {
		{ "Category", "VR|Inputs" },
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_turnUD = { "ia_turnUD", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, ia_turnUD), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_turnUD_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_turnUD_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_jump_MetaData[] = {
		{ "Category", "VR|Inputs" },
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_jump = { "ia_jump", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, ia_jump), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_jump_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_jump_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_Rshot_MetaData[] = {
		{ "Category", "VR|Inputs" },
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_Rshot = { "ia_Rshot", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, ia_Rshot), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_Rshot_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_Rshot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_Lshot_MetaData[] = {
		{ "Category", "VR|Inputs" },
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_Lshot = { "ia_Lshot", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, ia_Lshot), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_Lshot_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_Lshot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_boost_MetaData[] = {
		{ "Category", "VR|Inputs" },
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_boost = { "ia_boost", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, ia_boost), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_boost_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_boost_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_attack_MetaData[] = {
		{ "Category", "VR|Inputs" },
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_attack = { "ia_attack", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, ia_attack), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_attack_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_attack_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_restart_MetaData[] = {
		{ "Category", "VR|Inputs" },
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_restart = { "ia_restart", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, ia_restart), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_restart_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_restart_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_sensivility_MetaData[] = {
		{ "Category", "VR|Inputs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xc8\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \n" },
#endif
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc8\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_sensivility = { "sensivility", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, sensivility), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_sensivility_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_sensivility_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_boostComp_MetaData[] = {
		{ "Category", "TestPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xce\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xce\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_boostComp = { "boostComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, boostComp), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_boostComp_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_boostComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_windEffectComp_MetaData[] = {
		{ "Category", "TestPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xd9\xb6\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd9\xb6\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_windEffectComp = { "windEffectComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, windEffectComp), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_windEffectComp_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_windEffectComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_attackEffectComp_MetaData[] = {
		{ "Category", "TestPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_attackEffectComp = { "attackEffectComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, attackEffectComp), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_attackEffectComp_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_attackEffectComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_jumpSound_MetaData[] = {
		{ "Category", "VR|Sounds" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xd2\xb8\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd2\xb8\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_jumpSound = { "jumpSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, jumpSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_jumpSound_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_jumpSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_shootingSound_MetaData[] = {
		{ "Category", "VR|Sounds" },
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_shootingSound = { "shootingSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, shootingSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_shootingSound_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_shootingSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_boostingSound_MetaData[] = {
		{ "Category", "VR|Sounds" },
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_boostingSound = { "boostingSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, boostingSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_boostingSound_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_boostingSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_attackingSound_MetaData[] = {
		{ "Category", "VR|Sounds" },
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_attackingSound = { "attackingSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, attackingSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_attackingSound_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_attackingSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_windSoundComp_MetaData[] = {
		{ "Category", "VR|Sounds" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_windSoundComp = { "windSoundComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, windSoundComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_windSoundComp_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_windSoundComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_runningSoundComp_MetaData[] = {
		{ "Category", "VR|Sounds" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_runningSoundComp = { "runningSoundComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, runningSoundComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_runningSoundComp_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_runningSoundComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_knifeActor_MetaData[] = {
		{ "Category", "VR" },
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_knifeActor = { "knifeActor", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, knifeActor), Z_Construct_UClass_UClass, Z_Construct_UClass_APlayerKnifeActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_knifeActor_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_knifeActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_currentHP_MetaData[] = {
		{ "Category", "VR" },
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_currentHP = { "currentHP", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, currentHP), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_currentHP_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_currentHP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_maxHP_MetaData[] = {
		{ "Category", "VR" },
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_maxHP = { "maxHP", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, maxHP), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_maxHP_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_maxHP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_bIsGrapplingR_MetaData[] = {
		{ "Category", "TestPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xba\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae Visibility \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xee\xba\xaf\xef\xbf\xbd\xef\xbf\xbd \n" },
#endif
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xba\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae Visibility \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xee\xba\xaf\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	void Z_Construct_UClass_ATestPlayer_Statics::NewProp_bIsGrapplingR_SetBit(void* Obj)
	{
		((ATestPlayer*)Obj)->bIsGrapplingR = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_bIsGrapplingR = { "bIsGrapplingR", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATestPlayer), &Z_Construct_UClass_ATestPlayer_Statics::NewProp_bIsGrapplingR_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_bIsGrapplingR_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_bIsGrapplingR_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_bIsGrapplingL_MetaData[] = {
		{ "Category", "TestPlayer" },
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
	};
#endif
	void Z_Construct_UClass_ATestPlayer_Statics::NewProp_bIsGrapplingL_SetBit(void* Obj)
	{
		((ATestPlayer*)Obj)->bIsGrapplingL = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_bIsGrapplingL = { "bIsGrapplingL", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATestPlayer), &Z_Construct_UClass_ATestPlayer_Statics::NewProp_bIsGrapplingL_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_bIsGrapplingL_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_bIsGrapplingL_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_bIsGrappling_MetaData[] = {
		{ "Category", "TestPlayer" },
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
	};
#endif
	void Z_Construct_UClass_ATestPlayer_Statics::NewProp_bIsGrappling_SetBit(void* Obj)
	{
		((ATestPlayer*)Obj)->bIsGrappling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_bIsGrappling = { "bIsGrappling", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATestPlayer), &Z_Construct_UClass_ATestPlayer_Statics::NewProp_bIsGrappling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_bIsGrappling_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_bIsGrappling_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_grabPointR_MetaData[] = {
		{ "Category", "TestPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xba\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xba\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_grabPointR = { "grabPointR", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, grabPointR), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_grabPointR_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_grabPointR_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_grabPointL_MetaData[] = {
		{ "Category", "TestPlayer" },
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_grabPointL = { "grabPointL", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, grabPointL), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_grabPointL_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_grabPointL_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestPlayer_Statics::NewProp_kAdjustCrossJairScale_MetaData[] = {
		{ "Category", "TestPlayer" },
		{ "ModuleRelativePath", "Public/TestPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATestPlayer_Statics::NewProp_kAdjustCrossJairScale = { "kAdjustCrossJairScale", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayer, kAdjustCrossJairScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayer_Statics::NewProp_kAdjustCrossJairScale_MetaData), Z_Construct_UClass_ATestPlayer_Statics::NewProp_kAdjustCrossJairScale_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_VRcamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_leftMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_rightMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_leftHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_rightHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_rightAim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_leftAim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_RcableComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_LcableComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_crossHairR_bp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_crossHairL_bp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_knifeLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_imc_VRPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_move,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_turnLR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_turnUD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_jump,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_Rshot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_Lshot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_boost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_attack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_ia_restart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_sensivility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_boostComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_windEffectComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_attackEffectComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_jumpSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_shootingSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_boostingSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_attackingSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_windSoundComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_runningSoundComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_knifeActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_currentHP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_maxHP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_bIsGrapplingR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_bIsGrapplingL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_bIsGrappling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_grabPointR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_grabPointL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayer_Statics::NewProp_kAdjustCrossJairScale,
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
	struct Z_CompiledInDeferFile_FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_Public_TestPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_Public_TestPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestPlayer, ATestPlayer::StaticClass, TEXT("ATestPlayer"), &Z_Registration_Info_UClass_ATestPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestPlayer), 1680351116U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_Public_TestPlayer_h_4016695009(TEXT("/Script/TestingVR"),
		Z_CompiledInDeferFile_FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_Public_TestPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_Public_TestPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
