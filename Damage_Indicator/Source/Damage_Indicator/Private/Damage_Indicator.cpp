// Copyright Epic Games, Inc. All Rights Reserved.

#include "Damage_Indicator.h"

#define LOCTEXT_NAMESPACE "FDamage_IndicatorModule"

void FDamage_IndicatorModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FDamage_IndicatorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FDamage_IndicatorModule, Damage_Indicator)