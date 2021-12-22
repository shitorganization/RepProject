// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectXGameMode.h"
#include "ProjectXPlayerController.h"
#include "ProjectXCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectXGameMode::AProjectXGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AProjectXPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}