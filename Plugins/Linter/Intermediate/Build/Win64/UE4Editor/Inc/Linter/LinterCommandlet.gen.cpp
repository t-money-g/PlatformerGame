// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LinterCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLinterCommandlet() {}
// Cross Module References
	LINTER_API UClass* Z_Construct_UClass_ULinterCommandlet_NoRegister();
	LINTER_API UClass* Z_Construct_UClass_ULinterCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_Linter();
// End Cross Module References
	void ULinterCommandlet::StaticRegisterNativesULinterCommandlet()
	{
	}
	UClass* Z_Construct_UClass_ULinterCommandlet_NoRegister()
	{
		return ULinterCommandlet::StaticClass();
	}
	UClass* Z_Construct_UClass_ULinterCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UCommandlet,
				(UObject* (*)())Z_Construct_UPackage__Script_Linter,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "LinterCommandlet.h" },
				{ "ModuleRelativePath", "Public/LinterCommandlet.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULinterCommandlet>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULinterCommandlet::StaticClass,
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
	IMPLEMENT_CLASS(ULinterCommandlet, 2317933136);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULinterCommandlet(Z_Construct_UClass_ULinterCommandlet, &ULinterCommandlet::StaticClass, TEXT("/Script/Linter"), TEXT("ULinterCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULinterCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
