// Copyright Epic Games, Inc. All Rights Reserved.

#include "CSKOGameMode.h"
#include "CSKOCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACSKOGameMode::ACSKOGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
