// Damage Display Plugin, 2021 Rodrigo Martinez 


#include "DamageDisplay_Component.h"
#include "DamageTextActor.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Runtime/Engine/Classes/Engine/UserInterfaceSettings.h"
#include "Kismet/GameplayStatics.h"


// Sets default values for this component's properties
UDamageDisplay_Component::UDamageDisplay_Component()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDamageDisplay_Component::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UDamageDisplay_Component::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (GetOwner<APawn>()->IsLocallyControlled() == false)
		return; 

	const FVector2D viewportSize = UWidgetLayoutLibrary::GetViewportSize(this);

	//Checks for a bad viewport size
	if (viewportSize.X <= 0.0f || viewportSize.Y <= 0.0f)
		return; 

	//Get the viewport scale (the DPI scale)
	const int32 viewportX = FGenericPlatformMath::FloorToInt(viewportSize.X);
	const int32 viewportY = FGenericPlatformMath::FloorToInt(viewportSize.Y);
	const float viewportScale = GetDefault<UUserInterfaceSettings>(UUserInterfaceSettings::StaticClass())->GetDPIScaleBasedOnSize(FIntPoint(viewportX, viewportY));

	//Get the viewport scale (The DPI scale)
	if (viewportScale <= 0.0f)
		return; 

	//Get the player's camera location
	const FVector cameraLocation = GetOwner<APawn>()->GetController<APlayerController>()->PlayerCameraManager->GetCameraLocation();


	//Adjust the vertical location of active text actors based on the size and scale of the viewport
	for (int32 i = 1; i < ActiveTextActors.Num(); ++i)
	{

		//Calculate the vertical based on how distant the camera is from the DamageTextActor
		ADamageTextActor* textActor = ActiveTextActors[i];
		const float distance = FVector::Dist(cameraLocation, textActor->GetAnchorLocation());
		const float verticalOffset = distance / (viewportSize.X / viewportScale);

		//Adjust the DamageTextActor's location by the calculated amount
		textActor->SetActorLocation(textActor->GetAnchorLocation() + FVector(0.0f, 0.0f, i * verticalOffset * TextVerticalSpacing));

	}

}


void UDamageDisplay_Component::AddDamageText_CLIENT_Implementation(const FText& text, const FVector& world_location)
{

	if (DamageTextActorClass == nullptr)
		return;

	// Spawn the new actor at the specific location
	const FTransform spawnTransform = FTransform(FRotator::ZeroRotator, world_location + FVector(0.0f, 0.0f, TextVerticalOffset));
	ADamageTextActor* newTextActor = GetWorld()->SpawnActorDeferred<ADamageTextActor>(DamageTextActorClass, spawnTransform, GetOwner());
	if (newTextActor == nullptr)
		return; 


	// Initialize Event and finish spawning actor
	newTextActor->Initialize(text);
	newTextActor->OnDestroyed.AddDynamic(this, &UDamageDisplay_Component::OnTextDestroyed);
	UGameplayStatics::FinishSpawningActor(newTextActor, spawnTransform);


	//Add the new text actor to the beginning of the ActiveTextActors
	ActiveTextActors.Insert(newTextActor, 0);

}


void UDamageDisplay_Component::OnTextDestroyed(AActor* destroyed_actor)
{
	ActiveTextActors.Pop();
}