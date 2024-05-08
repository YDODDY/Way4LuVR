// Fill out your copyright notice in the Description page of Project Settings.


#include "BeastGigant.h"
#include <../../../../../../../Source/Runtime/Engine/Classes/Kismet/GameplayStatics.h>
#include "GameFramework/CharacterMovementComponent.h"
#include "Animation/AnimSequence.h"
#include "Components/CapsuleComponent.h"


// Sets default values
ABeastGigant::ABeastGigant()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh>beastGigant(TEXT("/Script/Engine.SkeletalMesh'/Game/AttackTitan/BeastGigant/BeastGigant/GigantBeastV2.GigantBeastV2'"));

	if (beastGigant.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(beastGigant.Object);
	}

	GetMesh()->SetRelativeLocation(FVector(0, 0, -1251));
	GetMesh()->SetRelativeRotation(FRotator(0, -85, 0));
	GetCharacterMovement()->MaxWalkSpeed = 400.0f;

	//캡슐 크기 조절
	GetCapsuleComponent()->SetCapsuleHalfHeight(1250.0f);

	//캡슐 둘레값 설정
	GetCapsuleComponent()->SetCapsuleRadius(389.353485f);

}

// Called when the game starts or when spawned
void ABeastGigant::BeginPlay()
{
	Super::BeginPlay();

	//기본상태는 idle 상태로 초기화
	beastState = EBeastGigantState::IDLE;

}

// Called every frame
void ABeastGigant::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	switch (beastState)
	{
	case EBeastGigantState::IDLE:
		idle(DeltaTime);
		break;
	case EBeastGigantState::HOWLING:
		howling(DeltaTime);
		break;
	case EBeastGigantState::MOVE:
		move();
		break;
	case EBeastGigantState::BACKJUMP:
		backjump();
		break;
	case EBeastGigantState::NORMALATTACK:
		normalattack();
		break;
	case EBeastGigantState::STONEATTACK:
		stoneattack();
		break;
	case EBeastGigantState::GROGGY:
		groggy();
		break;
	case EBeastGigantState::DIE:
		die();
		break;
	default:
		break;
	}

	//델타타임 누적하기
	currentTime += DeltaTime;

	
}

// Called to bind functionality to input
void ABeastGigant::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


void ABeastGigant::SearchPlayer()
{
	UWorld* World = GetWorld();
	if (!World)
	{
		// 월드를 가져올 수 없으면 종료
		return;
	}

	// 플레이어 폰을 가져옴
	PlayerPawn = UGameplayStatics::GetPlayerPawn(World, 0);
	if (PlayerPawn)
	{
		// AI의 위치와 플레이어의 위치 벡터 계산
		FVector ToPlayer = PlayerPawn->GetActorLocation() - GetActorLocation();

		// Z 축을 고정시키고 X, Y 축을 사용하여 플레이어를 바라보도록 회전 계산
		FRotator DesiredRotation = FRotator(0.f, ToPlayer.Rotation().Yaw, 0.f);
		SetActorRotation(DesiredRotation);

		// 플레이어와의 거리 계산
		float DistanceToPlayer = ToPlayer.Size();


	}
}

void ABeastGigant::RestartAttackFlag()
{
	// 공격 플래그 재설정
	bIsAttack = false;
}

void ABeastGigant::idle(float deltaSeconds)
{
	if (currentTime > 3.0f)
	{
		beastState = EBeastGigantState::HOWLING;
		currentTime = 0;
	}


}

void ABeastGigant::howling(float deltaSeconds)
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && !bIsAlreadyPlayRoar)
	{
		AnimInstance->Montage_Play(roarMT);

		bIsAlreadyPlayRoar = true;

		UE_LOG(LogTemp, Warning, TEXT("!!"));
	}
	if (currentTime > 5.0f)
	{
		beastState = EBeastGigantState::NORMALATTACK;
		currentTime = 0;
	}

}

void ABeastGigant::move()
{
}

void ABeastGigant::backjump()
{
}

void ABeastGigant::normalattack()
{
	SearchPlayer();

	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (bIsAttack == false &&AnimInstance)
	{
		int32 Value = FMath::RandRange(1, 10);
		{
			if (Value == 1)
			{
				AnimInstance->Montage_Play(AttackMT1);

				bIsAttack = true;


			}
			if (Value == 2)
			{
				AnimInstance->Montage_Play(AttackMT2);

				bIsAttack = true;

			}
			if (Value == 3)
			{
				AnimInstance->Montage_Play(AttackMT3);

				bIsAttack = true;
			}
			if (Value == 4)
			{
				AnimInstance->Montage_Play(AttackMT4);

				bIsAttack = true;
			}

			if (Value == 5)
			{
				AnimInstance->Montage_Play(AttackMT5);

				bIsAttack = true;
			}

			if (Value == 6)
			{
				AnimInstance->Montage_Play(AttackMT6);

				bIsAttack = true;
			}

			if (Value == 7)
			{
				AnimInstance->Montage_Play(AttackMT7);

				bIsAttack = true;
			}

			if (Value == 8)
			{
				AnimInstance->Montage_Play(AttackMT8);

				bIsAttack = true;
			}

			if (Value == 9)
			{
				AnimInstance->Montage_Play(AttackMT9);

				bIsAttack = true;
			}

			if (Value == 10)
			{
				AnimInstance->Montage_Play(AttackMT10);

				bIsAttack = true;
			}

			
		}


		//5초마다 공격해라
		GetWorldTimerManager().SetTimer(TimerHandle_DelayAttack, this, &ABeastGigant::RestartAttackFlag, 5.0f, false);
	}
}

void ABeastGigant::stoneattack()
{
}

void ABeastGigant::groggy()
{
}

void ABeastGigant::die()
{
}

