// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestingVR/Public/NormalGigant1AIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNormalGigant1AIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	TESTINGVR_API UClass* Z_Construct_UClass_ANormalGigant1_NoRegister();
	TESTINGVR_API UClass* Z_Construct_UClass_ANormalGigant1AIController();
	TESTINGVR_API UClass* Z_Construct_UClass_ANormalGigant1AIController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TestingVR();
// End Cross Module References
	DEFINE_FUNCTION(ANormalGigant1AIController::execStandStill)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StandStill();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANormalGigant1AIController::execRandomPatrol)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RandomPatrol();
		P_NATIVE_END;
	}
	void ANormalGigant1AIController::StaticRegisterNativesANormalGigant1AIController()
	{
		UClass* Class = ANormalGigant1AIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RandomPatrol", &ANormalGigant1AIController::execRandomPatrol },
			{ "StandStill", &ANormalGigant1AIController::execStandStill },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANormalGigant1AIController_RandomPatrol_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1AIController_RandomPatrol_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NormalGigant1AIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANormalGigant1AIController_RandomPatrol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANormalGigant1AIController, nullptr, "RandomPatrol", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1AIController_RandomPatrol_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANormalGigant1AIController_RandomPatrol_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ANormalGigant1AIController_RandomPatrol()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANormalGigant1AIController_RandomPatrol_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANormalGigant1AIController_StandStill_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANormalGigant1AIController_StandStill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NormalGigant1AIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANormalGigant1AIController_StandStill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANormalGigant1AIController, nullptr, "StandStill", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANormalGigant1AIController_StandStill_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANormalGigant1AIController_StandStill_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ANormalGigant1AIController_StandStill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANormalGigant1AIController_StandStill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANormalGigant1AIController);
	UClass* Z_Construct_UClass_ANormalGigant1AIController_NoRegister()
	{
		return ANormalGigant1AIController::StaticClass();
	}
	struct Z_Construct_UClass_ANormalGigant1AIController_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANormalGigant1AIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_TestingVR,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1AIController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ANormalGigant1AIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANormalGigant1AIController_RandomPatrol, "RandomPatrol" }, // 471981307
		{ &Z_Construct_UFunction_ANormalGigant1AIController_StandStill, "StandStill" }, // 405383332
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1AIController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANormalGigant1AIController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "NormalGigant1AIController.h" },
		{ "ModuleRelativePath", "Public/NormalGigant1AIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANormalGigant1AIController_Statics::NewProp_normalgigant_MetaData[] = {
		{ "Category", "MySettings" },
		{ "ModuleRelativePath", "Public/NormalGigant1AIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANormalGigant1AIController_Statics::NewProp_normalgigant = { "normalgigant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANormalGigant1AIController, normalgigant), Z_Construct_UClass_ANormalGigant1_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1AIController_Statics::NewProp_normalgigant_MetaData), Z_Construct_UClass_ANormalGigant1AIController_Statics::NewProp_normalgigant_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANormalGigant1AIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANormalGigant1AIController_Statics::NewProp_normalgigant,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANormalGigant1AIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANormalGigant1AIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANormalGigant1AIController_Statics::ClassParams = {
		&ANormalGigant1AIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANormalGigant1AIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1AIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1AIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ANormalGigant1AIController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANormalGigant1AIController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ANormalGigant1AIController()
	{
		if (!Z_Registration_Info_UClass_ANormalGigant1AIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANormalGigant1AIController.OuterSingleton, Z_Construct_UClass_ANormalGigant1AIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANormalGigant1AIController.OuterSingleton;
	}
	template<> TESTINGVR_API UClass* StaticClass<ANormalGigant1AIController>()
	{
		return ANormalGigant1AIController::StaticClass();
	}
	ANormalGigant1AIController::ANormalGigant1AIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANormalGigant1AIController);
	ANormalGigant1AIController::~ANormalGigant1AIController() {}
	struct Z_CompiledInDeferFile_FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_Public_NormalGigant1AIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_Public_NormalGigant1AIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANormalGigant1AIController, ANormalGigant1AIController::StaticClass, TEXT("ANormalGigant1AIController"), &Z_Registration_Info_UClass_ANormalGigant1AIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANormalGigant1AIController), 1795033172U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_Public_NormalGigant1AIController_h_2986523520(TEXT("/Script/TestingVR"),
		Z_CompiledInDeferFile_FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_Public_NormalGigant1AIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_Public_NormalGigant1AIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
