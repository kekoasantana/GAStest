// Fill out your copyright notice in the Description page of Project Settings.


#include "NewTestCharacter.h"

// Sets default values
ANewTestCharacter::ANewTestCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANewTestCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANewTestCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANewTestCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

