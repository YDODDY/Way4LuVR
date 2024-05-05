// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestingVR/Public/FocusPointWidgetActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFocusPointWidgetActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	TESTINGVR_API UClass* Z_Construct_UClass_AFocusPointWidgetActor();
	TESTINGVR_API UClass* Z_Construct_UClass_AFocusPointWidgetActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TestingVR();
// End Cross Module References
	void AFocusPointWidgetActor::StaticRegisterNativesAFocusPointWidgetActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFocusPointWidgetActor);
	UClass* Z_Construct_UClass_AFocusPointWidgetActor_NoRegister()
	{
		return AFocusPointWidgetActor::StaticClass();
	}
	struct Z_Construct_UClass_AFocusPointWidgetActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFocusPointWidgetActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TestingVR,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFocusPointWidgetActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFocusPointWidgetActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FocusPointWidgetActor.h" },
		{ "ModuleRelativePath", "Public/FocusPointWidgetActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFocusPointWidgetActor_Statics::NewProp_meshComp_MetaData[] = {
		{ "Category", "FocusPointWidgetActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FocusPointWidgetActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFocusPointWidgetActor_Statics::NewProp_meshComp = { "meshComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFocusPointWidgetActor, meshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFocusPointWidgetActor_Statics::NewProp_meshComp_MetaData), Z_Construct_UClass_AFocusPointWidgetActor_Statics::NewProp_meshComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFocusPointWidgetActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFocusPointWidgetActor_Statics::NewProp_meshComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFocusPointWidgetActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFocusPointWidgetActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFocusPointWidgetActor_Statics::ClassParams = {
		&AFocusPointWidgetActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFocusPointWidgetActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFocusPointWidgetActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFocusPointWidgetActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AFocusPointWidgetActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFocusPointWidgetActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFocusPointWidgetActor()
	{
		if (!Z_Registration_Info_UClass_AFocusPointWidgetActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFocusPointWidgetActor.OuterSingleton, Z_Construct_UClass_AFocusPointWidgetActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFocusPointWidgetActor.OuterSingleton;
	}
	template<> TESTINGVR_API UClass* StaticClass<AFocusPointWidgetActor>()
	{
		return AFocusPointWidgetActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFocusPointWidgetActor);
	AFocusPointWidgetActor::~AFocusPointWidgetActor() {}
	struct Z_CompiledInDeferFile_FID_Users_USER_Desktop_Way4LuVR_TestingVR_Source_TestingVR_Public_FocusPointWidgetActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_USER_Desktop_Way4LuVR_TestingVR_Source_TestingVR_Public_FocusPointWidgetActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFocusPointWidgetActor, AFocusPointWidgetActor::StaticClass, TEXT("AFocusPointWidgetActor"), &Z_Registration_Info_UClass_AFocusPointWidgetActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFocusPointWidgetActor), 125656352U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_USER_Desktop_Way4LuVR_TestingVR_Source_TestingVR_Public_FocusPointWidgetActor_h_138948872(TEXT("/Script/TestingVR"),
		Z_CompiledInDeferFile_FID_Users_USER_Desktop_Way4LuVR_TestingVR_Source_TestingVR_Public_FocusPointWidgetActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_USER_Desktop_Way4LuVR_TestingVR_Source_TestingVR_Public_FocusPointWidgetActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
