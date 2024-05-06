// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "NormalGigant1AIController.generated.h"

/**
 * 
 */
UCLASS()
class TESTINGVR_API ANormalGigant1AIController : public AAIController
{
	GENERATED_BODY()
	
    void BeginPlay() override;

    class UNavigationSystemV1* NavArea;

    FVector RandomLocation;
public:

    UFUNCTION()
    void RandomPatrol();

    UFUNCTION()
    void StandStill();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MySettings")
    class ANormalGigant1* normalgigant;

    bool bIsPatrolling; // 패트롤 중인지 여부를 나타내는 변수


};
