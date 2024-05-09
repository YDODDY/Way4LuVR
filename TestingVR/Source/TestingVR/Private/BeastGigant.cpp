#include "BeastGigant.h"
#include <../../../../../../../Source/Runtime/Engine/Classes/Kismet/GameplayStatics.h>
#include "GameFramework/CharacterMovementComponent.h"
#include "Animation/AnimSequence.h"
#include "Math/Vector.h"
#include "Components/StaticMeshComponent.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "Components/CapsuleComponent.h"


// ������
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

	//������ ������ �������ֱ�
	


	//1. ����Ʈ �����
	LeftForeArmMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeftForeArmMesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>LeftForeArm(TEXT("/Script/Engine.StaticMesh'/Engine/EngineMeshes/Cube.Cube'"));
	if (LeftForeArm.Succeeded())
	{
		LeftForeArmMesh->SetStaticMesh(LeftForeArm.Object);
	}
	
	LeftForeArmMesh->SetupAttachment(GetMesh());

	// ������ ��ġ�� ������
	FVector LeftForeArmSocketLocation = GetMesh()->GetSocketLocation(TEXT("LeftForeArmSocket"));

	// �޽��� ��ġ�� ������ ��ġ��
	LeftForeArmMesh->SetRelativeLocation(LeftForeArmSocketLocation);

	// �޽ø� ���Ͽ� ����
	LeftForeArmMesh->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("LeftForeArmSocket"));

	LeftForeArmMesh->SetRelativeLocation(FVector(0.0f, -510.0f, 0.0f));
	LeftForeArmMesh->SetWorldScale3D(FVector(1.0f, 3.5f, 1.0f));

	LeftForeArmMesh->SetVisibility(false);

	//2. ����Ʈ ��
	LeftArmMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeftArmMesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>LeftArm(TEXT("/Script/Engine.StaticMesh'/Engine/EngineMeshes/Cube.Cube'"));
	if (LeftArm.Succeeded())
	{
		LeftArmMesh->SetStaticMesh(LeftArm.Object);
	}

	LeftArmMesh->SetupAttachment(GetMesh());

	// ������ ��ġ�� ������
	FVector LeftArmSocketLocation = GetMesh()->GetSocketLocation(TEXT("LeftArmSocket"));

	// �޽��� ��ġ�� ������ ��ġ��
	LeftArmMesh->SetRelativeLocation(LeftArmSocketLocation);

	// �޽ø� ���Ͽ� ����
	LeftArmMesh->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("LeftArmSocket"));

	LeftArmMesh->SetRelativeLocation(FVector(0.0f, -180.0f, 0.0f));
	LeftArmMesh->SetWorldScale3D(FVector(1.0f, 2.25f, 1.0f));

	LeftArmMesh->SetVisibility(false);

	//3. ����Ʈ ���� ��
	RightForeArmMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightForeArmMesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>RightForeArm(TEXT("/Script/Engine.StaticMesh'/Engine/EngineMeshes/Cube.Cube'"));
	if (RightForeArm.Succeeded())
	{
		RightForeArmMesh->SetStaticMesh(RightForeArm.Object);
	}

	RightForeArmMesh->SetupAttachment(GetMesh());

	// ������ ��ġ�� ������
	FVector RightForeArmSocketLocation = GetMesh()->GetSocketLocation(TEXT("RightForeArmSocket"));

	// �޽��� ��ġ�� ������ ��ġ��
	RightForeArmMesh->SetRelativeLocation(RightForeArmSocketLocation);

	// �޽ø� ���Ͽ� ����
	RightForeArmMesh->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("RightForeArmSocket"));

	RightForeArmMesh->SetRelativeLocation(FVector(0.0f, -510.0f, 0.0f));
	RightForeArmMesh->SetWorldScale3D(FVector(1.0f, 3.5f, 1.0f));

	RightForeArmMesh->SetVisibility(false);

	//4. ����Ʈ ��
	RightArmMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightArmMesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>RightArm(TEXT("/Script/Engine.StaticMesh'/Engine/EngineMeshes/Cube.Cube'"));
	if (RightArm.Succeeded())
	{
		RightArmMesh->SetStaticMesh(RightArm.Object);
	}

	RightArmMesh->SetupAttachment(GetMesh());

	// ������ ��ġ�� ������
	FVector RightArmSocketLocation = GetMesh()->GetSocketLocation(TEXT("RightArmSocket"));

	// �޽��� ��ġ�� ������ ��ġ��
	RightArmMesh->SetRelativeLocation(RightArmSocketLocation);

	// �޽ø� ���Ͽ� ����
	RightArmMesh->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("RightArmSocket"));

	RightArmMesh->SetRelativeLocation(FVector(0.0f, -180.0f, 0.0f));
	RightArmMesh->SetWorldScale3D(FVector(1.0f, 2.25f, 1.0f));

	RightArmMesh->SetVisibility(false);

	//5. ��Ʈ������
	LeftLegMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeftLegMesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>LeftLeg(TEXT("/Script/Engine.StaticMesh'/Engine/EngineMeshes/Cube.Cube'"));
	if (LeftLeg.Succeeded())
	{
		LeftLegMesh->SetStaticMesh(LeftLeg.Object);
	}

	LeftLegMesh->SetupAttachment(GetMesh());

	// ������ ��ġ�� ������
	FVector LeftLegSocketLocation = GetMesh()->GetSocketLocation(TEXT("LeftLegSocket"));

	// �޽��� ��ġ�� ������ ��ġ��
	LeftLegMesh->SetRelativeLocation(LeftLegSocketLocation);

	// �޽ø� ���Ͽ� ����
	LeftLegMesh->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("LeftLegSocket"));

	LeftLegMesh->SetWorldScale3D(FVector(1.0f, 3.5f, 1.0f));

	LeftLegMesh->SetVisibility(false);

	//6. ����Ʈ����
	RightLegMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightLegMesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>RightLeg(TEXT("/Script/Engine.StaticMesh'/Engine/EngineMeshes/Cube.Cube'"));
	if (RightLeg.Succeeded())
	{
		RightLegMesh->SetStaticMesh(RightLeg.Object);
	}

	RightLegMesh->SetupAttachment(GetMesh());

	// ������ ��ġ�� ������
	FVector RightLegSocketLocation = GetMesh()->GetSocketLocation(TEXT("RightLegSocket"));

	// �޽��� ��ġ�� ������ ��ġ��
	RightLegMesh->SetRelativeLocation(RightLegSocketLocation);

	// �޽ø� ���Ͽ� ����
	RightLegMesh->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("RightLegSocket"));

	RightLegMesh->SetWorldScale3D(FVector(1.0f, 3.5f, 1.0f));

	RightLegMesh->SetVisibility(false);

	//7. ����
	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Body(TEXT("/Script/Engine.StaticMesh'/Engine/EngineMeshes/Cube.Cube'"));
	if (Body.Succeeded())
	{
		BodyMesh->SetStaticMesh(Body.Object);
	}

	BodyMesh->SetupAttachment(GetMesh());

	// ������ ��ġ�� ������
	FVector BodySocketLocation = GetMesh()->GetSocketLocation(TEXT("Spine1Socket"));

	// �޽��� ��ġ�� ������ ��ġ��
	BodyMesh->SetRelativeLocation(BodySocketLocation);

	// �޽ø� ���Ͽ� ����
	BodyMesh->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("Spine1Socket"));

	BodyMesh->SetRelativeLocation(FVector(0.0f, 70.0f, 30.0f));
	BodyMesh->SetWorldScale3D(FVector(2.75f, 4.25f, 1.75f));

	BodyMesh->SetVisibility(false);

	//8. ��
	NeckMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NeckMesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Neck(TEXT("/Script/Engine.StaticMesh'/Engine/EngineMeshes/Cube.Cube'"));
	if (Neck.Succeeded())
	{
		NeckMesh->SetStaticMesh(Neck.Object);
	}

	NeckMesh->SetupAttachment(GetMesh());

	// ������ ��ġ�� ������
	FVector NeckSocketLocation = GetMesh()->GetSocketLocation(TEXT("NeckSocket"));

	// �޽��� ��ġ�� ������ ��ġ��
	NeckMesh->SetRelativeLocation(NeckSocketLocation);

	// �޽ø� ���Ͽ� ����
	NeckMesh->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("NeckSocket"));

	NeckMesh->SetWorldScale3D(FVector(2.0f, 1.0f, 1.0f));

	NeckMesh->SetVisibility(false);

	CriticalBlood = CreateDefaultSubobject<UNiagaraComponent>(TEXT("CriticalBlood"));
	CriticalBlood->SetupAttachment(NeckMesh);
	static ConstructorHelpers::FObjectFinder<UNiagaraSystem>fx(TEXT("/Script/Niagara.NiagaraSystem'/Game/AttackTitan/Blood/CriticalBloodGigantBig.CriticalBloodGigantBig'"));
	if (fx.Succeeded())
	{
		CriticalBlood->SetAsset(fx.Object);
	}
	CriticalBlood->SetAutoActivate(false);

	CriticalBlood->SetRelativeLocation(FVector(0.f, -125.f, 0.f));
	CriticalBlood->SetRelativeRotation(FRotator(-90, 180, -179));

	NormalBlood = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NormalBlood"));
	NormalBlood->SetupAttachment(NeckMesh);
	static ConstructorHelpers::FObjectFinder<UNiagaraSystem>fx2(TEXT("/Script/Niagara.NiagaraSystem'/Game/AttackTitan/Blood/CriticalBloodGigant.CriticalBloodGigant'"));
	if (fx2.Succeeded())
	{
		NormalBlood->SetAsset(fx.Object);
	}
	NormalBlood->SetAutoActivate(false);
}

