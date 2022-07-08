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

//run on server each time a player joins the map
void ACSKOGameMode::PostLogin(APlayerController* NewPlayer)
{
	if(!ensure(PreviewLevelCamera != nullptr))
		return;
	
	//Cast to an interface -> don't use Execute_ static function cause its not a blueprint related function (blueprintNativeEvent, blueprintCallable)
	IBPI_PlayerController* IPlayerController = Cast<IBPI_PlayerController>(NewPlayer);
	
	if (!IPlayerController)
		return;

	
	IPlayerController->SetCameraView(PreviewLevelCamera);
	IPlayerController->ShowTeamSelection();
}

void ACSKOGameMode::BeginPlay()
{
	Super::BeginPlay();
	
	PreviewLevelCamera = Cast<ACameraActor>(UGameplayStatics::GetActorOfClass(GetWorld(), ACameraActor::StaticClass()));

	if(!ensureAlwaysMsgf(PreviewLevelCamera != nullptr, TEXT("No valid camera was found for this level")))
	{
		return;
	}


	
}
