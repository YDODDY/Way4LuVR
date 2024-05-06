// Fill out your copyright notice in the Description page of Project Settings.


#include "NormalGigant1.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"
#include "Navigation/PathFollowingComponent.h"
#include "AITypes.h"
#include <../../../../../../../Source/Runtime/AIModule/Classes/AIController.h>
#include "GameFramework/Character.h"
#include "Engine/EngineTypes.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/BoxComponent.h"
#include "NormalGigant1AIController.h"
#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"
#include <../../../../../../../Source/Runtime/Engine/Classes/Components/StaticMeshComponent.h>

// ������
ANormalGigant1::ANormalGigant1()
{

	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<USkeletalMesh>normalGigant1(TEXT("/Script/Engine.SkeletalMesh'/Game/AttackTitan/NormalGigant1/Normal1/NormalGigant1.NormalGigant1'"));

	if (normalGigant1.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(normalGigant1.Object);
	}

	GetMesh()->SetRelativeLocation(FVector(0, 0, -395));
	GetMesh()->SetRelativeRotation(FRotator(0, -90, 0));
	GetMesh()->SetWorldScale3D(FVector(4.5));
	GetCharacterMovement()->MaxWalkSpeed = 400.0f;


	//������ ���̷�Ż �޽ø� �������ش�
	static ConstructorHelpers::FObjectFinder<USkeletalMesh>gigantSkeletalMesh(TEXT("/Script/Engine.SkeletalMesh'/Game/AttackTitan/NormalGigant1/Normal1/NormalGigant1.NormalGigant1'"));
	if (gigantSkeletalMesh.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(gigantSkeletalMesh.Object);
	}

	//ĸ�� ũ�� ����
	GetCapsuleComponent()->SetCapsuleHalfHeight(401.396179f);

	//ĸ�� �ѷ��� ����
	GetCapsuleComponent()->SetCapsuleRadius(120.046379f);



	//0. �����!!
	BoxMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	//������ ����� ����ƽ�޽ø� �������ش�
	static ConstructorHelpers::FObjectFinder<UStaticMesh>NeckMesh(TEXT("/Script/Engine.StaticMesh'/Engine/EngineMeshes/Cube.Cube'"));
	if (NeckMesh.Succeeded())
	{
		BoxMesh->SetStaticMesh(NeckMesh.Object);
	}

	BoxMesh->SetupAttachment(GetMesh());

	// NeckSocket�� ��ġ�� ������
	FVector NeckSocketLocation = GetMesh()->GetSocketLocation(TEXT("NeckSocket"));

	// BoxMesh�� ��ġ�� NeckSocket�� ��ġ�� ����
	BoxMesh->SetRelativeLocation(NeckSocketLocation);

	// BoxMesh�� NeckSocket�� ����
	BoxMesh->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("NeckSocket"));

	BoxMesh->SetRelativeLocation(FVector(-2.12f, -6.16f, -7.0f));
	BoxMesh->SetRelativeRotation(FRotator(0.f, 12.50038f, 0.f));
	BoxMesh->SetWorldScale3D(FVector(0.13f, 0.071f, 0.054f));

	//�����ϰ�
	BoxMesh->SetVisibility(false);


	//1. ����!!
	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyComp"));

	BodyMesh->SetupAttachment(GetMesh());

	BodyMesh->SetVisibility(false);

	//������ ������ �޽ø� �������ش�
	static ConstructorHelpers::FObjectFinder<UStaticMesh>gigantBodyMesh(TEXT("/Script/Engine.StaticMesh'/Engine/BasicShapes/Cylinder.Cylinder'"));
	if (gigantBodyMesh.Succeeded())
	{
		BodyMesh->SetStaticMesh(gigantBodyMesh.Object);

	}

	BodyMesh->SetRelativeLocation(FVector(-1.6f, -3.34f, 0.52f));
	BodyMesh->SetRelativeRotation(FRotator(0.0f, 0.0f, -87.0f));
	BodyMesh->SetWorldScale3D(FVector(0.385f, 0.31f, 0.59f));

	//SpineSocket
	// SpineSocket�� ��ġ�� ������
	FVector SpineSocketLocation = GetMesh()->GetSocketLocation(TEXT("SpineSocket"));

	// BodyMesh�� ��ġ�� SpineSocket�� ��ġ�� ����
	BodyMesh->SetRelativeLocation(NeckSocketLocation);

	// BodyMesh�� SpineSocket�� ����
	BodyMesh->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("SpineSocket"));

	//���� , ��ٸ�

	//2.�޼�!!
	LeftArm = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeftArmComp"));

	LeftArm->SetVisibility(false);
	//������ �޼� �޽ø� �������ش�
	static ConstructorHelpers::FObjectFinder<UStaticMesh>gigantLeftMesh(TEXT("/Script/Engine.StaticMesh'/Engine/BasicShapes/Cylinder.Cylinder'"));
	if (gigantLeftMesh.Succeeded())
	{
		LeftArm->SetStaticMesh(gigantLeftMesh.Object);
	}

	// LeftForeArmSocket�� ��ġ�� ������
	FVector LeftArmSocketLocation = GetMesh()->GetSocketLocation(TEXT("LeftForeArmSocket"));

	// LeftArm�� ��ġ�� LeftForeArmSocket�� ��ġ�� ����
	LeftArm->SetRelativeLocation(LeftArmSocketLocation);

	//LeftArm�� LeftForeArmSocket�� ����
	LeftArm->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("LeftForeArmSocket"));

	LeftArm->SetRelativeLocation(FVector(-1.8f, -9.4f, -1.0f));
	LeftArm->SetRelativeRotation(FRotator(0.0f, 0.0f, 96.7f));
	LeftArm->SetWorldScale3D(FVector(0.06f, 0.06f, 0.5f));

	//3. ������!!
	RightArm = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightArmComp"));

	RightArm->SetVisibility(false);

	//������ ������ �޽ø� �������ش�
	static ConstructorHelpers::FObjectFinder<UStaticMesh>gigantRightMesh(TEXT("/Script/Engine.StaticMesh'/Engine/BasicShapes/Cylinder.Cylinder'"));
	if (gigantRightMesh.Succeeded())
	{
		RightArm->SetStaticMesh(gigantRightMesh.Object);

	}


	FVector RightArmSocketLocation = GetMesh()->GetSocketLocation(TEXT("RightForeArmSocket"));


	RightArm->SetRelativeLocation(RightArmSocketLocation);


	RightArm->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("RightForeArmSocket"));

	RightArm->SetRelativeLocation(FVector(-1.8f, -9.4f, -1.0f));
	RightArm->SetRelativeRotation(FRotator(0.0f, 0.0f, 96.7f));
	RightArm->SetWorldScale3D(FVector(0.06f, 0.06f, 0.5f));

	// 4.�޹�!!
	LeftLeg = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeftLegComp"));

	LeftLeg->SetVisibility(false);

	//������ �޹� �޽ø� �������ش�
	static ConstructorHelpers::FObjectFinder<UStaticMesh>gigantleftLegMesh(TEXT("/Script/Engine.StaticMesh'/Engine/BasicShapes/Cylinder.Cylinder'"));
	if (gigantleftLegMesh.Succeeded())
	{
		LeftLeg->SetStaticMesh(gigantleftLegMesh.Object);

	}

	FVector LeftLegSocketLocation = GetMesh()->GetSocketLocation(TEXT("LeftLegSocket"));


	LeftLeg->SetRelativeLocation(LeftLegSocketLocation);


	LeftLeg->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("LeftLegSocket"));

	LeftLeg->SetRelativeLocation(FVector(-1.8f, -9.4f, -1.0f));
	LeftLeg->SetRelativeRotation(FRotator(0.0f, 0.0f, 96.7f));
	LeftLeg->SetWorldScale3D(FVector(0.06f, 0.06f, 0.61f));

	//5.������!!
	RightLeg = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightLegComp"));

	RightLeg->SetVisibility(false);
	//������ ������ �޽ø� �������ش�
	static ConstructorHelpers::FObjectFinder<UStaticMesh>gigantRightLegMesh(TEXT("/Script/Engine.StaticMesh'/Engine/BasicShapes/Cylinder.Cylinder'"));
	if (gigantRightLegMesh.Succeeded())
	{
		RightLeg->SetStaticMesh(gigantRightLegMesh.Object);

	}


	FVector RightLegSocketLocation = GetMesh()->GetSocketLocation(TEXT("RightLegSocket"));


	RightLeg->SetRelativeLocation(RightLegSocketLocation);


	RightLeg->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("RightLegSocket"));

	RightLeg->SetRelativeLocation(FVector(-1.8f, -9.4f, -1.0f));
	RightLeg->SetRelativeRotation(FRotator(0.0f, 0.0f, 96.7f));
	RightLeg->SetWorldScale3D(FVector(0.06f, 0.06f, 0.61f));

	//���� �����

}







