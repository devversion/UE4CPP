#include "UE4CPP.h"
#include "MovingPawn.h"

AMovingPawn::AMovingPawn(const class FObjectInitializer& PCIP) : Super(PCIP) {
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = PCIP.CreateDefaultSubobject<UBoxComponent>(this, TEXT("RootComponent"));

	UStaticMeshComponent* meshcomponent = PCIP.CreateDefaultSubobject<UStaticMeshComponent>(this, TEXT("RootObject"));
	meshcomponent->AttachTo(RootComponent);
}

void AMovingPawn::BeginPlay() {
	Super::BeginPlay();
}

void AMovingPawn::Tick( float DeltaTime ) {
	Super::Tick( DeltaTime );
}

void AMovingPawn::SetupPlayerInputComponent(class UInputComponent* InputComponent) {
	Super::SetupPlayerInputComponent(InputComponent);
}

