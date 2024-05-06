// Fill out your copyright notice in the Description page of Project Settings.


#include "NormalGigant1AIController.h"
#include "NormalGigant1.h"
#include "NavigationSystem.h"
#include "GameFramework/CharacterMovementComponent.h"
#include <../../../../../../../Source/Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h>

void ANormalGigant1AIController::BeginPlay()
{
    Super::BeginPlay();

    NavArea = FNavigationSystem::GetCurrent<UNavigationSystemV1>(this);

    normalgigant = Cast<ANormalGigant1>(GetCharacter());
}

void ANormalGigant1AIController::RandomPatrol()
{

    if (NavArea)
    {
        bIsPatrolling = true;

        // 거인이 플레이어를 시야에 들였는지 확인
        if (normalgigant->bIsPlayerInSight())
        {

            // 시야 안에 플레이어가 있으면 AI를 멈추고 플레이어 쪽으로 이동
            StandStill();
            normalgigant->MoveToPlayer(); // 수정된 부분: 플레이어 쪽으로 이동

        }
        else
        {
            // 시야 밖에 플레이어가 없으면 무작위 위치로 이동
            FVector NewRandomLocation;
            if (NavArea->K2_GetRandomReachablePointInRadius(GetWorld(), GetPawn()->GetActorLocation(),
                RandomLocation, 15000.0f))
            {
                MoveToLocation(RandomLocation);
            }
        }

        bIsPatrolling = false;
    }
}

void ANormalGigant1AIController::StandStill()
{
    StopMovement();

}