// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/DokuwikiCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDokuwikiCommandlet() {}
// Cross Module References
	LINTER_API UClass* Z_Construct_UClass_UDokuwikiCommandlet_NoRegister();
	LINTER_API UClass* Z_Construct_UClass_UDokuwikiCommandlet();
	LINTER_API UClass* Z_Construct_UClass_UBaseBlueprintOutputCommandlet();
	UPackage* Z_Construct_UPackage__Script_Linter();
// End Cross Module References
	void UDokuwikiCommandlet::StaticRegisterNativesUDokuwikiCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UDokuwikiCommandlet_NoRegister()
	{
		return UDokuwikiCommandlet::StaticClass();
	}
	UClass* Z_Construct_UClass_UDokuwikiCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBaseBlueprintOutputCommandlet,
				(UObject* (*)())Z_Construct_UPackage__Script_Linter,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "DokuwikiCommandlet.h" },
				{ "ModuleRelativePath", "Public/DokuwikiCommandlet.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDokuwikiCommandlet>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDokuwikiCommandlet::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000088u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDokuwikiCommandlet, 2962705412);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDokuwikiCommandlet(Z_Construct_UClass_UDokuwikiCommandlet, &UDokuwikiCommandlet::StaticClass, TEXT("/Script/Linter"), TEXT("UDokuwikiCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDokuwikiCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
