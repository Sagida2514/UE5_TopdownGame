// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/UI/WidgetController/AuraWidgetController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraWidgetController() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UAuraWidgetController();
	AURA_API UClass* Z_Construct_UClass_UAuraWidgetController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void UAuraWidgetController::StaticRegisterNativesUAuraWidgetController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAuraWidgetController);
	UClass* Z_Construct_UClass_UAuraWidgetController_NoRegister()
	{
		return UAuraWidgetController::StaticClass();
	}
	struct Z_Construct_UClass_UAuraWidgetController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAuraWidgetController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraWidgetController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraWidgetController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/WidgetController/AuraWidgetController.h" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/AuraWidgetController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAuraWidgetController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraWidgetController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraWidgetController_Statics::ClassParams = {
		&UAuraWidgetController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraWidgetController_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraWidgetController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAuraWidgetController()
	{
		if (!Z_Registration_Info_UClass_UAuraWidgetController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraWidgetController.OuterSingleton, Z_Construct_UClass_UAuraWidgetController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAuraWidgetController.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UAuraWidgetController>()
	{
		return UAuraWidgetController::StaticClass();
	}
	UAuraWidgetController::UAuraWidgetController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraWidgetController);
	UAuraWidgetController::~UAuraWidgetController() {}
	struct Z_CompiledInDeferFile_FID_Work_UE5_TopdownGame_Aura_Source_Aura_Public_UI_WidgetController_AuraWidgetController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_UE5_TopdownGame_Aura_Source_Aura_Public_UI_WidgetController_AuraWidgetController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAuraWidgetController, UAuraWidgetController::StaticClass, TEXT("UAuraWidgetController"), &Z_Registration_Info_UClass_UAuraWidgetController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraWidgetController), 3257582546U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_UE5_TopdownGame_Aura_Source_Aura_Public_UI_WidgetController_AuraWidgetController_h_212884758(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Work_UE5_TopdownGame_Aura_Source_Aura_Public_UI_WidgetController_AuraWidgetController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_UE5_TopdownGame_Aura_Source_Aura_Public_UI_WidgetController_AuraWidgetController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
