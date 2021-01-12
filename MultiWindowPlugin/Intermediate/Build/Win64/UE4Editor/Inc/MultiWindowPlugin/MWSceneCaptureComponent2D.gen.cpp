// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiWindowPlugin/Public/MWSceneCaptureComponent2D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMWSceneCaptureComponent2D() {}
// Cross Module References
	MULTIWINDOWPLUGIN_API UClass* Z_Construct_UClass_UMWSceneCaptureComponent2D_NoRegister();
	MULTIWINDOWPLUGIN_API UClass* Z_Construct_UClass_UMWSceneCaptureComponent2D();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D();
	UPackage* Z_Construct_UPackage__Script_MultiWindowPlugin();
// End Cross Module References
	void UMWSceneCaptureComponent2D::StaticRegisterNativesUMWSceneCaptureComponent2D()
	{
	}
	UClass* Z_Construct_UClass_UMWSceneCaptureComponent2D_NoRegister()
	{
		return UMWSceneCaptureComponent2D::StaticClass();
	}
	struct Z_Construct_UClass_UMWSceneCaptureComponent2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TRTIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TRTIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMWSceneCaptureComponent2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneCaptureComponent2D,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiWindowPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMWSceneCaptureComponent2D_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Object Physics SceneComponent Collision Object Physics SceneComponent Collision Object Physics SceneComponent Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "MWSceneCaptureComponent2D.h" },
		{ "ModuleRelativePath", "Public/MWSceneCaptureComponent2D.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMWSceneCaptureComponent2D_Statics::NewProp_TRTIndex_MetaData[] = {
		{ "Category", "MultiWindow" },
		{ "ModuleRelativePath", "Public/MWSceneCaptureComponent2D.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMWSceneCaptureComponent2D_Statics::NewProp_TRTIndex = { "TRTIndex", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMWSceneCaptureComponent2D, TRTIndex), METADATA_PARAMS(Z_Construct_UClass_UMWSceneCaptureComponent2D_Statics::NewProp_TRTIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMWSceneCaptureComponent2D_Statics::NewProp_TRTIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMWSceneCaptureComponent2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMWSceneCaptureComponent2D_Statics::NewProp_TRTIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMWSceneCaptureComponent2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMWSceneCaptureComponent2D>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMWSceneCaptureComponent2D_Statics::ClassParams = {
		&UMWSceneCaptureComponent2D::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMWSceneCaptureComponent2D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMWSceneCaptureComponent2D_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMWSceneCaptureComponent2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMWSceneCaptureComponent2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMWSceneCaptureComponent2D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMWSceneCaptureComponent2D_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMWSceneCaptureComponent2D, 2720148828);
	template<> MULTIWINDOWPLUGIN_API UClass* StaticClass<UMWSceneCaptureComponent2D>()
	{
		return UMWSceneCaptureComponent2D::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMWSceneCaptureComponent2D(Z_Construct_UClass_UMWSceneCaptureComponent2D, &UMWSceneCaptureComponent2D::StaticClass, TEXT("/Script/MultiWindowPlugin"), TEXT("UMWSceneCaptureComponent2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMWSceneCaptureComponent2D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