// Called when the game starts or when spawned
void ANormalGigant1::BeginPlay()
{
	Super::BeginPlay();

	//�⺻���´� Patrol ���·� �ʱ�ȭ
	gigant1State = ENormalGigan1State::PATROL;

	//�׺���̼� �ý��� 
	navSys = UNavigationSystemV1::GetCurrent(currentWorld);



	NavArea = FNavigationSystem::GetCurrent<UNavigationSystemV1>(this);

	// ���� HP�� maxHP�� �ʱ�ȭ
	currentHP = maxHP;

	BoxMesh->OnComponentBeginOverlap.AddDynamic(this, &ANormalGigant1::OnBeginOverlapNeck);
	BoxMesh->OnComponentEndOverlap.AddDynamic(this, &ANormalGigant1::OnEndOverlapNeck);

	BodyMesh->OnComponentBeginOverlap.AddDynamic(this, &ANormalGigant1::OnBeginOverlapBody);
	BodyMesh->OnComponentEndOverlap.AddDynamic(this, &ANormalGigant1::OnEndOverlapBody);

	LeftArm->OnComponentBeginOverlap.AddDynamic(this, &ANormalGigant1::OnBeginOverlapLeftArm);
	LeftArm->OnComponentEndOverlap.AddDynamic(this, &ANormalGigant1::OnEndOverlapLeftArm);

	RightArm->OnComponentBeginOverlap.AddDynamic(this, &ANormalGigant1::OnBeginOverlapRightArm);
	RightArm->OnComponentEndOverlap.AddDynamic(this, &ANormalGigant1::OnEndOverlapRightArm);

	LeftLeg->OnComponentBeginOverlap.AddDynamic(this, &ANormalGigant1::OnBeginOverlapLeftLeg);
	LeftLeg->OnComponentEndOverlap.AddDynamic(this, &ANormalGigant1::OnEndOverlapLeftLeg);

	RightLeg->OnComponentBeginOverlap.AddDynamic(this, &ANormalGigant1::OnBeginOverlapRightLeg);
	RightLeg->OnComponentEndOverlap.AddDynamic(this, &ANormalGigant1::OnEndOverlapRightLeg);


}

