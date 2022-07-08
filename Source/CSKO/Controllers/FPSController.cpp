// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSController.h"
#include "Blueprint/UserWidget.h"

AFPSController::AFPSController()
{
	//to make sure the game doesn't make a spectator pawn for us and then attaches us to it.
	bAutoManageActiveCameraTarget = false;
}

//Called on server
void AFPSController::ShowTeamSelection()
{
	//Because it's a client function -> only called on the the client that Own this controller!!!
	//"this" is explicit here to emphasize that the controller is owned by the one connecting client  
	this->Client_ShowTeamSelection();

	if(GetNetMode() == ENetMode::NM_DedicatedServer)
	{
		UE_LOG(LogTemp,Warning,TEXT("showteamselcetion on server"));
	}
	else if(GetNetMode() == ENetMode::NM_ListenServer)
	{
		UE_LOG(LogTemp,Warning,TEXT("showteamselcetion on listen server"));
	}
	else if(GetNetMode() == ENetMode::NM_Client)
	{
		UE_LOG(LogTemp,Warning,TEXT("showteamselcetion on client"));

	}
}

void AFPSController::SetCameraView(AActor* camera)
{
	Client_SetCameraView(camera);
}

void AFPSController::Client_SetCameraView_Implementation(AActor* camera)
{
	if(!ensureAlways(camera != nullptr))
		return;
	
	SetViewTargetWithBlend(camera);
}

void AFPSController::Client_ShowTeamSelection_Implementation()
{
	if(!ensureAlways(TeamSelectionWidget != nullptr))
		return;
	
	TeamSelectionWidget = CreateWidget(this, TeamSelectionWidgetClass);

	TeamSelectionWidget->AddToViewport();
}
