// Copyright Epic Games, Inc. All Rights Reserved.

#include "CSKOGameMode.h"
#include "CSKOCharacter.h"
#include "UObject/ConstructorHelpers.h"

#include "./Controllers/FPSController.h"

ACSKOGameMode::ACSKOGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ACSKOGameMode::PostLogin(APlayerController* NewPlayer)
{
	AFPSController* controller{Cast<AFPSController>(NewPlayer)};
	IBPI_PlayerController::Execute_ShowTeamSelection(controller);
	//Cast to an interface -> this can be used on any controller doesn't matter which type (more performant)
	IBPI_PlayerController* PlayerController = Cast<IBPI_PlayerController>(NewPlayer);

	if (!PlayerController)
		return;

	//we don't want this to be run on server
	PlayerController->ShowTeamSelection();
}
