// Fill out your copyright notice in the Description page of Project Settings.


#include "FPCharacter.h"

// Sets default values
AFPCharacter::AFPCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFPCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFPCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFPCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AFPCharacter::ShowControls()
{
	if (GEngine) //this is the engine itself being accessable as a variable? 
	{
		GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::White, TEXT("Left Click to Shoot")); //the 1 is a unique id while the 5f is the duration
		GEngine->AddOnScreenDebugMessage(2, 5.f, FColor::White, TEXT("Press E to interact with the button"));
		GEngine->AddOnScreenDebugMessage(3, 5.f, FColor::White, TEXT("Shoot the corresponding colours"));
	}
}