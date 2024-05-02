// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestingVR_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TestingVR;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TestingVR()
	{
		if (!Z_Registration_Info_UPackage__Script_TestingVR.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TestingVR",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xF0785CA1,
				0xE1E97AFA,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TestingVR.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TestingVR.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TestingVR(Z_Construct_UPackage__Script_TestingVR, TEXT("/Script/TestingVR"), Z_Registration_Info_UPackage__Script_TestingVR, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF0785CA1, 0xE1E97AFA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