// Called when the game starts or when spawned
void ABeastGigant::BeginPlay()
{
	Super::BeginPlay();

	//�⺻���´� idle ���·� �ʱ�ȭ
	beastState = EBeastGigantState::IDLE;

	LeftForeArmMesh->OnComponentBeginOverlap.AddDynamic(this, &ABeastGigant::OnBeginOverLeftForeArm);
	LeftForeArmMesh->OnComponentEndOverlap.AddDynamic(this, &ABeastGigant::OnEndOverlapLeftForeArm);

	LeftArmMesh->OnComponentBeginOverlap.AddDynamic(this, &ABeastGigant::OnBeginOverlapLeftArm);
	LeftArmMesh->OnComponentEndOverlap.AddDynamic(this, &ABeastGigant::OnEndOverlapLeftArm);

	RightForeArmMesh->OnComponentBeginOverlap.AddDynamic(this, &ABeastGigant::OnBeginOverlapRightForeArm);
	RightForeArmMesh->OnComponentEndOverlap.AddDynamic(this, &ABeastGigant::OnEndOverlapRightForeArm);

	RightArmMesh->OnComponentBeginOverlap.AddDynamic(this, &ABeastGigant::OnBeginOverlapRightArm);
	RightArmMesh->OnComponentEndOverlap.AddDynamic(this, &ABeastGigant::OnEndOverlapRightArm);

	LeftLegMesh->OnComponentBeginOverlap.AddDynamic(this, &ABeastGigant::OnBeginOverlapLeftLeg);
	LeftLegMesh->OnComponentEndOverlap.AddDynamic(this, &ABeastGigant::OnEndOverlapLeftLeg);

	RightLegMesh->OnComponentBeginOverlap.AddDynamic(this, &ABeastGigant::OnBeginOverlapRightLeg);
	RightLegMesh->OnComponentEndOverlap.AddDynamic(this, &ABeastGigant::OnEndOverlapRightLeg);

	BodyMesh->OnComponentBeginOverlap.AddDynamic(this, &ABeastGigant::OnBeginOverlapBody);
	BodyMesh->OnComponentEndOverlap.AddDynamic(this, &ABeastGigant::OnEndOverlapBody);

	NeckMesh->OnComponentBeginOverlap.AddDynamic(this, &ABeastGigant::OnBeginOverlapNeck);
	NeckMesh->OnComponentEndOverlap.AddDynamic(this, &ABeastGigant::OnEndOverlapNeck);


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


void ABeastGigant::TakeDamage()
{
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

//����Ʈ �����
void ABeastGigant::OnBeginOverLeftForeArm(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//��ü �̸��� BP_Knife�ΰ�쿡�� ������ �̺�Ʈ �߻�
	if (OtherActor->GetName().Contains("BP_Knife") && bIsOverlappingKnife == false)
	{
		// ������ ���� ����
		bIsOverlappingKnife = true;

		// ���� ������ �Լ� ȣ��
		TakeDamage();

		UE_LOG(LogTemp, Warning, TEXT("BeginOverlapLeftForeArm"));

		UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), NormalBlood->GetAsset(), LeftForeArmMesh->GetComponentLocation(), BodyMesh->GetComponentRotation());

	}
}

