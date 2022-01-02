// Damage Display Plugin, 2021 Rodrigo Martinez 


#include "DamageTextActor.h"

// Sets default values
ADamageTextActor::ADamageTextActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ADamageTextActor::BeginPlay()
{
	Super::BeginPlay();

	AnchorLocation = GetActorLocation();
	
}

// Called every frame
void ADamageTextActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

