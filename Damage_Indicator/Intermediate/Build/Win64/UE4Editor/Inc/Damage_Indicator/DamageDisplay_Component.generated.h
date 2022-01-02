// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
#ifdef DAMAGE_INDICATOR_DamageDisplay_Component_generated_h
#error "DamageDisplay_Component.generated.h already included, missing '#pragma once' in DamageDisplay_Component.h"
#endif
#define DAMAGE_INDICATOR_DamageDisplay_Component_generated_h

#define HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageDisplay_Component_h_14_SPARSE_DATA
#define HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageDisplay_Component_h_14_RPC_WRAPPERS \
	virtual void AddDamageText_CLIENT_Implementation(FText const& text, FVector const& world_location); \
 \
	DECLARE_FUNCTION(execOnTextDestroyed); \
	DECLARE_FUNCTION(execAddDamageText_CLIENT);


#define HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageDisplay_Component_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void AddDamageText_CLIENT_Implementation(FText const& text, FVector const& world_location); \
 \
	DECLARE_FUNCTION(execOnTextDestroyed); \
	DECLARE_FUNCTION(execAddDamageText_CLIENT);


#define HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageDisplay_Component_h_14_EVENT_PARMS \
	struct DamageDisplay_Component_eventAddDamageText_CLIENT_Parms \
	{ \
		FText text; \
		FVector world_location; \
	};


#define HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageDisplay_Component_h_14_CALLBACK_WRAPPERS
#define HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageDisplay_Component_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDamageDisplay_Component(); \
	friend struct Z_Construct_UClass_UDamageDisplay_Component_Statics; \
public: \
	DECLARE_CLASS(UDamageDisplay_Component, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Damage_Indicator"), NO_API) \
	DECLARE_SERIALIZER(UDamageDisplay_Component)


#define HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageDisplay_Component_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUDamageDisplay_Component(); \
	friend struct Z_Construct_UClass_UDamageDisplay_Component_Statics; \
public: \
	DECLARE_CLASS(UDamageDisplay_Component, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Damage_Indicator"), NO_API) \
	DECLARE_SERIALIZER(UDamageDisplay_Component)


#define HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageDisplay_Component_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDamageDisplay_Component(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDamageDisplay_Component) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDamageDisplay_Component); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageDisplay_Component); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDamageDisplay_Component(UDamageDisplay_Component&&); \
	NO_API UDamageDisplay_Component(const UDamageDisplay_Component&); \
public:


#define HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageDisplay_Component_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDamageDisplay_Component(UDamageDisplay_Component&&); \
	NO_API UDamageDisplay_Component(const UDamageDisplay_Component&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDamageDisplay_Component); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageDisplay_Component); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDamageDisplay_Component)


#define HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageDisplay_Component_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DamageTextActorClass() { return STRUCT_OFFSET(UDamageDisplay_Component, DamageTextActorClass); } \
	FORCEINLINE static uint32 __PPO__TextVerticalSpacing() { return STRUCT_OFFSET(UDamageDisplay_Component, TextVerticalSpacing); } \
	FORCEINLINE static uint32 __PPO__TextVerticalOffset() { return STRUCT_OFFSET(UDamageDisplay_Component, TextVerticalOffset); } \
	FORCEINLINE static uint32 __PPO__ActiveTextActors() { return STRUCT_OFFSET(UDamageDisplay_Component, ActiveTextActors); }


#define HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageDisplay_Component_h_11_PROLOG \
	HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageDisplay_Component_h_14_EVENT_PARMS


#define HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageDisplay_Component_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageDisplay_Component_h_14_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageDisplay_Component_h_14_SPARSE_DATA \
	HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageDisplay_Component_h_14_RPC_WRAPPERS \
	HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageDisplay_Component_h_14_CALLBACK_WRAPPERS \
	HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageDisplay_Component_h_14_INCLASS \
	HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageDisplay_Component_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageDisplay_Component_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageDisplay_Component_h_14_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageDisplay_Component_h_14_SPARSE_DATA \
	HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageDisplay_Component_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageDisplay_Component_h_14_CALLBACK_WRAPPERS \
	HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageDisplay_Component_h_14_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageDisplay_Component_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAMAGE_INDICATOR_API UClass* StaticClass<class UDamageDisplay_Component>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_Damage_Indicator_Source_Damage_Indicator_Public_DamageDisplay_Component_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