void ABeastGigant::OnEndOverlapLeftForeArm(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	bIsOverlappingKnife = false;
	UE_LOG(LogTemp, Warning, TEXT("EndOverlapLeftForeArm"));
}


//����Ʈ ��
void ABeastGigant::OnBeginOverlapLeftArm(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//��ü �̸��� BP_Knife�ΰ�쿡�� ������ �̺�Ʈ �߻�
	if (OtherActor->GetName().Contains("BP_Knife") && bIsOverlappingKnife == false)
	{
		// ������ ���� ����
		bIsOverlappingKnife = true;

		// ���� ������ �Լ� ȣ��
		TakeDamage();

		UE_LOG(LogTemp, Warning, TEXT("BeginOverlapLeftForeArm"));

		UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), NormalBlood->GetAsset(), LeftArmMesh->GetComponentLocation(), BodyMesh->GetComponentRotation());

	}
}

void ABeastGigant::OnEndOverlapLeftArm(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	bIsOverlappingKnife = false;
	UE_LOG(LogTemp, Warning, TEXT("EndOverlapLeftForeArm"));
}


//����Ʈ �����
void ABeastGigant::OnBeginOverlapRightForeArm(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//��ü �̸��� BP_Knife�ΰ�쿡�� ������ �̺�Ʈ �߻�
	if (OtherActor->GetName().Contains("BP_Knife") && bIsOverlappingKnife == false)
	{
		// ������ ���� ����
		bIsOverlappingKnife = true;

		// ���� ������ �Լ� ȣ��
		TakeDamage();

		UE_LOG(LogTemp, Warning, TEXT("BeginOverlapLeftForeArm"));

		UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), NormalBlood->GetAsset(), RightForeArmMesh->GetComponentLocation(), BodyMesh->GetComponentRotation());

	}
}

