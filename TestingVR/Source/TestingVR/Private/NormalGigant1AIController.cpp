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

        // ������ �÷��̾ �þ߿� �鿴���� Ȯ��
        if (normalgigant->bIsPlayerInSight())
        {

            // �þ� �ȿ� �÷��̾ ������ AI�� ���߰� �÷��̾� ������ �̵�
            StandStill();
            normalgigant->MoveToPlayer(); // ������ �κ�: �÷��̾� ������ �̵�

        }
        else
        {
            // �þ� �ۿ� �÷��̾ ������ ������ ��ġ�� �̵�
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