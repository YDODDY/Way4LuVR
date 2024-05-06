// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestingVR/Public/NormalGigantAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNormalGigantAnimInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	TESTINGVR_API UClass* Z_Construct_UClass_ANormalGigant1_NoRegister();
	TESTINGVR_API UClass* Z_Construct_UClass_UNormalGigantAnimInstance();
	TESTINGVR_API UClass* Z_Construct_UClass_UNormalGigantAnimInstance_NoRegister();
	TESTINGVR_API UEnum* Z_Construct_UEnum_TestingVR_ENormalGigan1State();
	UPackage* Z_Construct_UPackage__Script_TestingVR();
// End Cross Module References
	DEFINE_FUNCTION(UNormalGigantAnimInstance::execAnimNotify_Attack1End)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_Attack1End();
		P_NATIVE_END;
	}
	void UNormalGigantAnimInstance::StaticRegisterNativesUNormalGigantAnimInstance()
	{
		UClass* Class = UNormalGigantAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimNotify_Attack1End", &UNormalGigantAnimInstance::execAnimNotify_Attack1End },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNormalGigantAnimInstance_AnimNotify_Attack1End_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNormalGigantAnimInstance_AnimNotify_Attack1End_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NormalGigantAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNormalGigantAnimInstance_AnimNotify_Attack1End_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNormalGigantAnimInstance, nullptr, "AnimNotify_Attack1End", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNormalGigantAnimInstance_AnimNotify_Attack1End_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNormalGigantAnimInstance_AnimNotify_Attack1End_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UNormalGigantAnimInstance_AnimNotify_Attack1End()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNormalGigantAnimInstance_AnimNotify_Attack1End_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNormalGigantAnimInstance);
	UClass* Z_Construct_UClass_UNormalGigantAnimInstance_NoRegister()
	{
		return UNormalGigantAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UNormalGigantAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_normalgigant_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_normalgigant;
		static const UECodeGen_Private::FBytePropertyParams NewProp_currentState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_currentState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNormalGigantAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TestingVR,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNormalGigantAnimInstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UNormalGigantAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNormalGigantAnimInstance_AnimNotify_Attack1End, "AnimNotify_Attack1End" }, // 2688230979
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNormalGigantAnimInstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNormalGigantAnimInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "NormalGigantAnimInstance.h" },
		{ "ModuleRelativePath", "Public/NormalGigantAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNormalGigantAnimInstance_Statics::NewProp_normalgigant_MetaData[] = {
		{ "Category", "MySettings" },
		{ "ModuleRelativePath", "Public/NormalGigantAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNormalGigantAnimInstance_Statics::NewProp_normalgigant = { "normalgigant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNormalGigantAnimInstance, normalgigant), Z_Construct_UClass_ANormalGigant1_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNormalGigantAnimInstance_Statics::NewProp_normalgigant_MetaData), Z_Construct_UClass_UNormalGigantAnimInstance_Statics::NewProp_normalgigant_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNormalGigantAnimInstance_Statics::NewProp_currentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNormalGigantAnimInstance_Statics::NewProp_currentState_MetaData[] = {
		{ "Category", "MySettings" },
		{ "ModuleRelativePath", "Public/NormalGigantAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNormalGigantAnimInstance_Statics::NewProp_currentState = { "currentState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNormalGigantAnimInstance, currentState), Z_Construct_UEnum_TestingVR_ENormalGigan1State, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNormalGigantAnimInstance_Statics::NewProp_currentState_MetaData), Z_Construct_UClass_UNormalGigantAnimInstance_Statics::NewProp_currentState_MetaData) }; // 3684291987
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNormalGigantAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNormalGigantAnimInstance_Statics::NewProp_normalgigant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNormalGigantAnimInstance_Statics::NewProp_currentState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNormalGigantAnimInstance_Statics::NewProp_currentState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNormalGigantAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNormalGigantAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNormalGigantAnimInstance_Statics::ClassParams = {
		&UNormalGigantAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNormalGigantAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNormalGigantAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNormalGigantAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UNormalGigantAnimInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNormalGigantAnimInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNormalGigantAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UNormalGigantAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNormalGigantAnimInstance.OuterSingleton, Z_Construct_UClass_UNormalGigantAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNormalGigantAnimInstance.OuterSingleton;
	}
	template<> TESTINGVR_API UClass* StaticClass<UNormalGigantAnimInstance>()
	{
		return UNormalGigantAnimInstance::StaticClass();
	}
	UNormalGigantAnimInstance::UNormalGigantAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNormalGigantAnimInstance);
	UNormalGigantAnimInstance::~UNormalGigantAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_Users_USER_Desktop_Way4LuVR_TestingVR_Source_TestingVR_Public_NormalGigantAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_USER_Desktop_Way4LuVR_TestingVR_Source_TestingVR_Public_NormalGigantAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNormalGigantAnimInstance, UNormalGigantAnimInstance::StaticClass, TEXT("UNormalGigantAnimInstance"), &Z_Registration_Info_UClass_UNormalGigantAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNormalGigantAnimInstance), 562463178U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_USER_Desktop_Way4LuVR_TestingVR_Source_TestingVR_Public_NormalGigantAnimInstance_h_161243385(TEXT("/Script/TestingVR"),
		Z_CompiledInDeferFile_FID_Users_USER_Desktop_Way4LuVR_TestingVR_Source_TestingVR_Public_NormalGigantAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_USER_Desktop_Way4LuVR_TestingVR_Source_TestingVR_Public_NormalGigantAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
