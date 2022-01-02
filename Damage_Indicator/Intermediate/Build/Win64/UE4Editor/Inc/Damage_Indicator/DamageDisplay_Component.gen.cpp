// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Damage_Indicator/Public/DamageDisplay_Component.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageDisplay_Component() {}
// Cross Module References
	DAMAGE_INDICATOR_API UClass* Z_Construct_UClass_UDamageDisplay_Component_NoRegister();
	DAMAGE_INDICATOR_API UClass* Z_Construct_UClass_UDamageDisplay_Component();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Damage_Indicator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DAMAGE_INDICATOR_API UClass* Z_Construct_UClass_ADamageTextActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDamageDisplay_Component::execOnTextDestroyed)
	{
		P_GET_OBJECT(AActor,Z_Param_destroyed_actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTextDestroyed(Z_Param_destroyed_actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDamageDisplay_Component::execAddDamageText_CLIENT)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_text);
		P_GET_STRUCT(FVector,Z_Param_world_location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddDamageText_CLIENT_Implementation(Z_Param_text,Z_Param_world_location);
		P_NATIVE_END;
	}
	static FName NAME_UDamageDisplay_Component_AddDamageText_CLIENT = FName(TEXT("AddDamageText_CLIENT"));
	void UDamageDisplay_Component::AddDamageText_CLIENT(FText const& text, FVector const& world_location)
	{
		DamageDisplay_Component_eventAddDamageText_CLIENT_Parms Parms;
		Parms.text=text;
		Parms.world_location=world_location;
		ProcessEvent(FindFunctionChecked(NAME_UDamageDisplay_Component_AddDamageText_CLIENT),&Parms);
	}
	void UDamageDisplay_Component::StaticRegisterNativesUDamageDisplay_Component()
	{
		UClass* Class = UDamageDisplay_Component::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddDamageText_CLIENT", &UDamageDisplay_Component::execAddDamageText_CLIENT },
			{ "OnTextDestroyed", &UDamageDisplay_Component::execOnTextDestroyed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDamageDisplay_Component_AddDamageText_CLIENT_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_world_location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_world_location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamageDisplay_Component_AddDamageText_CLIENT_Statics::NewProp_text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDamageDisplay_Component_AddDamageText_CLIENT_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DamageDisplay_Component_eventAddDamageText_CLIENT_Parms, text), METADATA_PARAMS(Z_Construct_UFunction_UDamageDisplay_Component_AddDamageText_CLIENT_Statics::NewProp_text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageDisplay_Component_AddDamageText_CLIENT_Statics::NewProp_text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamageDisplay_Component_AddDamageText_CLIENT_Statics::NewProp_world_location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDamageDisplay_Component_AddDamageText_CLIENT_Statics::NewProp_world_location = { "world_location", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DamageDisplay_Component_eventAddDamageText_CLIENT_Parms, world_location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDamageDisplay_Component_AddDamageText_CLIENT_Statics::NewProp_world_location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageDisplay_Component_AddDamageText_CLIENT_Statics::NewProp_world_location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageDisplay_Component_AddDamageText_CLIENT_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageDisplay_Component_AddDamageText_CLIENT_Statics::NewProp_text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageDisplay_Component_AddDamageText_CLIENT_Statics::NewProp_world_location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamageDisplay_Component_AddDamageText_CLIENT_Statics::Function_MetaDataParams[] = {
		{ "Category", "DamageDisplay_Component" },
		{ "Comment", "//Sets the damage text at the exact location in the world space \n" },
		{ "ModuleRelativePath", "Public/DamageDisplay_Component.h" },
		{ "ToolTip", "Sets the damage text at the exact location in the world space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageDisplay_Component_AddDamageText_CLIENT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamageDisplay_Component, nullptr, "AddDamageText_CLIENT", nullptr, nullptr, sizeof(DamageDisplay_Component_eventAddDamageText_CLIENT_Parms), Z_Construct_UFunction_UDamageDisplay_Component_AddDamageText_CLIENT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageDisplay_Component_AddDamageText_CLIENT_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05820C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDamageDisplay_Component_AddDamageText_CLIENT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageDisplay_Component_AddDamageText_CLIENT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDamageDisplay_Component_AddDamageText_CLIENT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDamageDisplay_Component_AddDamageText_CLIENT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDamageDisplay_Component_OnTextDestroyed_Statics
	{
		struct DamageDisplay_Component_eventOnTextDestroyed_Parms
		{
			AActor* destroyed_actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_destroyed_actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDamageDisplay_Component_OnTextDestroyed_Statics::NewProp_destroyed_actor = { "destroyed_actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DamageDisplay_Component_eventOnTextDestroyed_Parms, destroyed_actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageDisplay_Component_OnTextDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageDisplay_Component_OnTextDestroyed_Statics::NewProp_destroyed_actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamageDisplay_Component_OnTextDestroyed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Callback for when a floating text actor is destroyed \n" },
		{ "ModuleRelativePath", "Public/DamageDisplay_Component.h" },
		{ "ToolTip", "Callback for when a floating text actor is destroyed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageDisplay_Component_OnTextDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamageDisplay_Component, nullptr, "OnTextDestroyed", nullptr, nullptr, sizeof(DamageDisplay_Component_eventOnTextDestroyed_Parms), Z_Construct_UFunction_UDamageDisplay_Component_OnTextDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageDisplay_Component_OnTextDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDamageDisplay_Component_OnTextDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageDisplay_Component_OnTextDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDamageDisplay_Component_OnTextDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDamageDisplay_Component_OnTextDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDamageDisplay_Component_NoRegister()
	{
		return UDamageDisplay_Component::StaticClass();
	}
	struct Z_Construct_UClass_UDamageDisplay_Component_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageTextActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageTextActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextVerticalSpacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextVerticalSpacing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextVerticalOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextVerticalOffset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveTextActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveTextActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveTextActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDamageDisplay_Component_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Damage_Indicator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDamageDisplay_Component_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDamageDisplay_Component_AddDamageText_CLIENT, "AddDamageText_CLIENT" }, // 768278453
		{ &Z_Construct_UFunction_UDamageDisplay_Component_OnTextDestroyed, "OnTextDestroyed" }, // 1001503825
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageDisplay_Component_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DamageDisplay_Component.h" },
		{ "ModuleRelativePath", "Public/DamageDisplay_Component.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageDisplay_Component_Statics::NewProp_DamageTextActorClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DamageDisplay_Component" },
		{ "Comment", "//floating combat text actor to use display text\n" },
		{ "ModuleRelativePath", "Public/DamageDisplay_Component.h" },
		{ "ToolTip", "floating combat text actor to use display text" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDamageDisplay_Component_Statics::NewProp_DamageTextActorClass = { "DamageTextActorClass", nullptr, (EPropertyFlags)0x0044000000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDamageDisplay_Component, DamageTextActorClass), Z_Construct_UClass_ADamageTextActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UDamageDisplay_Component_Statics::NewProp_DamageTextActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageDisplay_Component_Statics::NewProp_DamageTextActorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageDisplay_Component_Statics::NewProp_TextVerticalSpacing_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DamageDisplay_Component" },
		{ "Comment", "//The amount of vertical space between each other \n" },
		{ "ModuleRelativePath", "Public/DamageDisplay_Component.h" },
		{ "ToolTip", "The amount of vertical space between each other" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDamageDisplay_Component_Statics::NewProp_TextVerticalSpacing = { "TextVerticalSpacing", nullptr, (EPropertyFlags)0x0040000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDamageDisplay_Component, TextVerticalSpacing), METADATA_PARAMS(Z_Construct_UClass_UDamageDisplay_Component_Statics::NewProp_TextVerticalSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageDisplay_Component_Statics::NewProp_TextVerticalSpacing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageDisplay_Component_Statics::NewProp_TextVerticalOffset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DamageDisplay_Component" },
		{ "Comment", "// Amount of vertical offset to add when spawning the following Damage Text Actors\n" },
		{ "ModuleRelativePath", "Public/DamageDisplay_Component.h" },
		{ "ToolTip", "Amount of vertical offset to add when spawning the following Damage Text Actors" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDamageDisplay_Component_Statics::NewProp_TextVerticalOffset = { "TextVerticalOffset", nullptr, (EPropertyFlags)0x0040000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDamageDisplay_Component, TextVerticalOffset), METADATA_PARAMS(Z_Construct_UClass_UDamageDisplay_Component_Statics::NewProp_TextVerticalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageDisplay_Component_Statics::NewProp_TextVerticalOffset_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDamageDisplay_Component_Statics::NewProp_ActiveTextActors_Inner = { "ActiveTextActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADamageTextActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageDisplay_Component_Statics::NewProp_ActiveTextActors_MetaData[] = {
		{ "Comment", "//Array of all active floating text actors\n" },
		{ "ModuleRelativePath", "Public/DamageDisplay_Component.h" },
		{ "ToolTip", "Array of all active floating text actors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDamageDisplay_Component_Statics::NewProp_ActiveTextActors = { "ActiveTextActors", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDamageDisplay_Component, ActiveTextActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDamageDisplay_Component_Statics::NewProp_ActiveTextActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageDisplay_Component_Statics::NewProp_ActiveTextActors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDamageDisplay_Component_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageDisplay_Component_Statics::NewProp_DamageTextActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageDisplay_Component_Statics::NewProp_TextVerticalSpacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageDisplay_Component_Statics::NewProp_TextVerticalOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageDisplay_Component_Statics::NewProp_ActiveTextActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageDisplay_Component_Statics::NewProp_ActiveTextActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDamageDisplay_Component_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDamageDisplay_Component>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDamageDisplay_Component_Statics::ClassParams = {
		&UDamageDisplay_Component::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDamageDisplay_Component_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDamageDisplay_Component_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDamageDisplay_Component_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageDisplay_Component_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDamageDisplay_Component()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDamageDisplay_Component_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDamageDisplay_Component, 2330277746);
	template<> DAMAGE_INDICATOR_API UClass* StaticClass<UDamageDisplay_Component>()
	{
		return UDamageDisplay_Component::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDamageDisplay_Component(Z_Construct_UClass_UDamageDisplay_Component, &UDamageDisplay_Component::StaticClass, TEXT("/Script/Damage_Indicator"), TEXT("UDamageDisplay_Component"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageDisplay_Component);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
