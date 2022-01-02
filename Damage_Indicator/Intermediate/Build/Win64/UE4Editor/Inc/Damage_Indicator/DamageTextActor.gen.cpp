// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Damage_Indicator/Public/DamageTextActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageTextActor() {}
// Cross Module References
	DAMAGE_INDICATOR_API UClass* Z_Construct_UClass_ADamageTextActor_NoRegister();
	DAMAGE_INDICATOR_API UClass* Z_Construct_UClass_ADamageTextActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Damage_Indicator();
// End Cross Module References
	static FName NAME_ADamageTextActor_Initialize = FName(TEXT("Initialize"));
	void ADamageTextActor::Initialize(FText const& text)
	{
		DamageTextActor_eventInitialize_Parms Parms;
		Parms.text=text;
		ProcessEvent(FindFunctionChecked(NAME_ADamageTextActor_Initialize),&Parms);
	}
	void ADamageTextActor::StaticRegisterNativesADamageTextActor()
	{
	}
	struct Z_Construct_UFunction_ADamageTextActor_Initialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADamageTextActor_Initialize_Statics::NewProp_text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ADamageTextActor_Initialize_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DamageTextActor_eventInitialize_Parms, text), METADATA_PARAMS(Z_Construct_UFunction_ADamageTextActor_Initialize_Statics::NewProp_text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADamageTextActor_Initialize_Statics::NewProp_text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADamageTextActor_Initialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADamageTextActor_Initialize_Statics::NewProp_text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADamageTextActor_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "DamageTextActor" },
		{ "Comment", "//Initializes actor with required information upon boot\n" },
		{ "ModuleRelativePath", "Public/DamageTextActor.h" },
		{ "ToolTip", "Initializes actor with required information upon boot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADamageTextActor_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADamageTextActor, nullptr, "Initialize", nullptr, nullptr, sizeof(DamageTextActor_eventInitialize_Parms), Z_Construct_UFunction_ADamageTextActor_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADamageTextActor_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADamageTextActor_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADamageTextActor_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADamageTextActor_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADamageTextActor_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADamageTextActor_NoRegister()
	{
		return ADamageTextActor::StaticClass();
	}
	struct Z_Construct_UClass_ADamageTextActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADamageTextActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Damage_Indicator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADamageTextActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADamageTextActor_Initialize, "Initialize" }, // 482157358
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADamageTextActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DamageTextActor.h" },
		{ "ModuleRelativePath", "Public/DamageTextActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADamageTextActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADamageTextActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADamageTextActor_Statics::ClassParams = {
		&ADamageTextActor::StaticClass,
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
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ADamageTextActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADamageTextActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADamageTextActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADamageTextActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADamageTextActor, 1587292476);
	template<> DAMAGE_INDICATOR_API UClass* StaticClass<ADamageTextActor>()
	{
		return ADamageTextActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADamageTextActor(Z_Construct_UClass_ADamageTextActor, &ADamageTextActor::StaticClass, TEXT("/Script/Damage_Indicator"), TEXT("ADamageTextActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADamageTextActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
