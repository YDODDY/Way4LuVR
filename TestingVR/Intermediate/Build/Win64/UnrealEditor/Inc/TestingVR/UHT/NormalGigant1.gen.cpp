// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestingVR/Public/NormalGigant1.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNormalGigant1() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	TESTINGVR_API UClass* Z_Construct_UClass_ANormalGigant1();
	TESTINGVR_API UClass* Z_Construct_UClass_ANormalGigant1_NoRegister();
	TESTINGVR_API UEnum* Z_Construct_UEnum_TestingVR_ENormalGigan1State();
	UPackage* Z_Construct_UPackage__Script_TestingVR();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENormalGigan1State;
	static UEnum* ENormalGigan1State_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENormalGigan1State.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENormalGigan1State.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TestingVR_ENormalGigan1State, (UObject*)Z_Construct_UPackage__Script_TestingVR(), TEXT("ENormalGigan1State"));
		}
		return Z_Registration_Info_UEnum_ENormalGigan1State.OuterSingleton;
	}
	template<> TESTINGVR_API UEnum* StaticEnum<ENormalGigan1State>()
	{
		return ENormalGigan1State_StaticEnum();
	}
	struct Z_Construct_UEnum_TestingVR_ENormalGigan1State_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TestingVR_ENormalGigan1State_Statics::Enumerators[] = {
		{ "ENormalGigan1State::IDLE", (int64)ENormalGigan1State::IDLE },
		{ "ENormalGigan1State::PATROL", (int64)ENormalGigan1State::PATROL },
		{ "ENormalGigan1State::MOVE", (int64)ENormalGigan1State::MOVE },
		{ "ENormalGigan1State::ATTACK", (int64)ENormalGigan1State::ATTACK },
		{ "ENormalGigan1State::DAMAGED", (int64)ENormalGigan1State::DAMAGED },
		{ "ENormalGigan1State::DIE", (int64)ENormalGigan1State::DIE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TestingVR_ENormalGigan1State_Statics::Enum_MetaDataParams[] = {
		{ "ATTACK.Name", "ENormalGigan1State::ATTACK" },
		{ "BlueprintType", "true" },
		{ "DAMAGED.Name", "ENormalGigan1State::DAMAGED" },
		{ "DIE.Name", "ENormalGigan1State::DIE" },
		{ "IDLE.Name", "ENormalGigan1State::IDLE" },
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
		{ "MOVE.Name", "ENormalGigan1State::MOVE" },
		{ "PATROL.Name", "ENormalGigan1State::PATROL" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TestingVR_ENormalGigan1State_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TestingVR,
		nullptr,
		"ENormalGigan1State",
		"ENormalGigan1State",
		Z_Construct_UEnum_TestingVR_ENormalGigan1State_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TestingVR_ENormalGigan1State_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TestingVR_ENormalGigan1State_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TestingVR_ENormalGigan1State_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_TestingVR_ENormalGigan1State()
	{
		if (!Z_Registration_Info_UEnum_ENormalGigan1State.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENormalGigan1State.InnerSingleton, Z_Construct_UEnum_TestingVR_ENormalGigan1State_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENormalGigan1State.InnerSingleton;
	}
	DEFINE_FUNCTION(ANormalGigant1::execOnEndOverlapRightLeg)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlapRightLeg(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANormalGigant1::execOnBeginOverlapRightLeg)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlapRightLeg(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANormalGigant1::execOnEndOverlapLeftLeg)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlapLeftLeg(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANormalGigant1::execOnBeginOverlapLeftLeg)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlapLeftLeg(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANormalGigant1::execOnEndOverlapRightArm)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlapRightArm(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANormalGigant1::execOnBeginOverlapRightArm)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlapRightArm(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANormalGigant1::execOnEndOverlapLeftArm)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlapLeftArm(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANormalGigant1::execOnBeginOverlapLeftArm)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlapLeftArm(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANormalGigant1::execOnEndOverlapBody)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlapBody(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANormalGigant1::execOnBeginOverlapBody)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlapBody(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANormalGigant1::execOnEndOverlapNeck)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlapNeck(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANormalGigant1::execOnBeginOverlapNeck)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlapNeck(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ANormalGigant1::StaticRegisterNativesANormalGigant1()
	{
		UClass* Class = ANormalGigant1::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBeginOverlapBody", &ANormalGigant1::execOnBeginOverlapBody },
			{ "OnBeginOverlapLeftArm", &ANormalGigant1::execOnBeginOverlapLeftArm },
			{ "OnBeginOverlapLeftLeg", &ANormalGigant1::execOnBeginOverlapLeftLeg },
			{ "OnBeginOverlapNeck", &ANormalGigant1::execOnBeginOverlapNeck },
			{ "OnBeginOverlapRightArm", &ANormalGigant1::execOnBeginOverlapRightArm },
			{ "OnBeginOverlapRightLeg", &ANormalGigant1::execOnBeginOverlapRightLeg },
			{ "OnEndOverlapBody", &ANormalGigant1::execOnEndOverlapBody },
			{ "OnEndOverlapLeftArm", &ANormalGigant1::execOnEndOverlapLeftArm },
			{ "OnEndOverlapLeftLeg", &ANormalGigant1::execOnEndOverlapLeftLeg },
			{ "OnEndOverlapNeck", &ANormalGigant1::execOnEndOverlapNeck },
			{ "OnEndOverlapRightArm", &ANormalGigant1::execOnEndOverlapRightArm },
			{ "OnEndOverlapRightLeg", &ANormalGigant1::execOnEndOverlapRightLeg },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody_Statics
	{
		struct NormalGigant1_eventOnBeginOverlapBody_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnBeginOverlapBody_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnBeginOverlapBody_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnBeginOverlapBody_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnBeginOverlapBody_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((NormalGigant1_eventOnBeginOverlapBody_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NormalGigant1_eventOnBeginOverlapBody_Parms), &Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnBeginOverlapBody_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xba\xef\xbf\xbd\xc6\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xba\xef\xbf\xbd\xc6\xae" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANormalGigant1, nullptr, "OnBeginOverlapBody", nullptr, nullptr, Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody_Statics::NormalGigant1_eventOnBeginOverlapBody_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody_Statics::NormalGigant1_eventOnBeginOverlapBody_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm_Statics
	{
		struct NormalGigant1_eventOnBeginOverlapLeftArm_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnBeginOverlapLeftArm_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnBeginOverlapLeftArm_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnBeginOverlapLeftArm_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnBeginOverlapLeftArm_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((NormalGigant1_eventOnBeginOverlapLeftArm_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NormalGigant1_eventOnBeginOverlapLeftArm_Parms), &Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnBeginOverlapLeftArm_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xde\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xba\xef\xbf\xbd\xc6\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xde\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xba\xef\xbf\xbd\xc6\xae" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANormalGigant1, nullptr, "OnBeginOverlapLeftArm", nullptr, nullptr, Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm_Statics::NormalGigant1_eventOnBeginOverlapLeftArm_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm_Statics::NormalGigant1_eventOnBeginOverlapLeftArm_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg_Statics
	{
		struct NormalGigant1_eventOnBeginOverlapLeftLeg_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnBeginOverlapLeftLeg_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnBeginOverlapLeftLeg_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnBeginOverlapLeftLeg_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnBeginOverlapLeftLeg_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((NormalGigant1_eventOnBeginOverlapLeftLeg_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NormalGigant1_eventOnBeginOverlapLeftLeg_Parms), &Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnBeginOverlapLeftLeg_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xde\xb9\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xba\xef\xbf\xbd\xc6\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xde\xb9\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xba\xef\xbf\xbd\xc6\xae" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANormalGigant1, nullptr, "OnBeginOverlapLeftLeg", nullptr, nullptr, Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg_Statics::NormalGigant1_eventOnBeginOverlapLeftLeg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg_Statics::NormalGigant1_eventOnBeginOverlapLeftLeg_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck_Statics
	{
		struct NormalGigant1_eventOnBeginOverlapNeck_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnBeginOverlapNeck_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnBeginOverlapNeck_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnBeginOverlapNeck_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnBeginOverlapNeck_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((NormalGigant1_eventOnBeginOverlapNeck_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NormalGigant1_eventOnBeginOverlapNeck_Parms), &Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnBeginOverlapNeck_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xba\xef\xbf\xbd\xc6\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xba\xef\xbf\xbd\xc6\xae" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANormalGigant1, nullptr, "OnBeginOverlapNeck", nullptr, nullptr, Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck_Statics::NormalGigant1_eventOnBeginOverlapNeck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck_Statics::NormalGigant1_eventOnBeginOverlapNeck_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm_Statics
	{
		struct NormalGigant1_eventOnBeginOverlapRightArm_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnBeginOverlapRightArm_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnBeginOverlapRightArm_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnBeginOverlapRightArm_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnBeginOverlapRightArm_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((NormalGigant1_eventOnBeginOverlapRightArm_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NormalGigant1_eventOnBeginOverlapRightArm_Parms), &Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnBeginOverlapRightArm_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xba\xef\xbf\xbd\xc6\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xba\xef\xbf\xbd\xc6\xae" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANormalGigant1, nullptr, "OnBeginOverlapRightArm", nullptr, nullptr, Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm_Statics::NormalGigant1_eventOnBeginOverlapRightArm_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm_Statics::NormalGigant1_eventOnBeginOverlapRightArm_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg_Statics
	{
		struct NormalGigant1_eventOnBeginOverlapRightLeg_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnBeginOverlapRightLeg_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnBeginOverlapRightLeg_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnBeginOverlapRightLeg_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnBeginOverlapRightLeg_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((NormalGigant1_eventOnBeginOverlapRightLeg_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NormalGigant1_eventOnBeginOverlapRightLeg_Parms), &Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnBeginOverlapRightLeg_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xba\xef\xbf\xbd\xc6\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xba\xef\xbf\xbd\xc6\xae" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANormalGigant1, nullptr, "OnBeginOverlapRightLeg", nullptr, nullptr, Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg_Statics::NormalGigant1_eventOnBeginOverlapRightLeg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg_Statics::NormalGigant1_eventOnBeginOverlapRightLeg_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANormalGigant1_OnEndOverlapBody_Statics
	{
		struct NormalGigant1_eventOnEndOverlapBody_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnEndOverlapBody_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalGigant1_OnEndOverlapBody_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnEndOverlapBody_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapBody_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_ANormalGigant1_OnEndOverlapBody_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalGigant1_OnEndOverlapBody_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnEndOverlapBody_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnEndOverlapBody_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalGigant1_OnEndOverlapBody_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnEndOverlapBody_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapBody_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ANormalGigant1_OnEndOverlapBody_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANormalGigant1_OnEndOverlapBody_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnEndOverlapBody_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANormalGigant1_OnEndOverlapBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnEndOverlapBody_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnEndOverlapBody_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnEndOverlapBody_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnEndOverlapBody_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnEndOverlapBody_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANormalGigant1_OnEndOverlapBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANormalGigant1, nullptr, "OnEndOverlapBody", nullptr, nullptr, Z_Construct_UFunction_ANormalGigant1_OnEndOverlapBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapBody_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapBody_Statics::NormalGigant1_eventOnEndOverlapBody_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapBody_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANormalGigant1_OnEndOverlapBody_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapBody_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapBody_Statics::NormalGigant1_eventOnEndOverlapBody_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ANormalGigant1_OnEndOverlapBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANormalGigant1_OnEndOverlapBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftArm_Statics
	{
		struct NormalGigant1_eventOnEndOverlapLeftArm_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftArm_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftArm_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnEndOverlapLeftArm_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftArm_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftArm_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftArm_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnEndOverlapLeftArm_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftArm_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftArm_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnEndOverlapLeftArm_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftArm_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftArm_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftArm_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnEndOverlapLeftArm_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftArm_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftArm_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftArm_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftArm_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftArm_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftArm_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftArm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANormalGigant1, nullptr, "OnEndOverlapLeftArm", nullptr, nullptr, Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftArm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftArm_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftArm_Statics::NormalGigant1_eventOnEndOverlapLeftArm_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftArm_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftArm_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftArm_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftArm_Statics::NormalGigant1_eventOnEndOverlapLeftArm_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftArm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftArm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftLeg_Statics
	{
		struct NormalGigant1_eventOnEndOverlapLeftLeg_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftLeg_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftLeg_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnEndOverlapLeftLeg_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftLeg_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftLeg_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftLeg_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnEndOverlapLeftLeg_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftLeg_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftLeg_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnEndOverlapLeftLeg_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftLeg_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftLeg_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftLeg_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnEndOverlapLeftLeg_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftLeg_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftLeg_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftLeg_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftLeg_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftLeg_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftLeg_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftLeg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANormalGigant1, nullptr, "OnEndOverlapLeftLeg", nullptr, nullptr, Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftLeg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftLeg_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftLeg_Statics::NormalGigant1_eventOnEndOverlapLeftLeg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftLeg_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftLeg_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftLeg_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftLeg_Statics::NormalGigant1_eventOnEndOverlapLeftLeg_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftLeg()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftLeg_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANormalGigant1_OnEndOverlapNeck_Statics
	{
		struct NormalGigant1_eventOnEndOverlapNeck_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnEndOverlapNeck_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalGigant1_OnEndOverlapNeck_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnEndOverlapNeck_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapNeck_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_ANormalGigant1_OnEndOverlapNeck_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalGigant1_OnEndOverlapNeck_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnEndOverlapNeck_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnEndOverlapNeck_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalGigant1_OnEndOverlapNeck_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnEndOverlapNeck_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapNeck_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ANormalGigant1_OnEndOverlapNeck_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANormalGigant1_OnEndOverlapNeck_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnEndOverlapNeck_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANormalGigant1_OnEndOverlapNeck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnEndOverlapNeck_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnEndOverlapNeck_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnEndOverlapNeck_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnEndOverlapNeck_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnEndOverlapNeck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANormalGigant1_OnEndOverlapNeck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANormalGigant1, nullptr, "OnEndOverlapNeck", nullptr, nullptr, Z_Construct_UFunction_ANormalGigant1_OnEndOverlapNeck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapNeck_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapNeck_Statics::NormalGigant1_eventOnEndOverlapNeck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapNeck_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANormalGigant1_OnEndOverlapNeck_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapNeck_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapNeck_Statics::NormalGigant1_eventOnEndOverlapNeck_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ANormalGigant1_OnEndOverlapNeck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANormalGigant1_OnEndOverlapNeck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightArm_Statics
	{
		struct NormalGigant1_eventOnEndOverlapRightArm_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightArm_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightArm_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnEndOverlapRightArm_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightArm_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightArm_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightArm_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnEndOverlapRightArm_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightArm_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightArm_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnEndOverlapRightArm_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightArm_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightArm_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightArm_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnEndOverlapRightArm_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightArm_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightArm_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightArm_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightArm_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightArm_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightArm_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightArm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANormalGigant1, nullptr, "OnEndOverlapRightArm", nullptr, nullptr, Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightArm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightArm_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightArm_Statics::NormalGigant1_eventOnEndOverlapRightArm_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightArm_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightArm_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightArm_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightArm_Statics::NormalGigant1_eventOnEndOverlapRightArm_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightArm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightArm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightLeg_Statics
	{
		struct NormalGigant1_eventOnEndOverlapRightLeg_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightLeg_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightLeg_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnEndOverlapRightLeg_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightLeg_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightLeg_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightLeg_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnEndOverlapRightLeg_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightLeg_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightLeg_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnEndOverlapRightLeg_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightLeg_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightLeg_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightLeg_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NormalGigant1_eventOnEndOverlapRightLeg_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightLeg_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightLeg_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightLeg_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightLeg_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightLeg_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightLeg_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightLeg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANormalGigant1, nullptr, "OnEndOverlapRightLeg", nullptr, nullptr, Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightLeg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightLeg_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightLeg_Statics::NormalGigant1_eventOnEndOverlapRightLeg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightLeg_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightLeg_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightLeg_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightLeg_Statics::NormalGigant1_eventOnEndOverlapRightLeg_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightLeg()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightLeg_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANormalGigant1);
	UClass* Z_Construct_UClass_ANormalGigant1_NoRegister()
	{
		return ANormalGigant1::StaticClass();
	}
	struct Z_Construct_UClass_ANormalGigant1_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomPatrolDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomPatrolDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChangeidleDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChangeidleDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BodyMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftLeg_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftLeg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightLeg_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightLeg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightHandCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightHandCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftHandCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightArmCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightArmCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftArmCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftArmCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SightRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SightAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attackDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_attackDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SightRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackMT1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMT1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackMT2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMT2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackMT3_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMT3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackMT4_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMT4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Die1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Die1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Die2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Die2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Die3_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Die3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Die4_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Die4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BloodPX_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BloodPX;
		static const UECodeGen_Private::FBytePropertyParams NewProp_gigant1State_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gigant1State_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_gigant1State;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANormalGigant1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TestingVR,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ANormalGigant1_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapBody, "OnBeginOverlapBody" }, // 717687895
		{ &Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftArm, "OnBeginOverlapLeftArm" }, // 1947488776
		{ &Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapLeftLeg, "OnBeginOverlapLeftLeg" }, // 3250284363
		{ &Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapNeck, "OnBeginOverlapNeck" }, // 1795909341
		{ &Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightArm, "OnBeginOverlapRightArm" }, // 2122785263
		{ &Z_Construct_UFunction_ANormalGigant1_OnBeginOverlapRightLeg, "OnBeginOverlapRightLeg" }, // 2557762767
		{ &Z_Construct_UFunction_ANormalGigant1_OnEndOverlapBody, "OnEndOverlapBody" }, // 2464664694
		{ &Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftArm, "OnEndOverlapLeftArm" }, // 762849780
		{ &Z_Construct_UFunction_ANormalGigant1_OnEndOverlapLeftLeg, "OnEndOverlapLeftLeg" }, // 644220534
		{ &Z_Construct_UFunction_ANormalGigant1_OnEndOverlapNeck, "OnEndOverlapNeck" }, // 2286443508
		{ &Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightArm, "OnEndOverlapRightArm" }, // 1867435291
		{ &Z_Construct_UFunction_ANormalGigant1_OnEndOverlapRightLeg, "OnEndOverlapRightLeg" }, // 1313455557
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANormalGigant1_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NormalGigant1.h" },
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANormalGigant1_Statics::NewProp_RandomPatrolDelay_MetaData[] = {
		{ "Category", "MySettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb5\xe9\xbf\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\x8b\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb5\xe9\xbf\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\x8b\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANormalGigant1_Statics::NewProp_RandomPatrolDelay = { "RandomPatrolDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANormalGigant1, RandomPatrolDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1_Statics::NewProp_RandomPatrolDelay_MetaData), Z_Construct_UClass_ANormalGigant1_Statics::NewProp_RandomPatrolDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANormalGigant1_Statics::NewProp_ChangeidleDelay_MetaData[] = {
		{ "Category", "MySettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb5\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb5\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANormalGigant1_Statics::NewProp_ChangeidleDelay = { "ChangeidleDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANormalGigant1, ChangeidleDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1_Statics::NewProp_ChangeidleDelay_MetaData), Z_Construct_UClass_ANormalGigant1_Statics::NewProp_ChangeidleDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANormalGigant1_Statics::NewProp_BoxMesh_MetaData[] = {
		{ "Category", "NormalGigant1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xde\xbd\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xde\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANormalGigant1_Statics::NewProp_BoxMesh = { "BoxMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANormalGigant1, BoxMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1_Statics::NewProp_BoxMesh_MetaData), Z_Construct_UClass_ANormalGigant1_Statics::NewProp_BoxMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANormalGigant1_Statics::NewProp_BodyMesh_MetaData[] = {
		{ "Category", "NormalGigant1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANormalGigant1_Statics::NewProp_BodyMesh = { "BodyMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANormalGigant1, BodyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1_Statics::NewProp_BodyMesh_MetaData), Z_Construct_UClass_ANormalGigant1_Statics::NewProp_BodyMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANormalGigant1_Statics::NewProp_LeftArm_MetaData[] = {
		{ "Category", "NormalGigant1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANormalGigant1_Statics::NewProp_LeftArm = { "LeftArm", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANormalGigant1, LeftArm), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1_Statics::NewProp_LeftArm_MetaData), Z_Construct_UClass_ANormalGigant1_Statics::NewProp_LeftArm_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANormalGigant1_Statics::NewProp_RightArm_MetaData[] = {
		{ "Category", "NormalGigant1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANormalGigant1_Statics::NewProp_RightArm = { "RightArm", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANormalGigant1, RightArm), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1_Statics::NewProp_RightArm_MetaData), Z_Construct_UClass_ANormalGigant1_Statics::NewProp_RightArm_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANormalGigant1_Statics::NewProp_LeftLeg_MetaData[] = {
		{ "Category", "NormalGigant1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANormalGigant1_Statics::NewProp_LeftLeg = { "LeftLeg", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANormalGigant1, LeftLeg), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1_Statics::NewProp_LeftLeg_MetaData), Z_Construct_UClass_ANormalGigant1_Statics::NewProp_LeftLeg_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANormalGigant1_Statics::NewProp_RightLeg_MetaData[] = {
		{ "Category", "NormalGigant1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANormalGigant1_Statics::NewProp_RightLeg = { "RightLeg", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANormalGigant1, RightLeg), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1_Statics::NewProp_RightLeg_MetaData), Z_Construct_UClass_ANormalGigant1_Statics::NewProp_RightLeg_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANormalGigant1_Statics::NewProp_RightHandCollision_MetaData[] = {
		{ "Category", "NormalGigant1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANormalGigant1_Statics::NewProp_RightHandCollision = { "RightHandCollision", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANormalGigant1, RightHandCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1_Statics::NewProp_RightHandCollision_MetaData), Z_Construct_UClass_ANormalGigant1_Statics::NewProp_RightHandCollision_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANormalGigant1_Statics::NewProp_LeftHandCollision_MetaData[] = {
		{ "Category", "NormalGigant1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANormalGigant1_Statics::NewProp_LeftHandCollision = { "LeftHandCollision", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANormalGigant1, LeftHandCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1_Statics::NewProp_LeftHandCollision_MetaData), Z_Construct_UClass_ANormalGigant1_Statics::NewProp_LeftHandCollision_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANormalGigant1_Statics::NewProp_RightArmCollision_MetaData[] = {
		{ "Category", "NormalGigant1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANormalGigant1_Statics::NewProp_RightArmCollision = { "RightArmCollision", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANormalGigant1, RightArmCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1_Statics::NewProp_RightArmCollision_MetaData), Z_Construct_UClass_ANormalGigant1_Statics::NewProp_RightArmCollision_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANormalGigant1_Statics::NewProp_LeftArmCollision_MetaData[] = {
		{ "Category", "NormalGigant1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANormalGigant1_Statics::NewProp_LeftArmCollision = { "LeftArmCollision", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANormalGigant1, LeftArmCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1_Statics::NewProp_LeftArmCollision_MetaData), Z_Construct_UClass_ANormalGigant1_Statics::NewProp_LeftArmCollision_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANormalGigant1_Statics::NewProp_SightRadius_MetaData[] = {
		{ "Category", "MySettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xc3\xbe\xef\xbf\xbd \xef\xbf\xbd\xdd\xb0\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc3\xbe\xef\xbf\xbd \xef\xbf\xbd\xdd\xb0\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANormalGigant1_Statics::NewProp_SightRadius = { "SightRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANormalGigant1, SightRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1_Statics::NewProp_SightRadius_MetaData), Z_Construct_UClass_ANormalGigant1_Statics::NewProp_SightRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANormalGigant1_Statics::NewProp_SightAngle_MetaData[] = {
		{ "Category", "Mysettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xc3\xbe\xdf\xb0\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc3\xbe\xdf\xb0\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANormalGigant1_Statics::NewProp_SightAngle = { "SightAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANormalGigant1, SightAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1_Statics::NewProp_SightAngle_MetaData), Z_Construct_UClass_ANormalGigant1_Statics::NewProp_SightAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANormalGigant1_Statics::NewProp_attackDistance_MetaData[] = {
		{ "Category", "MySettings" },
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANormalGigant1_Statics::NewProp_attackDistance = { "attackDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANormalGigant1, attackDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1_Statics::NewProp_attackDistance_MetaData), Z_Construct_UClass_ANormalGigant1_Statics::NewProp_attackDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANormalGigant1_Statics::NewProp_SightRange_MetaData[] = {
		{ "Category", "MySettings" },
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANormalGigant1_Statics::NewProp_SightRange = { "SightRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANormalGigant1, SightRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1_Statics::NewProp_SightRange_MetaData), Z_Construct_UClass_ANormalGigant1_Statics::NewProp_SightRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANormalGigant1_Statics::NewProp_AttackMT1_MetaData[] = {
		{ "Category", "MySettings" },
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANormalGigant1_Statics::NewProp_AttackMT1 = { "AttackMT1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANormalGigant1, AttackMT1), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1_Statics::NewProp_AttackMT1_MetaData), Z_Construct_UClass_ANormalGigant1_Statics::NewProp_AttackMT1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANormalGigant1_Statics::NewProp_AttackMT2_MetaData[] = {
		{ "Category", "MySettings" },
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANormalGigant1_Statics::NewProp_AttackMT2 = { "AttackMT2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANormalGigant1, AttackMT2), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1_Statics::NewProp_AttackMT2_MetaData), Z_Construct_UClass_ANormalGigant1_Statics::NewProp_AttackMT2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANormalGigant1_Statics::NewProp_AttackMT3_MetaData[] = {
		{ "Category", "MySettings" },
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANormalGigant1_Statics::NewProp_AttackMT3 = { "AttackMT3", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANormalGigant1, AttackMT3), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1_Statics::NewProp_AttackMT3_MetaData), Z_Construct_UClass_ANormalGigant1_Statics::NewProp_AttackMT3_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANormalGigant1_Statics::NewProp_AttackMT4_MetaData[] = {
		{ "Category", "MySettings" },
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANormalGigant1_Statics::NewProp_AttackMT4 = { "AttackMT4", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANormalGigant1, AttackMT4), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1_Statics::NewProp_AttackMT4_MetaData), Z_Construct_UClass_ANormalGigant1_Statics::NewProp_AttackMT4_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANormalGigant1_Statics::NewProp_Die1_MetaData[] = {
		{ "Category", "MySettings" },
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANormalGigant1_Statics::NewProp_Die1 = { "Die1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANormalGigant1, Die1), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1_Statics::NewProp_Die1_MetaData), Z_Construct_UClass_ANormalGigant1_Statics::NewProp_Die1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANormalGigant1_Statics::NewProp_Die2_MetaData[] = {
		{ "Category", "MySettings" },
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANormalGigant1_Statics::NewProp_Die2 = { "Die2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANormalGigant1, Die2), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1_Statics::NewProp_Die2_MetaData), Z_Construct_UClass_ANormalGigant1_Statics::NewProp_Die2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANormalGigant1_Statics::NewProp_Die3_MetaData[] = {
		{ "Category", "MySettings" },
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANormalGigant1_Statics::NewProp_Die3 = { "Die3", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANormalGigant1, Die3), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1_Statics::NewProp_Die3_MetaData), Z_Construct_UClass_ANormalGigant1_Statics::NewProp_Die3_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANormalGigant1_Statics::NewProp_Die4_MetaData[] = {
		{ "Category", "MySettings" },
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANormalGigant1_Statics::NewProp_Die4 = { "Die4", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANormalGigant1, Die4), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1_Statics::NewProp_Die4_MetaData), Z_Construct_UClass_ANormalGigant1_Statics::NewProp_Die4_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANormalGigant1_Statics::NewProp_BloodPX_MetaData[] = {
		{ "Category", "MySettings" },
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANormalGigant1_Statics::NewProp_BloodPX = { "BloodPX", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANormalGigant1, BloodPX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1_Statics::NewProp_BloodPX_MetaData), Z_Construct_UClass_ANormalGigant1_Statics::NewProp_BloodPX_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANormalGigant1_Statics::NewProp_gigant1State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANormalGigant1_Statics::NewProp_gigant1State_MetaData[] = {
		{ "Category", "MySettings" },
		{ "ModuleRelativePath", "Public/NormalGigant1.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ANormalGigant1_Statics::NewProp_gigant1State = { "gigant1State", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANormalGigant1, gigant1State), Z_Construct_UEnum_TestingVR_ENormalGigan1State, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1_Statics::NewProp_gigant1State_MetaData), Z_Construct_UClass_ANormalGigant1_Statics::NewProp_gigant1State_MetaData) }; // 3684291987
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANormalGigant1_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANormalGigant1_Statics::NewProp_RandomPatrolDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANormalGigant1_Statics::NewProp_ChangeidleDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANormalGigant1_Statics::NewProp_BoxMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANormalGigant1_Statics::NewProp_BodyMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANormalGigant1_Statics::NewProp_LeftArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANormalGigant1_Statics::NewProp_RightArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANormalGigant1_Statics::NewProp_LeftLeg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANormalGigant1_Statics::NewProp_RightLeg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANormalGigant1_Statics::NewProp_RightHandCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANormalGigant1_Statics::NewProp_LeftHandCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANormalGigant1_Statics::NewProp_RightArmCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANormalGigant1_Statics::NewProp_LeftArmCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANormalGigant1_Statics::NewProp_SightRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANormalGigant1_Statics::NewProp_SightAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANormalGigant1_Statics::NewProp_attackDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANormalGigant1_Statics::NewProp_SightRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANormalGigant1_Statics::NewProp_AttackMT1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANormalGigant1_Statics::NewProp_AttackMT2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANormalGigant1_Statics::NewProp_AttackMT3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANormalGigant1_Statics::NewProp_AttackMT4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANormalGigant1_Statics::NewProp_Die1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANormalGigant1_Statics::NewProp_Die2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANormalGigant1_Statics::NewProp_Die3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANormalGigant1_Statics::NewProp_Die4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANormalGigant1_Statics::NewProp_BloodPX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANormalGigant1_Statics::NewProp_gigant1State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANormalGigant1_Statics::NewProp_gigant1State,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANormalGigant1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANormalGigant1>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANormalGigant1_Statics::ClassParams = {
		&ANormalGigant1::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANormalGigant1_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1_Statics::Class_MetaDataParams), Z_Construct_UClass_ANormalGigant1_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ANormalGigant1()
	{
		if (!Z_Registration_Info_UClass_ANormalGigant1.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANormalGigant1.OuterSingleton, Z_Construct_UClass_ANormalGigant1_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANormalGigant1.OuterSingleton;
	}
	template<> TESTINGVR_API UClass* StaticClass<ANormalGigant1>()
	{
		return ANormalGigant1::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANormalGigant1);
	ANormalGigant1::~ANormalGigant1() {}
	struct Z_CompiledInDeferFile_FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_Public_NormalGigant1_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_Public_NormalGigant1_h_Statics::EnumInfo[] = {
		{ ENormalGigan1State_StaticEnum, TEXT("ENormalGigan1State"), &Z_Registration_Info_UEnum_ENormalGigan1State, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3684291987U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_Public_NormalGigant1_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANormalGigant1, ANormalGigant1::StaticClass, TEXT("ANormalGigant1"), &Z_Registration_Info_UClass_ANormalGigant1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANormalGigant1), 3371178728U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_Public_NormalGigant1_h_497627263(TEXT("/Script/TestingVR"),
		Z_CompiledInDeferFile_FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_Public_NormalGigant1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_Public_NormalGigant1_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_Public_NormalGigant1_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_Public_NormalGigant1_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
