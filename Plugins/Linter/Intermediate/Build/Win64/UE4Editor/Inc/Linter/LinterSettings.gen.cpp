// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LinterSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLinterSettings() {}
// Cross Module References
	LINTER_API UScriptStruct* Z_Construct_UScriptStruct_FAssetTypeNameSetting();
	UPackage* Z_Construct_UPackage__Script_Linter();
	LINTER_API UClass* Z_Construct_UClass_ULinterSettings_NoRegister();
	LINTER_API UClass* Z_Construct_UClass_ULinterSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FAssetTypeNameSetting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LINTER_API uint32 Get_Z_Construct_UScriptStruct_FAssetTypeNameSetting_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetTypeNameSetting, Z_Construct_UPackage__Script_Linter(), TEXT("AssetTypeNameSetting"), sizeof(FAssetTypeNameSetting), Get_Z_Construct_UScriptStruct_FAssetTypeNameSetting_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetTypeNameSetting(FAssetTypeNameSetting::StaticStruct, TEXT("/Script/Linter"), TEXT("AssetTypeNameSetting"), false, nullptr, nullptr);
static struct FScriptStruct_Linter_StaticRegisterNativesFAssetTypeNameSetting
{
	FScriptStruct_Linter_StaticRegisterNativesFAssetTypeNameSetting()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssetTypeNameSetting")),new UScriptStruct::TCppStructOps<FAssetTypeNameSetting>);
	}
} ScriptStruct_Linter_StaticRegisterNativesFAssetTypeNameSetting;
	UScriptStruct* Z_Construct_UScriptStruct_FAssetTypeNameSetting()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetTypeNameSetting_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Linter();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetTypeNameSetting"), sizeof(FAssetTypeNameSetting), Get_Z_Construct_UScriptStruct_FAssetTypeNameSetting_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LinterSettings.h" },
				{ "ToolTip", "Class/Prefix/Suffix settings for Linter" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetTypeNameSetting>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Suffix_MetaData[] = {
				{ "Category", "Default" },
				{ "ModuleRelativePath", "Public/LinterSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Suffix = { UE4CodeGen_Private::EPropertyClass::Str, "Suffix", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAssetTypeNameSetting, Suffix), METADATA_PARAMS(NewProp_Suffix_MetaData, ARRAY_COUNT(NewProp_Suffix_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[] = {
				{ "Category", "Default" },
				{ "ModuleRelativePath", "Public/LinterSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix = { UE4CodeGen_Private::EPropertyClass::Str, "Prefix", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAssetTypeNameSetting, Prefix), METADATA_PARAMS(NewProp_Prefix_MetaData, ARRAY_COUNT(NewProp_Prefix_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Suffix,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Prefix,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Linter,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AssetTypeNameSetting",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAssetTypeNameSetting),
				alignof(FAssetTypeNameSetting),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetTypeNameSetting_CRC() { return 3385893762U; }
	void ULinterSettings::StaticRegisterNativesULinterSettings()
	{
	}
	UClass* Z_Construct_UClass_ULinterSettings_NoRegister()
	{
		return ULinterSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_ULinterSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Linter,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "LinterSettings.h" },
				{ "ModuleRelativePath", "Public/LinterSettings.h" },
				{ "ToolTip", "Implements the settings for the Linter plugin." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DokuwikiExportNamespace_MetaData[] = {
				{ "Category", "Documentation Export | Dokuwiki" },
				{ "ModuleRelativePath", "Public/LinterSettings.h" },
				{ "ToolTip", "Documentation Export Settings" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DokuwikiExportNamespace = { UE4CodeGen_Private::EPropertyClass::Str, "DokuwikiExportNamespace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(ULinterSettings, DokuwikiExportNamespace), METADATA_PARAMS(NewProp_DokuwikiExportNamespace_MetaData, ARRAY_COUNT(NewProp_DokuwikiExportNamespace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLevelsShouldHaveNoErrorsOrWarnings_MetaData[] = {
				{ "Category", "Checks | 6. Levels" },
				{ "DisplayName", "6.1 No Errors Or Warnings" },
				{ "ModuleRelativePath", "Public/LinterSettings.h" },
				{ "ToolTip", "Section 6 - Levels" },
			};
#endif
			auto NewProp_bLevelsShouldHaveNoErrorsOrWarnings_SetBit = [](void* Obj){ ((ULinterSettings*)Obj)->bLevelsShouldHaveNoErrorsOrWarnings = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLevelsShouldHaveNoErrorsOrWarnings = { UE4CodeGen_Private::EPropertyClass::Bool, "bLevelsShouldHaveNoErrorsOrWarnings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULinterSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLevelsShouldHaveNoErrorsOrWarnings_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLevelsShouldHaveNoErrorsOrWarnings_MetaData, ARRAY_COUNT(NewProp_bLevelsShouldHaveNoErrorsOrWarnings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bParticleSystemEmittersShouldBeNamed_MetaData[] = {
				{ "Category", "Checks | 5. Particle Systems" },
				{ "DisplayName", "5.1 Emitters Should Be Named" },
				{ "ModuleRelativePath", "Public/LinterSettings.h" },
				{ "ToolTip", "Section 5 - Particle Systems" },
			};
#endif
			auto NewProp_bParticleSystemEmittersShouldBeNamed_SetBit = [](void* Obj){ ((ULinterSettings*)Obj)->bParticleSystemEmittersShouldBeNamed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bParticleSystemEmittersShouldBeNamed = { UE4CodeGen_Private::EPropertyClass::Bool, "bParticleSystemEmittersShouldBeNamed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULinterSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bParticleSystemEmittersShouldBeNamed_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bParticleSystemEmittersShouldBeNamed_MetaData, ARRAY_COUNT(NewProp_bParticleSystemEmittersShouldBeNamed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStaticMeshValidUVs_MetaData[] = {
				{ "Category", "Checks | 4. Static Meshes" },
				{ "DisplayName", "4.1 UVs" },
				{ "ModuleRelativePath", "Public/LinterSettings.h" },
				{ "ToolTip", "Section 4 - Static Meshes" },
			};
#endif
			auto NewProp_bStaticMeshValidUVs_SetBit = [](void* Obj){ ((ULinterSettings*)Obj)->bStaticMeshValidUVs = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStaticMeshValidUVs = { UE4CodeGen_Private::EPropertyClass::Bool, "bStaticMeshValidUVs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULinterSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStaticMeshValidUVs_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bStaticMeshValidUVs_MetaData, ARRAY_COUNT(NewProp_bStaticMeshValidUVs_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBPPublicFunctionsShouldHaveDescription_MetaData[] = {
				{ "Category", "Checks | 3. Blueprints" },
				{ "DisplayName", "3.3.4 Public Functions Must Have Description" },
				{ "EditCondition", "bBPFunctionChecks" },
				{ "ModuleRelativePath", "Public/LinterSettings.h" },
			};
#endif
			auto NewProp_bBPPublicFunctionsShouldHaveDescription_SetBit = [](void* Obj){ ((ULinterSettings*)Obj)->bBPPublicFunctionsShouldHaveDescription = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBPPublicFunctionsShouldHaveDescription = { UE4CodeGen_Private::EPropertyClass::Bool, "bBPPublicFunctionsShouldHaveDescription", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULinterSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBPPublicFunctionsShouldHaveDescription_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bBPPublicFunctionsShouldHaveDescription_MetaData, ARRAY_COUNT(NewProp_bBPPublicFunctionsShouldHaveDescription_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionNodeLimit_MetaData[] = {
				{ "Category", "Checks | 3. Blueprints" },
				{ "DisplayName", "3.3.3 Function Node Limit" },
				{ "EditCondition", "bBPFunctionChecks" },
				{ "ModuleRelativePath", "Public/LinterSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_FunctionNodeLimit = { UE4CodeGen_Private::EPropertyClass::Int, "FunctionNodeLimit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(ULinterSettings, FunctionNodeLimit), METADATA_PARAMS(NewProp_FunctionNodeLimit_MetaData, ARRAY_COUNT(NewProp_FunctionNodeLimit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBPFunctionsShouldHaveReturnNodes_MetaData[] = {
				{ "Category", "Checks | 3. Blueprints" },
				{ "DisplayName", "3.3.2 Functions Should Have Return Nodes" },
				{ "EditCondition", "bBPFunctionChecks" },
				{ "ModuleRelativePath", "Public/LinterSettings.h" },
			};
#endif
			auto NewProp_bBPFunctionsShouldHaveReturnNodes_SetBit = [](void* Obj){ ((ULinterSettings*)Obj)->bBPFunctionsShouldHaveReturnNodes = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBPFunctionsShouldHaveReturnNodes = { UE4CodeGen_Private::EPropertyClass::Bool, "bBPFunctionsShouldHaveReturnNodes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULinterSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBPFunctionsShouldHaveReturnNodes_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bBPFunctionsShouldHaveReturnNodes_MetaData, ARRAY_COUNT(NewProp_bBPFunctionsShouldHaveReturnNodes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBPFunctionChecks_MetaData[] = {
				{ "Category", "Checks | 3. Blueprints" },
				{ "DisplayName", "3.3 Do Function Checks" },
				{ "ModuleRelativePath", "Public/LinterSettings.h" },
			};
#endif
			auto NewProp_bBPFunctionChecks_SetBit = [](void* Obj){ ((ULinterSettings*)Obj)->bBPFunctionChecks = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBPFunctionChecks = { UE4CodeGen_Private::EPropertyClass::Bool, "bBPFunctionChecks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULinterSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBPFunctionChecks_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bBPFunctionChecks_MetaData, ARRAY_COUNT(NewProp_bBPFunctionChecks_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBPVarSaveNoConfig_MetaData[] = {
				{ "Category", "Checks | 3. Blueprints" },
				{ "DisplayName", "3.2.7 No Config Variables" },
				{ "EditCondition", "bBPVariableChecks" },
				{ "ModuleRelativePath", "Public/LinterSettings.h" },
			};
#endif
			auto NewProp_bBPVarSaveNoConfig_SetBit = [](void* Obj){ ((ULinterSettings*)Obj)->bBPVarSaveNoConfig = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBPVarSaveNoConfig = { UE4CodeGen_Private::EPropertyClass::Bool, "bBPVarSaveNoConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULinterSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBPVarSaveNoConfig_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bBPVarSaveNoConfig_MetaData, ARRAY_COUNT(NewProp_bBPVarSaveNoConfig_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBPVarEditableCategories_MetaData[] = {
				{ "Category", "Checks | 3. Blueprints" },
				{ "DisplayName", "3.3 Categorize Editable Variables In 5+ Var Classes" },
				{ "EditCondition", "bBPVariableChecks" },
				{ "ModuleRelativePath", "Public/LinterSettings.h" },
			};
#endif
			auto NewProp_bBPVarEditableCategories_SetBit = [](void* Obj){ ((ULinterSettings*)Obj)->bBPVarEditableCategories = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBPVarEditableCategories = { UE4CodeGen_Private::EPropertyClass::Bool, "bBPVarEditableCategories", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULinterSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBPVarEditableCategories_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bBPVarEditableCategories_MetaData, ARRAY_COUNT(NewProp_bBPVarEditableCategories_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBPVarEditableMustHaveTooltip_MetaData[] = {
				{ "Category", "Checks | 3. Blueprints" },
				{ "DisplayName", "3.2.2.1 Editable Variables Must Have Tooltips" },
				{ "EditCondition", "bBPVariableChecks" },
				{ "ModuleRelativePath", "Public/LinterSettings.h" },
			};
#endif
			auto NewProp_bBPVarEditableMustHaveTooltip_SetBit = [](void* Obj){ ((ULinterSettings*)Obj)->bBPVarEditableMustHaveTooltip = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBPVarEditableMustHaveTooltip = { UE4CodeGen_Private::EPropertyClass::Bool, "bBPVarEditableMustHaveTooltip", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULinterSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBPVarEditableMustHaveTooltip_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bBPVarEditableMustHaveTooltip_MetaData, ARRAY_COUNT(NewProp_bBPVarEditableMustHaveTooltip_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBPVarExposeOnSpawnEditable_MetaData[] = {
				{ "Category", "Checks | 3. Blueprints" },
				{ "DisplayName", "3.2.2 Expose On Spawn Must Be Editable" },
				{ "EditCondition", "bBPVariableChecks" },
				{ "ModuleRelativePath", "Public/LinterSettings.h" },
			};
#endif
			auto NewProp_bBPVarExposeOnSpawnEditable_SetBit = [](void* Obj){ ((ULinterSettings*)Obj)->bBPVarExposeOnSpawnEditable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBPVarExposeOnSpawnEditable = { UE4CodeGen_Private::EPropertyClass::Bool, "bBPVarExposeOnSpawnEditable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULinterSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBPVarExposeOnSpawnEditable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bBPVarExposeOnSpawnEditable_MetaData, ARRAY_COUNT(NewProp_bBPVarExposeOnSpawnEditable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBPVarArrayPlurals_MetaData[] = {
				{ "Category", "Checks | 3. Blueprints" },
				{ "DisplayName", "3.2.1.8 Arrays Should Be Pural Nouns" },
				{ "EditCondition", "bBPVariableChecks" },
				{ "ModuleRelativePath", "Public/LinterSettings.h" },
			};
#endif
			auto NewProp_bBPVarArrayPlurals_SetBit = [](void* Obj){ ((ULinterSettings*)Obj)->bBPVarArrayPlurals = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBPVarArrayPlurals = { UE4CodeGen_Private::EPropertyClass::Bool, "bBPVarArrayPlurals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULinterSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBPVarArrayPlurals_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bBPVarArrayPlurals_MetaData, ARRAY_COUNT(NewProp_bBPVarArrayPlurals_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBPVarAtomicInclusion_MetaData[] = {
				{ "Category", "Checks | 3. Blueprints" },
				{ "DisplayName", "3.2.1.6 Do Not Include Atomic Type Names" },
				{ "EditCondition", "bBPVariableChecks" },
				{ "ModuleRelativePath", "Public/LinterSettings.h" },
			};
#endif
			auto NewProp_bBPVarAtomicInclusion_SetBit = [](void* Obj){ ((ULinterSettings*)Obj)->bBPVarAtomicInclusion = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBPVarAtomicInclusion = { UE4CodeGen_Private::EPropertyClass::Bool, "bBPVarAtomicInclusion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULinterSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBPVarAtomicInclusion_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bBPVarAtomicInclusion_MetaData, ARRAY_COUNT(NewProp_bBPVarAtomicInclusion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBPVarBoolIsQuestion_MetaData[] = {
				{ "Category", "Checks | 3. Blueprints" },
				{ "DisplayName", "3.2.1.4.1 Boolean 'Is' Check" },
				{ "EditCondition", "bBPVariableChecks" },
				{ "ModuleRelativePath", "Public/LinterSettings.h" },
			};
#endif
			auto NewProp_bBPVarBoolIsQuestion_SetBit = [](void* Obj){ ((ULinterSettings*)Obj)->bBPVarBoolIsQuestion = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBPVarBoolIsQuestion = { UE4CodeGen_Private::EPropertyClass::Bool, "bBPVarBoolIsQuestion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULinterSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBPVarBoolIsQuestion_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bBPVarBoolIsQuestion_MetaData, ARRAY_COUNT(NewProp_bBPVarBoolIsQuestion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBPVarBoolPrefix_MetaData[] = {
				{ "Category", "Checks | 3. Blueprints" },
				{ "DisplayName", "3.2.1.3 Boolean 'b' Prefix" },
				{ "EditCondition", "bBPVariableChecks" },
				{ "ModuleRelativePath", "Public/LinterSettings.h" },
			};
#endif
			auto NewProp_bBPVarBoolPrefix_SetBit = [](void* Obj){ ((ULinterSettings*)Obj)->bBPVarBoolPrefix = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBPVarBoolPrefix = { UE4CodeGen_Private::EPropertyClass::Bool, "bBPVarBoolPrefix", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULinterSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBPVarBoolPrefix_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bBPVarBoolPrefix_MetaData, ARRAY_COUNT(NewProp_bBPVarBoolPrefix_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBPVarPascalCase_MetaData[] = {
				{ "Category", "Checks | 3. Blueprints" },
				{ "DisplayName", "3.2.1.2 Pascal Case" },
				{ "EditCondition", "bBPVariableChecks" },
				{ "ModuleRelativePath", "Public/LinterSettings.h" },
			};
#endif
			auto NewProp_bBPVarPascalCase_SetBit = [](void* Obj){ ((ULinterSettings*)Obj)->bBPVarPascalCase = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBPVarPascalCase = { UE4CodeGen_Private::EPropertyClass::Bool, "bBPVarPascalCase", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULinterSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBPVarPascalCase_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bBPVarPascalCase_MetaData, ARRAY_COUNT(NewProp_bBPVarPascalCase_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBPVariableChecks_MetaData[] = {
				{ "Category", "Checks | 3. Blueprints" },
				{ "DisplayName", "3.2 Do Variable Checks" },
				{ "ModuleRelativePath", "Public/LinterSettings.h" },
			};
#endif
			auto NewProp_bBPVariableChecks_SetBit = [](void* Obj){ ((ULinterSettings*)Obj)->bBPVariableChecks = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBPVariableChecks = { UE4CodeGen_Private::EPropertyClass::Bool, "bBPVariableChecks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULinterSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBPVariableChecks_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bBPVariableChecks_MetaData, ARRAY_COUNT(NewProp_bBPVariableChecks_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBPCompiles_MetaData[] = {
				{ "Category", "Checks | 3. Blueprints" },
				{ "DisplayName", "3.1 Compiles Successfully" },
				{ "ModuleRelativePath", "Public/LinterSettings.h" },
				{ "ToolTip", "Section 3 - Blueprints" },
			};
#endif
			auto NewProp_bBPCompiles_SetBit = [](void* Obj){ ((ULinterSettings*)Obj)->bBPCompiles = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBPCompiles = { UE4CodeGen_Private::EPropertyClass::Bool, "bBPCompiles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULinterSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBPCompiles_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bBPCompiles_MetaData, ARRAY_COUNT(NewProp_bBPCompiles_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoFolderNameAssetTypeRedundantCheck_MetaData[] = {
				{ "Category", "Checks | 2. Content Directory Structure" },
				{ "DisplayName", "2.6.2 Creating a folder named Meshes, Textures, or Materials is redundant." },
				{ "EditCondition", "bDoFolderNameChecks" },
				{ "ModuleRelativePath", "Public/LinterSettings.h" },
			};
#endif
			auto NewProp_bDoFolderNameAssetTypeRedundantCheck_SetBit = [](void* Obj){ ((ULinterSettings*)Obj)->bDoFolderNameAssetTypeRedundantCheck = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoFolderNameAssetTypeRedundantCheck = { UE4CodeGen_Private::EPropertyClass::Bool, "bDoFolderNameAssetTypeRedundantCheck", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULinterSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDoFolderNameAssetTypeRedundantCheck_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDoFolderNameAssetTypeRedundantCheck_MetaData, ARRAY_COUNT(NewProp_bDoFolderNameAssetTypeRedundantCheck_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoFolderNameAssetsRedundantCheck_MetaData[] = {
				{ "Category", "Checks | 2. Content Directory Structure" },
				{ "DisplayName", "2.6.1 Creating a folder named Assets is redundant." },
				{ "EditCondition", "bDoFolderNameChecks" },
				{ "ModuleRelativePath", "Public/LinterSettings.h" },
			};
#endif
			auto NewProp_bDoFolderNameAssetsRedundantCheck_SetBit = [](void* Obj){ ((ULinterSettings*)Obj)->bDoFolderNameAssetsRedundantCheck = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoFolderNameAssetsRedundantCheck = { UE4CodeGen_Private::EPropertyClass::Bool, "bDoFolderNameAssetsRedundantCheck", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULinterSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDoFolderNameAssetsRedundantCheck_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDoFolderNameAssetsRedundantCheck_MetaData, ARRAY_COUNT(NewProp_bDoFolderNameAssetsRedundantCheck_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMapsInMapsFolder_MetaData[] = {
				{ "Category", "Checks | 2. Content Directory Structure" },
				{ "DisplayName", "2.4 All Map Files Belong In A Folder Called Maps" },
				{ "EditCondition", "bDoFolderNameChecks" },
				{ "ModuleRelativePath", "Public/LinterSettings.h" },
			};
#endif
			auto NewProp_bMapsInMapsFolder_SetBit = [](void* Obj){ ((ULinterSettings*)Obj)->bMapsInMapsFolder = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMapsInMapsFolder = { UE4CodeGen_Private::EPropertyClass::Bool, "bMapsInMapsFolder", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULinterSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bMapsInMapsFolder_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bMapsInMapsFolder_MetaData, ARRAY_COUNT(NewProp_bMapsInMapsFolder_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseTopLevelFolderForAssets_MetaData[] = {
				{ "Category", "Checks | 2. Content Directory Structure" },
				{ "DisplayName", "2.2 Use A Top Level Folder For Project Specific Assets" },
				{ "EditCondition", "bDoFolderNameChecks" },
				{ "ModuleRelativePath", "Public/LinterSettings.h" },
			};
#endif
			auto NewProp_bUseTopLevelFolderForAssets_SetBit = [](void* Obj){ ((ULinterSettings*)Obj)->bUseTopLevelFolderForAssets = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseTopLevelFolderForAssets = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseTopLevelFolderForAssets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULinterSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseTopLevelFolderForAssets_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseTopLevelFolderForAssets_MetaData, ARRAY_COUNT(NewProp_bUseTopLevelFolderForAssets_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoFolderNameUnicodeCheck_MetaData[] = {
				{ "Category", "Checks | 2. Content Directory Structure" },
				{ "DisplayName", "2.1.3 Never Use Unicode Characters And Other Symbols" },
				{ "EditCondition", "bDoFolderNameChecks" },
				{ "ModuleRelativePath", "Public/LinterSettings.h" },
			};
#endif
			auto NewProp_bDoFolderNameUnicodeCheck_SetBit = [](void* Obj){ ((ULinterSettings*)Obj)->bDoFolderNameUnicodeCheck = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoFolderNameUnicodeCheck = { UE4CodeGen_Private::EPropertyClass::Bool, "bDoFolderNameUnicodeCheck", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULinterSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDoFolderNameUnicodeCheck_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDoFolderNameUnicodeCheck_MetaData, ARRAY_COUNT(NewProp_bDoFolderNameUnicodeCheck_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoFolderNameSpaceCheck_MetaData[] = {
				{ "Category", "Checks | 2. Content Directory Structure" },
				{ "DisplayName", "2.1.2 Never Use Spaces" },
				{ "EditCondition", "bDoFolderNameChecks" },
				{ "ModuleRelativePath", "Public/LinterSettings.h" },
			};
#endif
			auto NewProp_bDoFolderNameSpaceCheck_SetBit = [](void* Obj){ ((ULinterSettings*)Obj)->bDoFolderNameSpaceCheck = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoFolderNameSpaceCheck = { UE4CodeGen_Private::EPropertyClass::Bool, "bDoFolderNameSpaceCheck", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULinterSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDoFolderNameSpaceCheck_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDoFolderNameSpaceCheck_MetaData, ARRAY_COUNT(NewProp_bDoFolderNameSpaceCheck_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoFolderNamePascalCaseCheck_MetaData[] = {
				{ "Category", "Checks | 2. Content Directory Structure" },
				{ "DisplayName", "2.1.1 Always Use PascalCase" },
				{ "EditCondition", "bDoFolderNameChecks" },
				{ "ModuleRelativePath", "Public/LinterSettings.h" },
			};
#endif
			auto NewProp_bDoFolderNamePascalCaseCheck_SetBit = [](void* Obj){ ((ULinterSettings*)Obj)->bDoFolderNamePascalCaseCheck = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoFolderNamePascalCaseCheck = { UE4CodeGen_Private::EPropertyClass::Bool, "bDoFolderNamePascalCaseCheck", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULinterSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDoFolderNamePascalCaseCheck_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDoFolderNamePascalCaseCheck_MetaData, ARRAY_COUNT(NewProp_bDoFolderNamePascalCaseCheck_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoFolderNameChecks_MetaData[] = {
				{ "Category", "Checks | 2. Content Directory Structure" },
				{ "DisplayName", "2.1 Do Folder Name Checks" },
				{ "ModuleRelativePath", "Public/LinterSettings.h" },
				{ "ToolTip", "Section 2 - Structure" },
			};
#endif
			auto NewProp_bDoFolderNameChecks_SetBit = [](void* Obj){ ((ULinterSettings*)Obj)->bDoFolderNameChecks = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoFolderNameChecks = { UE4CodeGen_Private::EPropertyClass::Bool, "bDoFolderNameChecks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULinterSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDoFolderNameChecks_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDoFolderNameChecks_MetaData, ARRAY_COUNT(NewProp_bDoFolderNameChecks_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoAssetNamingConventionChecks_MetaData[] = {
				{ "Category", "Checks | 1. Asset Naming Conventions" },
				{ "ModuleRelativePath", "Public/LinterSettings.h" },
				{ "ToolTip", "Section 1 - Asset Names" },
			};
#endif
			auto NewProp_bDoAssetNamingConventionChecks_SetBit = [](void* Obj){ ((ULinterSettings*)Obj)->bDoAssetNamingConventionChecks = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoAssetNamingConventionChecks = { UE4CodeGen_Private::EPropertyClass::Bool, "bDoAssetNamingConventionChecks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULinterSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDoAssetNamingConventionChecks_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDoAssetNamingConventionChecks_MetaData, ARRAY_COUNT(NewProp_bDoAssetNamingConventionChecks_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MacroLibrarySetting_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/LinterSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MacroLibrarySetting = { UE4CodeGen_Private::EPropertyClass::Struct, "MacroLibrarySetting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(ULinterSettings, MacroLibrarySetting), Z_Construct_UScriptStruct_FAssetTypeNameSetting, METADATA_PARAMS(NewProp_MacroLibrarySetting_MetaData, ARRAY_COUNT(NewProp_MacroLibrarySetting_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessMaterialSetting_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/LinterSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostProcessMaterialSetting = { UE4CodeGen_Private::EPropertyClass::Struct, "PostProcessMaterialSetting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(ULinterSettings, PostProcessMaterialSetting), Z_Construct_UScriptStruct_FAssetTypeNameSetting, METADATA_PARAMS(NewProp_PostProcessMaterialSetting_MetaData, ARRAY_COUNT(NewProp_PostProcessMaterialSetting_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetNameSettings_MetaData[] = {
				{ "AllowAbstract", "" },
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/LinterSettings.h" },
				{ "ToolTip", "Enables configuration of prefixes and suffixes for linting" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_AssetNameSettings = { UE4CodeGen_Private::EPropertyClass::Map, "AssetNameSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(ULinterSettings, AssetNameSettings), METADATA_PARAMS(NewProp_AssetNameSettings_MetaData, ARRAY_COUNT(NewProp_AssetNameSettings_MetaData)) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_AssetNameSettings_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Class, "AssetNameSettings_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004001, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetNameSettings_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "AssetNameSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004001, 1, nullptr, 1, Z_Construct_UScriptStruct_FAssetTypeNameSetting, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DokuwikiExportNamespace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLevelsShouldHaveNoErrorsOrWarnings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bParticleSystemEmittersShouldBeNamed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStaticMeshValidUVs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBPPublicFunctionsShouldHaveDescription,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FunctionNodeLimit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBPFunctionsShouldHaveReturnNodes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBPFunctionChecks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBPVarSaveNoConfig,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBPVarEditableCategories,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBPVarEditableMustHaveTooltip,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBPVarExposeOnSpawnEditable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBPVarArrayPlurals,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBPVarAtomicInclusion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBPVarBoolIsQuestion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBPVarBoolPrefix,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBPVarPascalCase,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBPVariableChecks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBPCompiles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDoFolderNameAssetTypeRedundantCheck,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDoFolderNameAssetsRedundantCheck,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bMapsInMapsFolder,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseTopLevelFolderForAssets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDoFolderNameUnicodeCheck,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDoFolderNameSpaceCheck,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDoFolderNamePascalCaseCheck,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDoFolderNameChecks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDoAssetNamingConventionChecks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MacroLibrarySetting,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PostProcessMaterialSetting,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetNameSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetNameSettings_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetNameSettings_ValueProp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULinterSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULinterSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000086u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Linter",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULinterSettings, 2938456289);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULinterSettings(Z_Construct_UClass_ULinterSettings, &ULinterSettings::StaticClass, TEXT("/Script/Linter"), TEXT("ULinterSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULinterSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