// Called every frame
void ANormalGigant1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	switch (gigant1State)
	{
	case ENormalGigan1State::IDLE:
		idle(DeltaTime);
		break;
	case ENormalGigan1State::PATROL:
		patrol(DeltaTime);
		break;
	case ENormalGigan1State::MOVE:
		move();
		break;
	case ENormalGigan1State::ATTACK:
		attack();
		break;
	case ENormalGigan1State::DAMAGED:
		damaged();
		break;
	case ENormalGigan1State::DIE:
		die();
		break;
	default:
		break;
	}
	//������ �÷��̾ �ǽð����� ã�� �Լ�
	SearchPlayer();

	//������ �÷��̾���� �Ÿ��� ��� �Լ�
	DistanceToPlayer();

	//��ŸŸ�� �����ϱ�
	currentTime += DeltaTime;

	//�Ÿ� üũ�� �α��� ����
	//�÷��̾�� ai������ �Ÿ�
	//UE_LOG(LogTemp, Warning, TEXT("Distance to Player: %f"), DistanceAiToCharacter.Length());


	//UE_LOG(LogTemp, Warning, TEXT("Distance to Vector: %f, %f, %f"), DistanceVector.X, DistanceVector.Y, DistanceVector.Z);

	//�÷��̾��� ��ġ
	//UE_LOG(LogTemp, Warning, TEXT("PlayerLocation: %f, %f, %f"), PlayerLocation.X, PlayerLocation.Y, PlayerLocation.Z);

	FString strState = UEnum::GetValueAsString(gigant1State);
	DrawDebugString(GetWorld(), GetActorLocation(), strState, nullptr, FColor::Yellow, 0, true, 1);


	// currentHP Ȯ��
	UE_LOG(LogTemp, Warning, TEXT("Current HP: %d"), currentHP);


}

