#include "BeastGigant.h"
#include <../../../../../../../Source/Runtime/Engine/Classes/Kismet/GameplayStatics.h>
#include "GameFramework/CharacterMovementComponent.h"
#include "Animation/AnimSequence.h"
#include "Math/Vector.h"
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

	//보스가 플레이어와의 거리를 재는 함수
	DistanceToPlayer();

	//플레이어와 ai사이의 거리
	UE_LOG(LogTemp, Warning, TEXT("Distance to Player: %f"), DistanceAiToCharacter.Length());

	FString strState = UEnum::GetValueAsString(beastState);
	DrawDebugString(GetWorld(), GetActorLocation(), strState, nullptr, FColor::Red, 0, true, 1);




	SuperJump();



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

float ABeastGigant::DistanceToPlayer()
{
	// 플레이어를 가져옴
	PlayerPawn = UGameplayStatics::GetPlayerPawn(this, 0);
	if (PlayerPawn)
	{
		// 플레이어 위치를 가져옴
		PlayerLocation = PlayerPawn->GetActorLocation();

		// 현재 액터(캐릭터)의 위치를 가져와서 플레이어와의 거리를 계산 (Z 축 차이 무시)
		FVector DistanceXY = FVector(PlayerLocation.X - GetActorLocation().X, PlayerLocation.Y - GetActorLocation().Y, 0.0f);

		// DistanceAiToCharacter에 DistanceXY 값 할당
		DistanceAiToCharacter = DistanceXY;

		// 플레이어와의 거리(벡터의 길이)를 절대값으로 계산하여 반환
		return FMath::Abs(DistanceXY.Size());
	}

	// 플레이어를 찾지 못한 경우 무한대 반환
	return FLT_MAX;
}

void ABeastGigant::MoveToPlayer()
{

	FVector playerLocation = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();

	FVector towardPlayer = playerLocation - GetActorLocation();

	AddMovementInput(towardPlayer.GetSafeNormal(1.0));



}

void ABeastGigant::MoveToLocationJump()
{
	

	// 거인과 플레이어 사이의 거리를 계산
	float DistanceToPlayer = FVector::Distance(GetActorLocation(), PlayerLocation);

	// 거리가 특정 값 이하일 때 도착으로 간주
	if (DistanceToPlayer <= AcceptanceRadius)
	{
		// 플레이어 캐릭터 위치로 이동
		SetActorLocation(PlayerLocation);
	}
	else
	{
		// AI 캐릭터의 위치를 플레이어 캐릭터 쪽으로 보간하며 이동
		NewLocation = FMath::VInterpConstantTo(GetActorLocation(), PlayerLocation, GetWorld()->GetDeltaSeconds(), MovementSpeed);
		SetActorLocation(NewLocation);
	}




}

void ABeastGigant::ChangeNormalAttackJump()
{
	bIsMovingNow = false;

	bIsAnimNotify = false;
	UE_LOG(LogTemp, Warning, TEXT("SWAPPPPPPP"));

}

void ABeastGigant::SuperJump()
{
	// 	if (currentTime > 3.0f) // 1초의 딜레이 후에 실행하도록 조건 추가
	// 	{
	if (bIsMovingNow == true)
	{
		UE_LOG(LogTemp, Warning, TEXT("WHY"));
		MoveToLocationJump();
	}
	/*}*/
// 	if (bIsMovingNow == true)
// 	{
// 		UE_LOG(LogTemp, Warning, TEXT("WHY"));
// 		//MoveToLocationJump();
// 		//GetWorldTimerManager().SetTimer(TimerHandle_SuperJump, this, &ABeastGigant::MoveToLocationJump, 5.0f, false);
// 	}

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
	SearchPlayer();
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
	GetCharacterMovement()->bOrientRotationToMovement = true;
	if (DistanceAiToCharacter.Length() < 2500.0f && bIsAttack == false)
	{
		beastState = EBeastGigantState::NORMALATTACK;
	}
	if (DistanceAiToCharacter.Length() > 2500.0f && DistanceAiToCharacter.Length() <= 9000.0f && bIsAttack == false)
	{
		MoveToPlayer();
	}
	if (DistanceAiToCharacter.Length() > 9000.0f && bIsAttack == false)
	{
		beastState = EBeastGigantState::NORMALATTACK;
	}
}

void ABeastGigant::backjump()
{
}

void ABeastGigant::normalattack()
{
	//거인와의 거리가 2500 이하면
	//if(DistanceAiToCharacter.Length() <= 2500.0f && bIsAttackAnimationPlaying == true)
	if (bIsAttackAnimationPlaying == false)
	{
		SearchPlayer();

	}
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (bIsAttack == false && AnimInstance)
	{
		//플레이어와의 거리가 2500 이하면 1부터 10까지의 공격을 랜덤으로 공격해라
		if (DistanceAiToCharacter.Length() < 2500.0f)
		{
			int32 Value = FMath::RandRange(1, 9);
			{
				if (Value == 1)
				{
					AnimInstance->Montage_Play(AttackMT1);

					bIsAttack = true;
				}

				if (Value == 2)
				{
					AnimInstance->Montage_Play(AttackMT3);

					bIsAttack = true;
				}
				if (Value == 3)
				{
					AnimInstance->Montage_Play(AttackMT4);

					bIsAttack = true;
				}

				if (Value == 4)
				{
					AnimInstance->Montage_Play(AttackMT5);

					bIsAttack = true;
				}

				if (Value == 5)
				{
					AnimInstance->Montage_Play(AttackMT6);

					bIsAttack = true;
				}

				if (Value == 6)
				{
					AnimInstance->Montage_Play(AttackMT7);

					bIsAttack = true;
				}

				if (Value == 7)
				{
					AnimInstance->Montage_Play(AttackMT8);

					bIsAttack = true;
				}

				if (Value == 8)
				{
					AnimInstance->Montage_Play(AttackMT9);

					bIsAttack = true;
				}

				if (Value == 9)
				{
					AnimInstance->Montage_Play(AttackMT10);

					bIsAttack = true;
				}

				//5초마다 공격해라
				GetWorldTimerManager().SetTimer(TimerHandle_DelayAttack, this, &ABeastGigant::RestartAttackFlag, 4.0f, false);
			}
		}

		//일정거리 이상 멀어지면 나한테 와라
		else if (DistanceAiToCharacter.Length() > 2500.0f && DistanceAiToCharacter.Length() <= 9000.0f && bIsAttack == false)
		{

			beastState = EBeastGigantState::MOVE;
		}

		//거리가 너무 멀다면 날라오는 점프공격을 해라
		else if (DistanceAiToCharacter.Length() > 9000.0f)
		{

			AnimInstance->Montage_Play(AttackMT2);

			bIsAttack = true;

			PlayerLocation = PlayerPawn->GetActorLocation();

			if (currentTime > 1.5f)
			{
				UE_LOG(LogTemp, Warning, TEXT("OUTOF"));
			}
			bIsMovingNow = true;

			GetWorldTimerManager().SetTimer(TimerHandle_ChangeNormalAttack, this, &ABeastGigant::ChangeNormalAttackJump, 2.5f, false);
		}
		GetWorldTimerManager().SetTimer(TimerHandle_DelayAttack, this, &ABeastGigant::RestartAttackFlag, 4.0f, false);
	}





}

void ABeastGigant::stoneattack()
{
}

void ABeastGigant::groggy()
{
	//SuperJump();
	MoveToLocationJump();
}

void ABeastGigant::die()
{
}