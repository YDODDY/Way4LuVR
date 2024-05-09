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

	//ĸ�� ũ�� ����
	GetCapsuleComponent()->SetCapsuleHalfHeight(1250.0f);

	//ĸ�� �ѷ��� ����
	GetCapsuleComponent()->SetCapsuleRadius(389.353485f);

}

// Called when the game starts or when spawned
void ABeastGigant::BeginPlay()
{
	Super::BeginPlay();

	//�⺻���´� idle ���·� �ʱ�ȭ
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

	//��ŸŸ�� �����ϱ�
	currentTime += DeltaTime;

	//������ �÷��̾���� �Ÿ��� ��� �Լ�
	DistanceToPlayer();

	//�÷��̾�� ai������ �Ÿ�
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
		// ���带 ������ �� ������ ����
		return;
	}

	// �÷��̾� ���� ������
	PlayerPawn = UGameplayStatics::GetPlayerPawn(World, 0);
	if (PlayerPawn)
	{
		// AI�� ��ġ�� �÷��̾��� ��ġ ���� ���
		FVector ToPlayer = PlayerPawn->GetActorLocation() - GetActorLocation();

		// Z ���� ������Ű�� X, Y ���� ����Ͽ� �÷��̾ �ٶ󺸵��� ȸ�� ���
		FRotator DesiredRotation = FRotator(0.f, ToPlayer.Rotation().Yaw, 0.f);
		SetActorRotation(DesiredRotation);

		// �÷��̾���� �Ÿ� ���
		float DistanceToPlayer = ToPlayer.Size();


	}
}

void ABeastGigant::RestartAttackFlag()
{
	// ���� �÷��� �缳��
	bIsAttack = false;
}

float ABeastGigant::DistanceToPlayer()
{
	// �÷��̾ ������
	PlayerPawn = UGameplayStatics::GetPlayerPawn(this, 0);
	if (PlayerPawn)
	{
		// �÷��̾� ��ġ�� ������
		PlayerLocation = PlayerPawn->GetActorLocation();

		// ���� ����(ĳ����)�� ��ġ�� �����ͼ� �÷��̾���� �Ÿ��� ��� (Z �� ���� ����)
		FVector DistanceXY = FVector(PlayerLocation.X - GetActorLocation().X, PlayerLocation.Y - GetActorLocation().Y, 0.0f);

		// DistanceAiToCharacter�� DistanceXY �� �Ҵ�
		DistanceAiToCharacter = DistanceXY;

		// �÷��̾���� �Ÿ�(������ ����)�� ���밪���� ����Ͽ� ��ȯ
		return FMath::Abs(DistanceXY.Size());
	}

	// �÷��̾ ã�� ���� ��� ���Ѵ� ��ȯ
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
	

	// ���ΰ� �÷��̾� ������ �Ÿ��� ���
	float DistanceToPlayer = FVector::Distance(GetActorLocation(), PlayerLocation);

	// �Ÿ��� Ư�� �� ������ �� �������� ����
	if (DistanceToPlayer <= AcceptanceRadius)
	{
		// �÷��̾� ĳ���� ��ġ�� �̵�
		SetActorLocation(PlayerLocation);
	}
	else
	{
		// AI ĳ������ ��ġ�� �÷��̾� ĳ���� ������ �����ϸ� �̵�
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
	// 	if (currentTime > 3.0f) // 1���� ������ �Ŀ� �����ϵ��� ���� �߰�
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
	//���ο��� �Ÿ��� 2500 ���ϸ�
	//if(DistanceAiToCharacter.Length() <= 2500.0f && bIsAttackAnimationPlaying == true)
	if (bIsAttackAnimationPlaying == false)
	{
		SearchPlayer();

	}
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (bIsAttack == false && AnimInstance)
	{
		//�÷��̾���� �Ÿ��� 2500 ���ϸ� 1���� 10������ ������ �������� �����ض�
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

				//5�ʸ��� �����ض�
				GetWorldTimerManager().SetTimer(TimerHandle_DelayAttack, this, &ABeastGigant::RestartAttackFlag, 4.0f, false);
			}
		}

		//�����Ÿ� �̻� �־����� ������ �Ͷ�
		else if (DistanceAiToCharacter.Length() > 2500.0f && DistanceAiToCharacter.Length() <= 9000.0f && bIsAttack == false)
		{

			beastState = EBeastGigantState::MOVE;
		}

		//�Ÿ��� �ʹ� �ִٸ� ������� ���������� �ض�
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