void ANormalGigant1::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

//�Ϲ� ������ ������ 2¥��
void ANormalGigant1::TakeDamage()
{
	// ���� HP�� 2 ����
	currentHP = FMath::Clamp(currentHP - 2, 0, maxHP);

	// ĳ���Ͱ� ������ ���� ������ Ȯ��
	if (currentHP <= 0)
	{
		bIsGigantDie = true;
		// HP�� 0 ���ϸ� ĳ���Ͱ� ���� ������ ó��
		gigant1State = ENormalGigan1State::DIE;
	}
	else
	{
		//�ִϸ��̼�,���̾ư��� ���� ����
	}
}

//����̸� ���������� ũ��Ƽ�� ������ <���>
void ANormalGigant1::TakeCriticalDamage()
{
	// ���� HP�� 50 ����
	currentHP = FMath::Clamp(currentHP - 50, 0, maxHP);

	// ĳ���Ͱ� ������ ���� ������ Ȯ��
	if (currentHP <= 0)
	{
		bIsGigantDie = true;
		// HP�� 0 ���ϸ� ĳ���Ͱ� ���� ������ ó��
		gigant1State = ENormalGigan1State::DIE;
	}
	else
	{
		//�ִϸ��̼�,���̾ư��� ���� ����
	}
}

void ANormalGigant1::OnBeginOverlapNeck(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//��ü �̸��� BP_Knife�ΰ�쿡�� ������ �̺�Ʈ �߻�
	if (OtherActor->GetActorLabel() == "BP_Knife" && bIsOverlappingKnife == false)
	{
		// ������ ���� ����
		bIsOverlappingKnife = true;

		// ���� ������ �Լ� ȣ��
		TakeCriticalDamage();

		UE_LOG(LogTemp, Warning, TEXT("BeginOverlap"));
	}


}

void ANormalGigant1::OnEndOverlapNeck(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	bIsOverlappingKnife = false;
	UE_LOG(LogTemp, Warning, TEXT("EndOverlap"));

}


//����
void ANormalGigant1::OnBeginOverlapBody(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//��ü �̸��� BP_Knife�ΰ�쿡�� ������ �̺�Ʈ �߻�
	if (OtherActor->GetActorLabel() == "BP_Knife" && bIsOverlappingKnife == false)
	{
		// ������ ���� ����
		bIsOverlappingKnife = true;

		// ���� ������ �Լ� ȣ��
		TakeDamage();

		UE_LOG(LogTemp, Warning, TEXT("BeginOverlap"));


		// �浹 �������� ��ƼŬ ���� <����������>
		FVector SpawnLocation = SweepResult.ImpactPoint;
		FRotator SpawnRotation = SweepResult.ImpactNormal.Rotation();
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), BloodPX, SpawnLocation, SpawnRotation);
	}
}

void ANormalGigant1::OnEndOverlapBody(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	bIsOverlappingKnife = false;
}


//����
void ANormalGigant1::OnBeginOverlapLeftArm(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//��ü �̸��� BP_Knife�ΰ�쿡�� ������ �̺�Ʈ �߻�
	if (OtherActor->GetActorLabel() == "BP_Knife" && bIsOverlappingKnife == false)
	{
		// ������ ���� ����
		bIsOverlappingKnife = true;

		// ���� ������ �Լ� ȣ��
		TakeDamage();

		UE_LOG(LogTemp, Warning, TEXT("BeginOverlap"));
	}
}

