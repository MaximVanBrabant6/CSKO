// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSController.h"
#include "Blueprint/UserWidget.h"

void AFPSController::ShowTeamSelection()
{

}

//This function will only be run on the client => not on the server 
// (so if the server comes to this function call it will skip it
void AFPSController::RandomShit()
{
	TeamSelectionWidget = CreateWidget(this, TeamSelectionWidgetClass);

	TeamSelectionWidget->AddToViewport();
}
