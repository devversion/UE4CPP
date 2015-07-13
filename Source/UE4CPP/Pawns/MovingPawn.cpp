#include "UE4CPP.h"
#include "MovingPawn.h"

AMovingPawn::AMovingPawn(const class FObjectInitializer& PCIP) : Super(PCIP) {
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = PCIP.CreateDefaultSubobject<UBoxComponent>(this, TEXT("RootComponent"));

	RootObject = PCIP.CreateDefaultSubobject<UStaticMeshComponent>(this, TEXT("RootObject"));
	RootObject->AttachTo(RootComponent);

	// SET DEFAULT VARS 
	MovementSpeed = 100;
}

void AMovingPawn::BeginPlay() {
	Super::BeginPlay();

	SpawnLocation = this->GetActorLocation();
}

void AMovingPawn::Tick( float DeltaTime ) {
	Super::Tick( DeltaTime );

	FVector vector = this->GetActorLocation();
	vector.Z += 1;

	this->SetActorLocation(vector, true);
}

void AMovingPawn::SetupPlayerInputComponent(class UInputComponent* InputComponent) {
	Super::SetupPlayerInputComponent(InputComponent);
}