void ABeastGigant::OnEndOverlapRightForeArm(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	bIsOverlappingKnife = false;
	UE_LOG(LogTemp, Warning, TEXT("EndOverlapLeftForeArm"));
}


//����Ʈ��
void ABeastGigant::OnBeginOverlapRightArm(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//��ü �̸��� BP_Knife�ΰ�쿡�� ������ �̺�Ʈ �߻�
	if (OtherActor->GetName().Contains("BP_Knife") && bIsOverlappingKnife == false)
	{
		// ������ ���� ����
		bIsOverlappingKnife = true;

		// ���� ������ �Լ� ȣ��
		TakeDamage();

		UE_LOG(LogTemp, Warning, TEXT("BeginOverlapLeftForeArm"));

		UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), NormalBlood->GetAsset(), RightArmMesh->GetComponentLocation(), BodyMesh->GetComponentRotation());

	}
}

void ABeastGigant::OnEndOverlapRightArm(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	bIsOverlappingKnife = false;
	UE_LOG(LogTemp, Warning, TEXT("EndOverlapLeftForeArm"));
}


//����Ʈ ����
void ABeastGigant::OnBeginOverlapLeftLeg(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//��ü �̸��� BP_Knife�ΰ�쿡�� ������ �̺�Ʈ �߻�
	if (OtherActor->GetName().Contains("BP_Knife") && bIsOverlappingKnife == false)
	{
		// ������ ���� ����
		bIsOverlappingKnife = true;

		// ���� ������ �Լ� ȣ��
		TakeDamage();

		UE_LOG(LogTemp, Warning, TEXT("BeginOverlapLeftForeArm"));

		UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), NormalBlood->GetAsset(), LeftLegMesh->GetComponentLocation(), BodyMesh->GetComponentRotation());

	}
}

