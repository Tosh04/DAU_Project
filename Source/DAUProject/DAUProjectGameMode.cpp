// Copyright Epic Games, Inc. All Rights Reserved.

#include "DAUProjectGameMode.h"
#include "DAUProjectPlayerController.h"
#include "DAUProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADAUProjectGameMode::ADAUProjectGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ADAUProjectPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}