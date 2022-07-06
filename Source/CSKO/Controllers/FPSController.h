// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "../Characters/BPI_PlayerController.h" 
#include "FPSController.generated.h"

/**
 * 
 */
UCLASS()
class CSKO_API AFPSController : public APlayerController, public IBPI_PlayerController
{
	GENERATED_BODY()
	
public:
	//INTERFACE OVERRIDE
	virtual void ShowTeamSelection() override;

	//UFUNCTION(Client, Reliable)
	void RandomShit();
private:


	UPROPERTY(EditAnywhere, Category = "Menu")
	TSubclassOf<class UUserWidget> TeamSelectionWidgetClass{ nullptr };

	UPROPERTY()
	UUserWidget* TeamSelectionWidget{ nullptr };
};
