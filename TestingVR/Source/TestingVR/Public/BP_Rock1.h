// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BP_Rock1.generated.h"

UCLASS()
class TESTINGVR_API ABP_Rock1 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABP_Rock1();

	UPROPERTY(EditAnywhere, Category="MySettings")
	class UStaticMeshComponent* RockComp;

	void Pitching();

	void PitchingRandom(float DeltaTime);

	UPROPERTY(EditAnywhere, Category="MySettings")
	float speed = 150.0f;

	APawn* PlayerPawn;

	bool bHasDirection = false;

	FVector Direction;

	float RandomSpeed;

	FVector RandomLocationStone;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
