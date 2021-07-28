// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/SkeletalMeshComponent.h"

// Sets default values
ABaseCharacter::ABaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(GetRootComponent());

	Camera->bUsePawnControlRotation = true;
	
	FPArms = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FPArms"));
	FPArms->SetupAttachment(Camera);

	//Base mesh
	GetMesh()->bOwnerNoSee = true;
}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (!PlayerInputComponent)
		return;

	PlayerInputComponent->BindAxis("Lookup", this, &ABaseCharacter::LookUpCallback);
	PlayerInputComponent->BindAxis("Turn", this, &ABaseCharacter::TurnCallback);
	PlayerInputComponent->BindAxis("MoveForward", this, &ABaseCharacter::MoveForwardCallback);
	PlayerInputComponent->BindAxis("MoveRight", this, &ABaseCharacter::MoveRightCallback);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ABaseCharacter::JumpCallback);

}

void ABaseCharacter::LookUpCallback(float Axis)
{
	AddControllerPitchInput(Axis);
}

void ABaseCharacter::TurnCallback(float Axis)
{
	AddControllerYawInput(Axis);
}

void ABaseCharacter::MoveForwardCallback(float Axis)
{

	AddMovementInput(GetActorForwardVector(), Axis);
}

void ABaseCharacter::MoveRightCallback(float Axis)
{
	AddMovementInput(GetActorRightVector(), Axis);
}

void ABaseCharacter::JumpCallback()
{
	Jump();
}

