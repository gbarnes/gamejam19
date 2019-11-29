// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CorporateSlaveGameMode.h"
#include "CorporateSlavePlayerController.h"
#include "CorporateSlaveCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACorporateSlaveGameMode::ACorporateSlaveGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ACorporateSlavePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}