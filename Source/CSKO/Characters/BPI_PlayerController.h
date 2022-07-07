// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BPI_PlayerController.generated.h"

// This class does not need to be modified.
//Interface that describes functionality of common player controllers -> so it prevents the need of casting to specific controller
UINTERFACE(MinimalAPI)
class UBPI_PlayerController : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class CSKO_API IBPI_PlayerController
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void ShowTeamSelection() = 0;

	virtual void SetCameraView(AActor* camera) = 0;
};
