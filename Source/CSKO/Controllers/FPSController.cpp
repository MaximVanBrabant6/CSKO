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
	Client_ShowTeamSelection();
}

void AFPSController::SetCameraView(AActor* camera)
{
	Client_SetCameraView(camera);
}

void AFPSController::Client_SetCameraView_Implementation(AActor* camera)
{
	if(!ensure(camera != nullptr))
		return;
	
	SetViewTargetWithBlend(camera);
}

void AFPSController::Client_ShowTeamSelection_Implementation()
{
	if(!ensure(TeamSelectionWidget != nullptr))
		return;
	
	TeamSelectionWidget = CreateWidget(this, TeamSelectionWidgetClass);

	TeamSelectionWidget->AddToViewport();
}