void ANormalGigant1::OnEndOverlapLeftArm(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	bIsOverlappingKnife = false;
}


//������
void ANormalGigant1::OnBeginOverlapRightArm(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//��ü �̸��� BP_Knife�ΰ�쿡�� ������ �̺�Ʈ �߻�
	if (OtherActor->GetActorLabel() == "BP_Knife" && bIsOverlappingKnife == false)
	{
		// ������ ���� ����
		bIsOverlappingKnife = true;

		// ���� ������ �Լ� ȣ��
		TakeDamage();

		UE_LOG(LogTemp, Warning, TEXT("BeginOverlap"));
	}
}

void ANormalGigant1::OnEndOverlapRightArm(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	bIsOverlappingKnife = false;
}


//�޹�
void ANormalGigant1::OnBeginOverlapLeftLeg(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//��ü �̸��� BP_Knife�ΰ�쿡�� ������ �̺�Ʈ �߻�
	if (OtherActor->GetActorLabel() == "BP_Knife" && bIsOverlappingKnife == false)
	{
		// ������ ���� ����
		bIsOverlappingKnife = true;

		// ���� ������ �Լ� ȣ��
		TakeDamage();

		UE_LOG(LogTemp, Warning, TEXT("BeginOverlap"));
	}
}

void ANormalGigant1::OnEndOverlapLeftLeg(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	bIsOverlappingKnife = false;
}


//������
void ANormalGigant1::OnBeginOverlapRightLeg(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//��ü �̸��� BP_Knife�ΰ�쿡�� ������ �̺�Ʈ �߻�
	if (OtherActor->GetActorLabel() == "BP_Knife" && bIsOverlappingKnife == false)
	{
		// ������ ���� ����
		bIsOverlappingKnife = true;

		// ���� ������ �Լ� ȣ��
		TakeDamage();

		UE_LOG(LogTemp, Warning, TEXT("BeginOverlap"));
	}
}

void ANormalGigant1::OnEndOverlapRightLeg(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	bIsOverlappingKnife = false;
}


void ANormalGigant1::idle(float deltaSeconds)
{
	// ������ �þ߹��� �ȿ� ������
	if (bIsPlayerInSight())
	{
		//������ �� ������ �÷��̾����� �����ϰ�
		GetCharacterMovement()->bOrientRotationToMovement = true;


		//Patrol������Ʈ�� �̵��ؼ� �÷��̾ ���� �Ⱥ����� �����ϰ� �ൿ�Ѵ�.
		gigant1State = ENormalGigan1State::PATROL;




	}
	if (bIsPatrolAndIdle)
	{

		// 10�� �ڿ� ��Ʈ�� ���·� ��ȯ
		if (currentTime > RandomPatrolDelay)
		{
			UE_LOG(LogTemp, Warning, TEXT("Working"));
			gigant1State = ENormalGigan1State::PATROL;
			currentTime = 0;
			bIsPatrolAndIdle = false;
			aiCon->RandomPatrol();
		}
	}



}

void ANormalGigant1::patrol(float deltaSeconds)
{


	// ������ �þ߹��� �ȿ� ������
	if (bIsPlayerInSight())
	{
		//������ �� ������ �÷��̾����� �����ϰ�
		GetCharacterMovement()->bOrientRotationToMovement = true;

		//AI��Ʈ�ѷ��� ������ �����
		if (nullptr == aiCon)

			aiCon = Cast<ANormalGigant1AIController>(GetController());
		aiCon->StandStill();



		//MoveState�� �̵��ؼ� �÷��̾����� �̵��Ѵ�.
		gigant1State = ENormalGigan1State::MOVE;




	}
	//�ƴϸ� ����
	else
	{
		if (NavArea && bIsOncePatrol == false)
		{

			// AI ��Ʈ�ѷ����� ���ο� ��ǥ���� �޾ƿͼ� �̵���
			if (nullptr == aiCon)
				aiCon = Cast<ANormalGigant1AIController>(GetController());
			aiCon->GetPathFollowingComponent()->OnRequestFinished.AddUObject
			(this, &ANormalGigant1::OnAIMoveCompleted);

			aiCon->MoveToLocation(RandomLocation);

			//�ѹ���
			bIsOncePatrol = true;

			UE_LOG(LogTemp, Warning, TEXT("88888"));
			// 5�� �ڿ� ��Ʈ�� ���·� ��ȯ

		}
		if (currentTime > ChangeidleDelay)
		{
			UE_LOG(LogTemp, Warning, TEXT("999999"));
			gigant1State = ENormalGigan1State::IDLE;
			currentTime = 0;
			aiCon->StopMovement();
			bIsPatrolAndIdle = true;
		}
	}

}

