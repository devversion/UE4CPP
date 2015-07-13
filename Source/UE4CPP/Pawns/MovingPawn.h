#pragma once

#include "GameFramework/Pawn.h"
#include "MovingPawn.generated.h"

UCLASS()
class UE4CPP_API AMovingPawn : public APawn
{
	GENERATED_UCLASS_BODY()
	
	UPROPERTY(Category = Move, EditAnywhere)
	float MovementSpeed;


public:
	virtual void BeginPlay() override;
	
	virtual void Tick(float DeltaSeconds) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
};
