// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiWindowPlugin/Public/MWGameInstanceSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMWGameInstanceSubsystem() {}
// Cross Module References
	MULTIWINDOWPLUGIN_API UClass* Z_Construct_UClass_UMWGameInstanceSubsystem_NoRegister();
	MULTIWINDOWPLUGIN_API UClass* Z_Construct_UClass_UMWGameInstanceSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_MultiWindowPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UMWGameInstanceSubsystem::execSubCreateWindowByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SubCreateWindowByIndex(Z_Param_index);
		P_NATIVE_END;
	}
	void UMWGameInstanceSubsystem::StaticRegisterNativesUMWGameInstanceSubsystem()
	{
		UClass* Class = UMWGameInstanceSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SubCreateWindowByIndex", &UMWGameInstanceSubsystem::execSubCreateWindowByIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMWGameInstanceSubsystem_SubCreateWindowByIndex_Statics
	{
		struct MWGameInstanceSubsystem_eventSubCreateWindowByIndex_Parms
		{
			int32 index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMWGameInstanceSubsystem_SubCreateWindowByIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MWGameInstanceSubsystem_eventSubCreateWindowByIndex_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMWGameInstanceSubsystem_SubCreateWindowByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMWGameInstanceSubsystem_SubCreateWindowByIndex_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMWGameInstanceSubsystem_SubCreateWindowByIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MWGameInstanceSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMWGameInstanceSubsystem_SubCreateWindowByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMWGameInstanceSubsystem, nullptr, "SubCreateWindowByIndex", nullptr, nullptr, sizeof(MWGameInstanceSubsystem_eventSubCreateWindowByIndex_Parms), Z_Construct_UFunction_UMWGameInstanceSubsystem_SubCreateWindowByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMWGameInstanceSubsystem_SubCreateWindowByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMWGameInstanceSubsystem_SubCreateWindowByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMWGameInstanceSubsystem_SubCreateWindowByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMWGameInstanceSubsystem_SubCreateWindowByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMWGameInstanceSubsystem_SubCreateWindowByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMWGameInstanceSubsystem_NoRegister()
	{
		return UMWGameInstanceSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMWGameInstanceSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMWGameInstanceSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiWindowPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMWGameInstanceSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMWGameInstanceSubsystem_SubCreateWindowByIndex, "SubCreateWindowByIndex" }, // 416947741
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMWGameInstanceSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MWGameInstanceSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MWGameInstanceSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMWGameInstanceSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMWGameInstanceSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMWGameInstanceSubsystem_Statics::ClassParams = {
		&UMWGameInstanceSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMWGameInstanceSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMWGameInstanceSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMWGameInstanceSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMWGameInstanceSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMWGameInstanceSubsystem, 2821454330);
	template<> MULTIWINDOWPLUGIN_API UClass* StaticClass<UMWGameInstanceSubsystem>()
	{
		return UMWGameInstanceSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMWGameInstanceSubsystem(Z_Construct_UClass_UMWGameInstanceSubsystem, &UMWGameInstanceSubsystem::StaticClass, TEXT("/Script/MultiWindowPlugin"), TEXT("UMWGameInstanceSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMWGameInstanceSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