//��Ʈ�ѿ��� �ѹ��� ��ǥ���� �޾ƿ����� ai��Ʈ�ѷ����� ���ο� ��ǥ���� �޾ƿͼ� ����
void ANormalGigant1::OnAIMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{

	if (gigant1State == ENormalGigan1State::PATROL)
	{
		aiCon->RandomPatrol();

	}
}


//�þ߼��� , ���忡�� �÷��̾� �� ã�� �Լ�
void ANormalGigant1::SearchPlayer()
{
	// ���� ���带 ������
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
		// AI�� �þ� ����(Forward)�� �÷��̾���� ���� ���� ������ ���� ���
		AngleToPlayer = FMath::Acos(FVector::DotProduct(ToPlayer.GetSafeNormal(), GetActorForwardVector()));

		// AI�� �þ� ���� (90��)�� �÷��̾ �����鼭 AI�� ������ �ƴ� ����� ����
		if (FMath::RadiansToDegrees(AngleToPlayer) <= 90.0f && FVector::DotProduct(ToPlayer, GetActorForwardVector()) > 0)
		{
			float DistanceToPlayer = ToPlayer.Size();
			return;
		}
	}
	else
	{
		// �÷��̾� ���� ã�� ���� ��� ó��
		UE_LOG(LogTemp, Warning, TEXT("Player not found"));
	}
}

//�÷��̾����� �����̴� �Լ� <�׺���̼� �ý����� �̿��ؼ� ��Ʈ���ϵ� �i�ƿ��°� ��û�ϰ�>
void ANormalGigant1::MoveToPlayer()
{

	// ���� �ִϸ��̼��� ���� ���� �ƴ� ��쿡�� �̵�
	if (!bIsAttackAnimationPlaying)
	{
		FVector playerLocation = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();

		FVector towardPlayer = playerLocation - GetActorLocation();

		AddMovementInput(towardPlayer.GetSafeNormal(1.0));
	}


}



//�÷��̾���� �Ÿ��� ��� �Լ�
float ANormalGigant1::DistanceToPlayer()
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

//�÷��̾ �þ� �ȿ� �ִ��� Ȯ���ϴ� �Լ�
bool ANormalGigant1::bIsPlayerInSight()
{
	if (PlayerPawn)
	{
		// AI�� ��ġ�� �÷��̾��� ��ġ ���� ���
		FVector ToPlayer = PlayerPawn->GetActorLocation() - GetActorLocation();
		// AI�� �þ� ����(Forward)�� �÷��̾���� ���� ���� ������ ���� ���
		AngleToPlayer = FMath::Acos(FVector::DotProduct(ToPlayer.GetSafeNormal(), GetActorForwardVector()));

		// AI�� �þ� ���� �ȿ� �÷��̾ �����鼭 AI�� ������ �ƴ� ��� true ��ȯ
		if (FMath::RadiansToDegrees(AngleToPlayer) <= 90.0f && FVector::DotProduct(ToPlayer, GetActorForwardVector()) > 0)
		{
			float DistanceToPlayer = ToPlayer.Size();
			// �Ÿ��� 2000 ������ ��쿡�� true ��ȯ
			if (DistanceToPlayer <= 2000.0f)
			{
				return true;
			}
		}
	}
	return false;
}

void ANormalGigant1::RestartAttackFlag()
{
	// ���� �÷��� �缳��
	bIsAttack = false;
}

void ANormalGigant1::DieDestroy()
{
	Destroy();
}



