// Copyright Epic Games, Inc. All Rights Reserved.

#include "CSKOGameMode.h"
#include "CSKOCharacter.h"
#include "UObject/ConstructorHelpers.h"

#include "./Controllers/FPSController.h"
#include "Camera/CameraActor.h"

#include "Kismet/GameplayStatics.h"

ACSKOGameMode::ACSKOGameMode()
{
	DefaultPawnClass = nullptr;
	PlayerControllerClass = AFPSController::StaticClass();
}

void ACSKOGameMode::PostLogin(APlayerController* NewPlayer)
{
	//Cast to an interface -> this can be used on any controller doesn't matter which type (more performant)
	IBPI_PlayerController* PlayerController = Cast<IBPI_PlayerController>(NewPlayer);
	
	if (!PlayerController)
		return;
	
	//we don't want this to be run on server
	PlayerController->SetCameraView(PreviewLevelCamera);
	PlayerController->ShowTeamSelection();
}

void ACSKOGameMode::BeginPlay()
{
	Super::BeginPlay();
	
	PreviewLevelCamera = Cast<ACameraActor>(UGameplayStatics::GetActorOfClass(GetWorld(), ACameraActor::StaticClass()));

	if(!ensure(PreviewLevelCamera != nullptr))
	{
		return;
	}


	
}
