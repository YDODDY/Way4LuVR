// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestingVR/Public/LeftFocusPointWidgetActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeftFocusPointWidgetActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	TESTINGVR_API UClass* Z_Construct_UClass_ALeftFocusPointWidgetActor();
	TESTINGVR_API UClass* Z_Construct_UClass_ALeftFocusPointWidgetActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TestingVR();
// End Cross Module References
	void ALeftFocusPointWidgetActor::StaticRegisterNativesALeftFocusPointWidgetActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALeftFocusPointWidgetActor);
	UClass* Z_Construct_UClass_ALeftFocusPointWidgetActor_NoRegister()
	{
		return ALeftFocusPointWidgetActor::StaticClass();
	}
	struct Z_Construct_UClass_ALeftFocusPointWidgetActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rootComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_rootComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALeftFocusPointWidgetActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TestingVR,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALeftFocusPointWidgetActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALeftFocusPointWidgetActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LeftFocusPointWidgetActor.h" },
		{ "ModuleRelativePath", "Public/LeftFocusPointWidgetActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALeftFocusPointWidgetActor_Statics::NewProp_meshComp_MetaData[] = {
		{ "Category", "LeftFocusPointWidgetActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LeftFocusPointWidgetActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALeftFocusPointWidgetActor_Statics::NewProp_meshComp = { "meshComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALeftFocusPointWidgetActor, meshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALeftFocusPointWidgetActor_Statics::NewProp_meshComp_MetaData), Z_Construct_UClass_ALeftFocusPointWidgetActor_Statics::NewProp_meshComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALeftFocusPointWidgetActor_Statics::NewProp_rootComp_MetaData[] = {
		{ "Category", "LeftFocusPointWidgetActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LeftFocusPointWidgetActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALeftFocusPointWidgetActor_Statics::NewProp_rootComp = { "rootComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALeftFocusPointWidgetActor, rootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALeftFocusPointWidgetActor_Statics::NewProp_rootComp_MetaData), Z_Construct_UClass_ALeftFocusPointWidgetActor_Statics::NewProp_rootComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALeftFocusPointWidgetActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeftFocusPointWidgetActor_Statics::NewProp_meshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeftFocusPointWidgetActor_Statics::NewProp_rootComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALeftFocusPointWidgetActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALeftFocusPointWidgetActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALeftFocusPointWidgetActor_Statics::ClassParams = {
		&ALeftFocusPointWidgetActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALeftFocusPointWidgetActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALeftFocusPointWidgetActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALeftFocusPointWidgetActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ALeftFocusPointWidgetActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALeftFocusPointWidgetActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ALeftFocusPointWidgetActor()
	{
		if (!Z_Registration_Info_UClass_ALeftFocusPointWidgetActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALeftFocusPointWidgetActor.OuterSingleton, Z_Construct_UClass_ALeftFocusPointWidgetActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALeftFocusPointWidgetActor.OuterSingleton;
	}
	template<> TESTINGVR_API UClass* StaticClass<ALeftFocusPointWidgetActor>()
	{
		return ALeftFocusPointWidgetActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALeftFocusPointWidgetActor);
	ALeftFocusPointWidgetActor::~ALeftFocusPointWidgetActor() {}
	struct Z_CompiledInDeferFile_FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_Public_LeftFocusPointWidgetActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_Public_LeftFocusPointWidgetActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALeftFocusPointWidgetActor, ALeftFocusPointWidgetActor::StaticClass, TEXT("ALeftFocusPointWidgetActor"), &Z_Registration_Info_UClass_ALeftFocusPointWidgetActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALeftFocusPointWidgetActor), 2786328536U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_Public_LeftFocusPointWidgetActor_h_2642585046(TEXT("/Script/TestingVR"),
		Z_CompiledInDeferFile_FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_Public_LeftFocusPointWidgetActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_admin_Desktop_VRProject_Way4LuVR_TestingVR_Source_TestingVR_Public_LeftFocusPointWidgetActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