//���� ������Ʈ
void ANormalGigant1::move()
{
	if (bIsAttackAnimationPlaying == false)
	{
		//�÷��̾ �þ߾ȿ� �ְ� �÷��̾���� �Ÿ��� 300�̻��̸�
		if (bIsPlayerInSight() && DistanceAiToCharacter.Length() > 300.0f)
		{
			//�÷��̾����� �ٰ�����
			MoveToPlayer();
		}

		//�װ� �ƴҽ� 
		else
		{
			//��Ÿ� �ȿ� ������ ���� ������Ʈ�� ��ȯ�ض�
			gigant1State = ENormalGigan1State::ATTACK;
		}
	}

}

//���� ������Ʈ
void ANormalGigant1::attack()
{
	//�÷��̾ ��Ÿ� �ȿ� ������ �÷��̾���� �Ÿ��� 300���϶�� �����ض�
	if (bIsPlayerInSight() && DistanceAiToCharacter.Length() <= 300.0f)
	{
		if (bIsAttack == false)
		{
			int32 Value = FMath::RandRange(1, 4);
			{
				if (Value == 1)
				{
					PlayAnimMontage(AttackMT1);

					// ���� �ִϸ��̼��� ���� ������ ��Ÿ���� ���� ����
					bIsAttackAnimationPlaying = true;

					bIsAttack = true;
				}
				if (Value == 2)
				{
					PlayAnimMontage(AttackMT2);

					// ���� �ִϸ��̼��� ���� ������ ��Ÿ���� ���� ����
					bIsAttackAnimationPlaying = true;

					bIsAttack = true;
				}
				if (Value == 3)
				{
					PlayAnimMontage(AttackMT3);

					// ���� �ִϸ��̼��� ���� ������ ��Ÿ���� ���� ����
					bIsAttackAnimationPlaying = true;

					bIsAttack = true;
				}
				if (Value == 4)
				{
					PlayAnimMontage(AttackMT4);

					// ���� �ִϸ��̼��� ���� ������ ��Ÿ���� ���� ����
					bIsAttackAnimationPlaying = true;

					bIsAttack = true;
				}
			}


			//3�ʸ��� �����ض�
			GetWorldTimerManager().SetTimer(TimerHandle_DelayAttack, this, &ANormalGigant1::RestartAttackFlag, 3.0f, false);
		}
	}
	else
	{

		// ��Ʈ�� ���·� ����
		gigant1State = ENormalGigan1State::PATROL;
		// AI�� ��Ʈ�� ���·� �̵�
		aiCon->RandomPatrol();
	}








}

//�������޴� ������Ʈ
void ANormalGigant1::damaged()
{

}

//���� ������ ������Ʈ
void ANormalGigant1::die()
{
	if (bIsGigantDie)
	{
		aiCon->StopMovement();
		UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
		int32 Value = FMath::RandRange(1, 4);
		float Duration = 0.0f; // �ִϸ��̼� ��Ÿ���� ��� �ð�
		UAnimMontage* SelectedMontage = nullptr;

		if (AnimInstance && !bIsOnceDieMT)
		{
			if (Value == 1)
			{
				SelectedMontage = Die1;
				bIsGigantDie = false;
				bIsOnceDieMT = true;
			}
			else if (Value == 2)
			{
				SelectedMontage = Die2;
				bIsGigantDie = false;
				bIsOnceDieMT = true;
			}
			else if (Value == 3)
			{
				SelectedMontage = Die3;
				bIsGigantDie = false;
				bIsOnceDieMT = true;
			}
			else if (Value == 4)
			{
				SelectedMontage = Die4;
				bIsGigantDie = false;
				bIsOnceDieMT = true;
			}

			if (SelectedMontage)
			{
				Duration = SelectedMontage->CalculateSequenceLength() - 0.25f;
				AnimInstance->Montage_Play(SelectedMontage, 1.0f);

				// �ִϸ��̼� ����� ���� �Ŀ� ������Ʈ�� �����ϱ� ���� Ÿ�̸� ����
				GetWorldTimerManager().SetTimer(TimerHandle_Die1Destroy, this, &ANormalGigant1::DieDestroy, Duration, false);
			}
		}
	}


}
