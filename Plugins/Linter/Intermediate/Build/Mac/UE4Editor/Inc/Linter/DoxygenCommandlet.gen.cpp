// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/DoxygenCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoxygenCommandlet() {}
// Cross Module References
	LINTER_API UClass* Z_Construct_UClass_UDoxygenCommandlet_NoRegister();
	LINTER_API UClass* Z_Construct_UClass_UDoxygenCommandlet();
	LINTER_API UClass* Z_Construct_UClass_UBaseBlueprintOutputCommandlet();
	UPackage* Z_Construct_UPackage__Script_Linter();
// End Cross Module References
	void UDoxygenCommandlet::StaticRegisterNativesUDoxygenCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UDoxygenCommandlet_NoRegister()
	{
		return UDoxygenCommandlet::StaticClass();
	}
	UClass* Z_Construct_UClass_UDoxygenCommandlet()
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
				{ "IncludePath", "DoxygenCommandlet.h" },
				{ "ModuleRelativePath", "Public/DoxygenCommandlet.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDoxygenCommandlet>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDoxygenCommandlet::StaticClass,
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
	IMPLEMENT_CLASS(UDoxygenCommandlet, 1571031275);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDoxygenCommandlet(Z_Construct_UClass_UDoxygenCommandlet, &UDoxygenCommandlet::StaticClass, TEXT("/Script/Linter"), TEXT("UDoxygenCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoxygenCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
