// Damage Display Plugin, 2021 Rodrigo Martinez 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DamageTextActor.generated.h"

UCLASS(Abstract)
class DAMAGE_INDICATOR_API ADamageTextActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADamageTextActor();

	//Initializes actor with required information upon boot
	UFUNCTION(BlueprintImplementableEvent, Category = "DamageTextActor")
		void Initialize(const FText& text);


	//Gets the anchor location
	inline const FVector& GetAnchorLocation() const {
		return AnchorLocation;
	}

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//Location to which the text will be anchored
	FVector AnchorLocation;


};