void ABeastGigant::OnEndOverlapLeftLeg(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	bIsOverlappingKnife = false;
	UE_LOG(LogTemp, Warning, TEXT("EndOverlapLeftForeArm"));
}


//����Ʈ ����
void ABeastGigant::OnBeginOverlapRightLeg(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//��ü �̸��� BP_Knife�ΰ�쿡�� ������ �̺�Ʈ �߻�
	if (OtherActor->GetName().Contains("BP_Knife") && bIsOverlappingKnife == false)
	{
		// ������ ���� ����
		bIsOverlappingKnife = true;

		// ���� ������ �Լ� ȣ��
		TakeDamage();

		UE_LOG(LogTemp, Warning, TEXT("BeginOverlapLeftForeArm"));

		UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), NormalBlood->GetAsset(), RightLegMesh->GetComponentLocation(), BodyMesh->GetComponentRotation());

	}
}

void ABeastGigant::OnEndOverlapRightLeg(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	bIsOverlappingKnife = false;
	UE_LOG(LogTemp, Warning, TEXT("EndOverlapLeftForeArm"));
}


//����
void ABeastGigant::OnBeginOverlapBody(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//��ü �̸��� BP_Knife�ΰ�쿡�� ������ �̺�Ʈ �߻�
	if (OtherActor->GetName().Contains("BP_Knife") && bIsOverlappingKnife == false)
	{
		// ������ ���� ����
		bIsOverlappingKnife = true;

		// ���� ������ �Լ� ȣ��
		TakeDamage();

		UE_LOG(LogTemp, Warning, TEXT("BeginOverlapLeftForeArm"));

		UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), CriticalBlood->GetAsset(), BodyMesh->GetComponentLocation(), BodyMesh->GetComponentRotation());

	}
}

void ABeastGigant::OnEndOverlapBody(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	bIsOverlappingKnife = false;
	UE_LOG(LogTemp, Warning, TEXT("EndOverlapLeftForeArm"));
}


//��
void ABeastGigant::OnBeginOverlapNeck(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//��ü �̸��� BP_Knife�ΰ�쿡�� ������ �̺�Ʈ �߻�
	if (OtherActor->GetName().Contains("BP_Knife") && bIsOverlappingKnife == false)
	{
		// ������ ���� ����
		bIsOverlappingKnife = true;

		// ���� ������ �Լ� ȣ��
		TakeDamage();

		UE_LOG(LogTemp, Warning, TEXT("BeginOverlapLeftForeArm"));

		UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), NormalBlood->GetAsset(), NeckMesh->GetComponentLocation(), BodyMesh->GetComponentRotation());

	}
}

void ABeastGigant::OnEndOverlapNeck(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	bIsOverlappingKnife = false;
	UE_LOG(LogTemp, Warning, TEXT("EndOverlapLeftForeArm"));
}
