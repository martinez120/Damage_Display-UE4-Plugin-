// Damage Display Plugin, 2021 Rodrigo Martinez 

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DamageDisplay_Component.generated.h"

class ADamageTextActor;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DAMAGE_INDICATOR_API UDamageDisplay_Component : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDamageDisplay_Component();


private:
	//floating combat text actor to use display text
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "DamageDisplay_Component", Meta = (AllowPrivateAccess = "true"))
	TSubclassOf<ADamageTextActor> DamageTextActorClass = nullptr;

	//The amount of vertical space between each other 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "DamageDisplay_Component", Meta = (AllowPrivateAccess = "true"))
	float TextVerticalSpacing = 40.0f;

	// Amount of vertical offset to add when spawning the following Damage Text Actors
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "DamageDisplay_Component", Meta = (AllowPrivateAccess = "true"))
	float TextVerticalOffset = 100.0f;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//Sets the damage text at the exact location in the world space 
	UFUNCTION(Client, Unreliable, BlueprintCallable, Category = "DamageDisplay_Component")
	void AddDamageText_CLIENT(const FText& text, const FVector& world_location);

private:

	//Callback for when a floating text actor is destroyed 
	UFUNCTION()
	void OnTextDestroyed(AActor* destroyed_actor);

	//Array of all active floating text actors
	UPROPERTY()
	TArray<ADamageTextActor*> ActiveTextActors;

		
};
