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
	AFPSController();

#pragma region ControllerInterface
	//INTERFACE OVERRIDE
	virtual void ShowTeamSelection() override;
	virtual void SetCameraView(AActor* camera) override;
#pragma endregion
	
private:
	UFUNCTION(Client, Reliable)
	void Client_ShowTeamSelection();

	UFUNCTION(Client, Reliable)
	void Client_SetCameraView(AActor* camera);
private:


	UPROPERTY(EditAnywhere, Category = "Menu")
	TSubclassOf<class UUserWidget> TeamSelectionWidgetClass{ nullptr };

	UPROPERTY()
	UUserWidget* TeamSelectionWidget{ nullptr };
};
