// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestingVR/Public/PlayerKnifeActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerKnifeActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	TESTINGVR_API UClass* Z_Construct_UClass_APlayerKnifeActor();
	TESTINGVR_API UClass* Z_Construct_UClass_APlayerKnifeActor_NoRegister();
	TESTINGVR_API UClass* Z_Construct_UClass_ATestPlayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TestingVR();
// End Cross Module References
	void APlayerKnifeActor::StaticRegisterNativesAPlayerKnifeActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerKnifeActor);
	UClass* Z_Construct_UClass_APlayerKnifeActor_NoRegister()
	{
		return APlayerKnifeActor::StaticClass();
	}
	struct Z_Construct_UClass_APlayerKnifeActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boxComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_boxComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerKnifeActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TestingVR,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerKnifeActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerKnifeActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerKnifeActor.h" },
		{ "ModuleRelativePath", "Public/PlayerKnifeActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerKnifeActor_Statics::NewProp_boxComp_MetaData[] = {
		{ "Category", "PlayerKnifeActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerKnifeActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerKnifeActor_Statics::NewProp_boxComp = { "boxComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerKnifeActor, boxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerKnifeActor_Statics::NewProp_boxComp_MetaData), Z_Construct_UClass_APlayerKnifeActor_Statics::NewProp_boxComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerKnifeActor_Statics::NewProp_meshComp_MetaData[] = {
		{ "Category", "PlayerKnifeActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerKnifeActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerKnifeActor_Statics::NewProp_meshComp = { "meshComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerKnifeActor, meshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerKnifeActor_Statics::NewProp_meshComp_MetaData), Z_Construct_UClass_APlayerKnifeActor_Statics::NewProp_meshComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerKnifeActor_Statics::NewProp_player_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerKnifeActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerKnifeActor_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerKnifeActor, player), Z_Construct_UClass_ATestPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerKnifeActor_Statics::NewProp_player_MetaData), Z_Construct_UClass_APlayerKnifeActor_Statics::NewProp_player_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerKnifeActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerKnifeActor_Statics::NewProp_boxComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerKnifeActor_Statics::NewProp_meshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerKnifeActor_Statics::NewProp_player,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerKnifeActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerKnifeActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerKnifeActor_Statics::ClassParams = {
		&APlayerKnifeActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayerKnifeActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerKnifeActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerKnifeActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerKnifeActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerKnifeActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APlayerKnifeActor()
	{
		if (!Z_Registration_Info_UClass_APlayerKnifeActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerKnifeActor.OuterSingleton, Z_Construct_UClass_APlayerKnifeActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerKnifeActor.OuterSingleton;
	}
	template<> TESTINGVR_API UClass* StaticClass<APlayerKnifeActor>()
	{
		return APlayerKnifeActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerKnifeActor);
	APlayerKnifeActor::~APlayerKnifeActor() {}
	struct Z_CompiledInDeferFile_FID_Users_USER_Desktop_Way4LuVR_TestingVR_Source_TestingVR_Public_PlayerKnifeActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_USER_Desktop_Way4LuVR_TestingVR_Source_TestingVR_Public_PlayerKnifeActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerKnifeActor, APlayerKnifeActor::StaticClass, TEXT("APlayerKnifeActor"), &Z_Registration_Info_UClass_APlayerKnifeActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerKnifeActor), 4125182495U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_USER_Desktop_Way4LuVR_TestingVR_Source_TestingVR_Public_PlayerKnifeActor_h_3789425098(TEXT("/Script/TestingVR"),
		Z_CompiledInDeferFile_FID_Users_USER_Desktop_Way4LuVR_TestingVR_Source_TestingVR_Public_PlayerKnifeActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_USER_Desktop_Way4LuVR_TestingVR_Source_TestingVR_Public_PlayerKnifeActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
