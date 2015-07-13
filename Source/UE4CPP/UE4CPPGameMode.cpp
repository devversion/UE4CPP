// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "UE4CPP.h"
#include "UE4CPPGameMode.h"
#include "UE4CPPHUD.h"
#include "UE4CPPCharacter.h"

AUE4CPPGameMode::AUE4CPPGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUE4CPPHUD::StaticClass();
}
