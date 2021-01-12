// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiWindowPlugin/Public/WindowControllerActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindowControllerActor() {}
// Cross Module References
	MULTIWINDOWPLUGIN_API UClass* Z_Construct_UClass_AWindowControllerActor_NoRegister();
	MULTIWINDOWPLUGIN_API UClass* Z_Construct_UClass_AWindowControllerActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MultiWindowPlugin();
// End Cross Module References
	DEFINE_FUNCTION(AWindowControllerActor::execCreateWindowByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateWindowByIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	void AWindowControllerActor::StaticRegisterNativesAWindowControllerActor()
	{
		UClass* Class = AWindowControllerActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateWindowByIndex", &AWindowControllerActor::execCreateWindowByIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWindowControllerActor_CreateWindowByIndex_Statics
	{
		struct WindowControllerActor_eventCreateWindowByIndex_Parms
		{
			int32 Index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWindowControllerActor_CreateWindowByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WindowControllerActor_eventCreateWindowByIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWindowControllerActor_CreateWindowByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWindowControllerActor_CreateWindowByIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWindowControllerActor_CreateWindowByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "WindowController" },
		{ "ModuleRelativePath", "Public/WindowControllerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWindowControllerActor_CreateWindowByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWindowControllerActor, nullptr, "CreateWindowByIndex", nullptr, nullptr, sizeof(WindowControllerActor_eventCreateWindowByIndex_Parms), Z_Construct_UFunction_AWindowControllerActor_CreateWindowByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindowControllerActor_CreateWindowByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWindowControllerActor_CreateWindowByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindowControllerActor_CreateWindowByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWindowControllerActor_CreateWindowByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWindowControllerActor_CreateWindowByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWindowControllerActor_NoRegister()
	{
		return AWindowControllerActor::StaticClass();
	}
	struct Z_Construct_UClass_AWindowControllerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWindowControllerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiWindowPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWindowControllerActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWindowControllerActor_CreateWindowByIndex, "CreateWindowByIndex" }, // 586569748
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindowControllerActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WindowControllerActor.h" },
		{ "ModuleRelativePath", "Public/WindowControllerActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWindowControllerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWindowControllerActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWindowControllerActor_Statics::ClassParams = {
		&AWindowControllerActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWindowControllerActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWindowControllerActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWindowControllerActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWindowControllerActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWindowControllerActor, 2741058355);
	template<> MULTIWINDOWPLUGIN_API UClass* StaticClass<AWindowControllerActor>()
	{
		return AWindowControllerActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWindowControllerActor(Z_Construct_UClass_AWindowControllerActor, &AWindowControllerActor::StaticClass, TEXT("/Script/MultiWindowPlugin"), TEXT("AWindowControllerActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWindowControllerActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
