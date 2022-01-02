// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DAMAGE_INDICATOR_DamageTextActor_generated_h
#error "DamageTextActor.generated.h already included, missing '#pragma once' in DamageTextActor.h"
#endif
#define DAMAGE_INDICATOR_DamageTextActor_generated_h

#define HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageTextActor_h_12_SPARSE_DATA
#define HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageTextActor_h_12_RPC_WRAPPERS
#define HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageTextActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageTextActor_h_12_EVENT_PARMS \
	struct DamageTextActor_eventInitialize_Parms \
	{ \
		FText text; \
	};


#define HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageTextActor_h_12_CALLBACK_WRAPPERS
#define HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageTextActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADamageTextActor(); \
	friend struct Z_Construct_UClass_ADamageTextActor_Statics; \
public: \
	DECLARE_CLASS(ADamageTextActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Damage_Indicator"), NO_API) \
	DECLARE_SERIALIZER(ADamageTextActor)


#define HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageTextActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADamageTextActor(); \
	friend struct Z_Construct_UClass_ADamageTextActor_Statics; \
public: \
	DECLARE_CLASS(ADamageTextActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Damage_Indicator"), NO_API) \
	DECLARE_SERIALIZER(ADamageTextActor)


#define HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageTextActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADamageTextActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADamageTextActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADamageTextActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADamageTextActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADamageTextActor(ADamageTextActor&&); \
	NO_API ADamageTextActor(const ADamageTextActor&); \
public:


#define HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageTextActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADamageTextActor(ADamageTextActor&&); \
	NO_API ADamageTextActor(const ADamageTextActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADamageTextActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADamageTextActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADamageTextActor)


#define HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageTextActor_h_12_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageTextActor_h_9_PROLOG \
	HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageTextActor_h_12_EVENT_PARMS


#define HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageTextActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageTextActor_h_12_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageTextActor_h_12_SPARSE_DATA \
	HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageTextActor_h_12_RPC_WRAPPERS \
	HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageTextActor_h_12_CALLBACK_WRAPPERS \
	HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageTextActor_h_12_INCLASS \
	HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageTextActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageTextActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageTextActor_h_12_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageTextActor_h_12_SPARSE_DATA \
	HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageTextActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageTextActor_h_12_CALLBACK_WRAPPERS \
	HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageTextActor_h_12_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageTextActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAMAGE_INDICATOR_API UClass* StaticClass<class ADamageTextActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageTextActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
