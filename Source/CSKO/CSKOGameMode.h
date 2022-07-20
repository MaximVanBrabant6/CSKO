// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CSKOGameMode.generated.h"

UCLASS(minimalapi)
class ACSKOGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ACSKOGameMode();

	//Only runs on server
	virtual void PostLogin(APlayerController* NewPlayer) override;
protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(VisibleAnywhere)
	ACameraActor* PreviewLevelCamera{nullptr};
private:
	virtual void InitGame(const FString & MapName, const FString & Options, FString & ErrorMessage) override; 
};



