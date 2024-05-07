// Fill out your copyright notice in the Description page of Project Settings.


#include "BeastGigant.h"

// Sets default values
ABeastGigant::ABeastGigant()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABeastGigant::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABeastGigant::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABeastGigant::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

