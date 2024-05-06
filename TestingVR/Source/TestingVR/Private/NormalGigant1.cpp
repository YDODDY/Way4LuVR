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

// 생성자
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


	//거인의 스켈레탈 메시를 적용해준다
	static ConstructorHelpers::FObjectFinder<USkeletalMesh>gigantSkeletalMesh(TEXT("/Script/Engine.SkeletalMesh'/Game/AttackTitan/NormalGigant1/Normal1/NormalGigant1.NormalGigant1'"));
	if (gigantSkeletalMesh.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(gigantSkeletalMesh.Object);
	}

	//캡슐 크기 조절
	GetCapsuleComponent()->SetCapsuleHalfHeight(401.396179f);

	//캡슐 둘레값 설정
	GetCapsuleComponent()->SetCapsuleRadius(120.046379f);



	//0. 목덜미!!
	BoxMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	//거인의 목덜미 스태틱메시를 적용해준다
	static ConstructorHelpers::FObjectFinder<UStaticMesh>NeckMesh(TEXT("/Script/Engine.StaticMesh'/Engine/EngineMeshes/Cube.Cube'"));
	if (NeckMesh.Succeeded())
	{
		BoxMesh->SetStaticMesh(NeckMesh.Object);
	}

	BoxMesh->SetupAttachment(GetMesh());

	// NeckSocket의 위치를 가져옴
	FVector NeckSocketLocation = GetMesh()->GetSocketLocation(TEXT("NeckSocket"));

	// BoxMesh의 위치를 NeckSocket의 위치로 설정
	BoxMesh->SetRelativeLocation(NeckSocketLocation);

	// BoxMesh를 NeckSocket에 붙임
	BoxMesh->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("NeckSocket"));

	BoxMesh->SetRelativeLocation(FVector(-2.12f, -6.16f, -7.0f));
	BoxMesh->SetRelativeRotation(FRotator(0.f, 12.50038f, 0.f));
	BoxMesh->SetWorldScale3D(FVector(0.13f, 0.071f, 0.054f));

	//투명하게
	BoxMesh->SetVisibility(false);


	//1. 몸통!!
	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyComp"));

	BodyMesh->SetupAttachment(GetMesh());

	BodyMesh->SetVisibility(false);

	//거인의 오른손 메시를 적용해준다
	static ConstructorHelpers::FObjectFinder<UStaticMesh>gigantBodyMesh(TEXT("/Script/Engine.StaticMesh'/Engine/BasicShapes/Cylinder.Cylinder'"));
	if (gigantBodyMesh.Succeeded())
	{
		BodyMesh->SetStaticMesh(gigantBodyMesh.Object);

	}

	BodyMesh->SetRelativeLocation(FVector(-1.6f, -3.34f, 0.52f));
	BodyMesh->SetRelativeRotation(FRotator(0.0f, 0.0f, -87.0f));
	BodyMesh->SetWorldScale3D(FVector(0.385f, 0.31f, 0.59f));

	//SpineSocket
	// SpineSocket의 위치를 가져옴
	FVector SpineSocketLocation = GetMesh()->GetSocketLocation(TEXT("SpineSocket"));

	// BodyMesh의 위치를 SpineSocket의 위치로 설정
	BodyMesh->SetRelativeLocation(NeckSocketLocation);

	// BodyMesh를 SpineSocket에 붙임
	BodyMesh->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("SpineSocket"));

	//양팔 , 양다리

	//2.왼손!!
	LeftArm = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeftArmComp"));

	LeftArm->SetVisibility(false);
	//거인의 왼손 메시를 적용해준다
	static ConstructorHelpers::FObjectFinder<UStaticMesh>gigantLeftMesh(TEXT("/Script/Engine.StaticMesh'/Engine/BasicShapes/Cylinder.Cylinder'"));
	if (gigantLeftMesh.Succeeded())
	{
		LeftArm->SetStaticMesh(gigantLeftMesh.Object);
	}

	// LeftForeArmSocket의 위치를 가져옴
	FVector LeftArmSocketLocation = GetMesh()->GetSocketLocation(TEXT("LeftForeArmSocket"));

	// LeftArm의 위치를 LeftForeArmSocket의 위치로 설정
	LeftArm->SetRelativeLocation(LeftArmSocketLocation);

	//LeftArm를 LeftForeArmSocket에 붙임
	LeftArm->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("LeftForeArmSocket"));

	LeftArm->SetRelativeLocation(FVector(-1.8f, -9.4f, -1.0f));
	LeftArm->SetRelativeRotation(FRotator(0.0f, 0.0f, 96.7f));
	LeftArm->SetWorldScale3D(FVector(0.06f, 0.06f, 0.5f));

	//3. 오른손!!
	RightArm = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightArmComp"));

	RightArm->SetVisibility(false);

	//거인의 오른손 메시를 적용해준다
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

	// 4.왼발!!
	LeftLeg = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeftLegComp"));

	LeftLeg->SetVisibility(false);

	//거인의 왼발 메시를 적용해준다
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

	//5.오른발!!
	RightLeg = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightLegComp"));

	RightLeg->SetVisibility(false);
	//거인의 오른발 메시를 적용해준다
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

	//어후 힘들어

}







// Called when the game starts or when spawned
void ANormalGigant1::BeginPlay()
{
	Super::BeginPlay();

	//기본상태는 Patrol 상태로 초기화
	gigant1State = ENormalGigan1State::PATROL;

	//네비게이션 시스템 
	navSys = UNavigationSystemV1::GetCurrent(currentWorld);



	NavArea = FNavigationSystem::GetCurrent<UNavigationSystemV1>(this);

	// 현재 HP를 maxHP로 초기화
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
	//거인이 플레이어를 실시간으로 찾는 함수
	SearchPlayer();

	//거인이 플레이어와의 거리를 재는 함수
	DistanceToPlayer();

	//델타타임 누적하기
	currentTime += DeltaTime;

	//거리 체크용 로그의 무덤
	//플레이어와 ai사이의 거리
	//UE_LOG(LogTemp, Warning, TEXT("Distance to Player: %f"), DistanceAiToCharacter.Length());


	//UE_LOG(LogTemp, Warning, TEXT("Distance to Vector: %f, %f, %f"), DistanceVector.X, DistanceVector.Y, DistanceVector.Z);

	//플레이어의 위치
	//UE_LOG(LogTemp, Warning, TEXT("PlayerLocation: %f, %f, %f"), PlayerLocation.X, PlayerLocation.Y, PlayerLocation.Z);

	FString strState = UEnum::GetValueAsString(gigant1State);
	DrawDebugString(GetWorld(), GetActorLocation(), strState, nullptr, FColor::Yellow, 0, true, 1);


	// currentHP 확인
	UE_LOG(LogTemp, Warning, TEXT("Current HP: %d"), currentHP);


}

void ANormalGigant1::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

//일반 데미지 데미지 2짜리
void ANormalGigant1::TakeDamage()
{
	// 현재 HP를 2 감소
	currentHP = FMath::Clamp(currentHP - 2, 0, maxHP);

	// 캐릭터가 여전히 생존 중인지 확인
	if (currentHP <= 0)
	{
		bIsGigantDie = true;
		// HP가 0 이하면 캐릭터가 죽은 것으로 처리
		gigant1State = ENormalGigan1State::DIE;
	}
	else
	{
		//애니메이션,나이아가라 수정 예정
	}
}

//목덜미를 떄렸을떄의 크리티컬 데미지 <즉사>
void ANormalGigant1::TakeCriticalDamage()
{
	// 현재 HP를 50 감소
	currentHP = FMath::Clamp(currentHP - 50, 0, maxHP);

	// 캐릭터가 여전히 생존 중인지 확인
	if (currentHP <= 0)
	{
		bIsGigantDie = true;
		// HP가 0 이하면 캐릭터가 죽은 것으로 처리
		gigant1State = ENormalGigan1State::DIE;
	}
	else
	{
		//애니메이션,나이아가라 수정 예정
	}
}

void ANormalGigant1::OnBeginOverlapNeck(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//객체 이름이 BP_Knife인경우에만 오버랩 이벤트 발생
	if (OtherActor->GetActorLabel() == "BP_Knife" && bIsOverlappingKnife == false)
	{
		// 오버랩 상태 설정
		bIsOverlappingKnife = true;

		// 피해 입히는 함수 호출
		TakeCriticalDamage();

		UE_LOG(LogTemp, Warning, TEXT("BeginOverlap"));
	}


}

void ANormalGigant1::OnEndOverlapNeck(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	bIsOverlappingKnife = false;
	UE_LOG(LogTemp, Warning, TEXT("EndOverlap"));

}


//몸통
void ANormalGigant1::OnBeginOverlapBody(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//객체 이름이 BP_Knife인경우에만 오버랩 이벤트 발생
	if (OtherActor->GetActorLabel() == "BP_Knife" && bIsOverlappingKnife == false)
	{
		// 오버랩 상태 설정
		bIsOverlappingKnife = true;

		// 피해 입히는 함수 호출
		TakeDamage();

		UE_LOG(LogTemp, Warning, TEXT("BeginOverlap"));


		// 충돌 지점에서 파티클 스폰 <문제가있음>
		FVector SpawnLocation = SweepResult.ImpactPoint;
		FRotator SpawnRotation = SweepResult.ImpactNormal.Rotation();
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), BloodPX, SpawnLocation, SpawnRotation);
	}
}

void ANormalGigant1::OnEndOverlapBody(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	bIsOverlappingKnife = false;
}


//왼팔
void ANormalGigant1::OnBeginOverlapLeftArm(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//객체 이름이 BP_Knife인경우에만 오버랩 이벤트 발생
	if (OtherActor->GetActorLabel() == "BP_Knife" && bIsOverlappingKnife == false)
	{
		// 오버랩 상태 설정
		bIsOverlappingKnife = true;

		// 피해 입히는 함수 호출
		TakeDamage();

		UE_LOG(LogTemp, Warning, TEXT("BeginOverlap"));
	}
}

void ANormalGigant1::OnEndOverlapLeftArm(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	bIsOverlappingKnife = false;
}


//오른팔
void ANormalGigant1::OnBeginOverlapRightArm(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//객체 이름이 BP_Knife인경우에만 오버랩 이벤트 발생
	if (OtherActor->GetActorLabel() == "BP_Knife" && bIsOverlappingKnife == false)
	{
		// 오버랩 상태 설정
		bIsOverlappingKnife = true;

		// 피해 입히는 함수 호출
		TakeDamage();

		UE_LOG(LogTemp, Warning, TEXT("BeginOverlap"));
	}
}

void ANormalGigant1::OnEndOverlapRightArm(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	bIsOverlappingKnife = false;
}


//왼발
void ANormalGigant1::OnBeginOverlapLeftLeg(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//객체 이름이 BP_Knife인경우에만 오버랩 이벤트 발생
	if (OtherActor->GetActorLabel() == "BP_Knife" && bIsOverlappingKnife == false)
	{
		// 오버랩 상태 설정
		bIsOverlappingKnife = true;

		// 피해 입히는 함수 호출
		TakeDamage();

		UE_LOG(LogTemp, Warning, TEXT("BeginOverlap"));
	}
}

void ANormalGigant1::OnEndOverlapLeftLeg(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	bIsOverlappingKnife = false;
}


//오른발
void ANormalGigant1::OnBeginOverlapRightLeg(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//객체 이름이 BP_Knife인경우에만 오버랩 이벤트 발생
	if (OtherActor->GetActorLabel() == "BP_Knife" && bIsOverlappingKnife == false)
	{
		// 오버랩 상태 설정
		bIsOverlappingKnife = true;

		// 피해 입히는 함수 호출
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
	// 거인의 시야범위 안에 들어오면
	if (bIsPlayerInSight())
	{
		//거인의 앞 방향을 플레이어한테 고정하고
		GetCharacterMovement()->bOrientRotationToMovement = true;


		//Patrol스테이트로 이동해서 플레이어를 본지 안본지를 결정하고 행동한다.
		gigant1State = ENormalGigan1State::PATROL;




	}
	if (bIsPatrolAndIdle)
	{

		// 10초 뒤에 패트롤 상태로 전환
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


	// 거인의 시야범위 안에 들어오면
	if (bIsPlayerInSight())
	{
		//거인의 앞 방향을 플레이어한테 고정하고
		GetCharacterMovement()->bOrientRotationToMovement = true;

		//AI컨트롤러의 순찰을 멈춘다
		if (nullptr == aiCon)

			aiCon = Cast<ANormalGigant1AIController>(GetController());
		aiCon->StandStill();



		//MoveState로 이동해서 플레이어한테 이동한다.
		gigant1State = ENormalGigan1State::MOVE;




	}
	//아니면 순찰
	else
	{
		if (NavArea && bIsOncePatrol == false)
		{

			// AI 컨트롤러에서 새로운 좌표값을 받아와서 이동함
			if (nullptr == aiCon)
				aiCon = Cast<ANormalGigant1AIController>(GetController());
			aiCon->GetPathFollowingComponent()->OnRequestFinished.AddUObject
			(this, &ANormalGigant1::OnAIMoveCompleted);

			aiCon->MoveToLocation(RandomLocation);

			//한번만
			bIsOncePatrol = true;

			UE_LOG(LogTemp, Warning, TEXT("88888"));
			// 5초 뒤에 패트롤 상태로 전환

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

//패트롤에서 한번만 좌표값을 받아왔을때 ai컨트롤러에서 새로운 좌표값을 받아와서 갱신
void ANormalGigant1::OnAIMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{

	if (gigant1State == ENormalGigan1State::PATROL)
	{
		aiCon->RandomPatrol();

	}
}


//시야설정 , 월드에서 플레이어 폰 찾기 함수
void ANormalGigant1::SearchPlayer()
{
	// 현재 월드를 가져옴
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
		// AI의 시야 벡터(Forward)와 플레이어와의 방향 벡터 사이의 각도 계산
		AngleToPlayer = FMath::Acos(FVector::DotProduct(ToPlayer.GetSafeNormal(), GetActorForwardVector()));

		// AI의 시야 범위 (90도)에 플레이어가 있으면서 AI의 전방이 아닌 결과값 리턴
		if (FMath::RadiansToDegrees(AngleToPlayer) <= 90.0f && FVector::DotProduct(ToPlayer, GetActorForwardVector()) > 0)
		{
			float DistanceToPlayer = ToPlayer.Size();
			return;
		}
	}
	else
	{
		// 플레이어 폰을 찾지 못한 경우 처리
		UE_LOG(LogTemp, Warning, TEXT("Player not found"));
	}
}

//플레이어한테 움직이는 함수 <네비게이션 시스템을 이용해서 패트롤하되 쫒아오는건 멍청하게>
void ANormalGigant1::MoveToPlayer()
{

	// 공격 애니메이션이 실행 중이 아닌 경우에만 이동
	if (!bIsAttackAnimationPlaying)
	{
		FVector playerLocation = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();

		FVector towardPlayer = playerLocation - GetActorLocation();

		AddMovementInput(towardPlayer.GetSafeNormal(1.0));
	}


}



//플레이어와의 거리를 재는 함수
float ANormalGigant1::DistanceToPlayer()
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

//플레이어가 시야 안에 있는지 확인하는 함수
bool ANormalGigant1::bIsPlayerInSight()
{
	if (PlayerPawn)
	{
		// AI의 위치와 플레이어의 위치 벡터 계산
		FVector ToPlayer = PlayerPawn->GetActorLocation() - GetActorLocation();
		// AI의 시야 벡터(Forward)와 플레이어와의 방향 벡터 사이의 각도 계산
		AngleToPlayer = FMath::Acos(FVector::DotProduct(ToPlayer.GetSafeNormal(), GetActorForwardVector()));

		// AI의 시야 범위 안에 플레이어가 있으면서 AI의 전방이 아닌 경우 true 반환
		if (FMath::RadiansToDegrees(AngleToPlayer) <= 90.0f && FVector::DotProduct(ToPlayer, GetActorForwardVector()) > 0)
		{
			float DistanceToPlayer = ToPlayer.Size();
			// 거리가 2000 이하인 경우에만 true 반환
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
	// 공격 플래그 재설정
	bIsAttack = false;
}

void ANormalGigant1::DieDestroy()
{
	Destroy();
}



//무브 스테이트
void ANormalGigant1::move()
{
	if (bIsAttackAnimationPlaying == false)
	{
		//플레이어가 시야안에 있고 플레이어와의 거리가 300이상이면
		if (bIsPlayerInSight() && DistanceAiToCharacter.Length() > 300.0f)
		{
			//플레이어한테 다가오고
			MoveToPlayer();
		}

		//그게 아닐시 
		else
		{
			//사거리 안에 들어오면 공격 스테이트로 변환해라
			gigant1State = ENormalGigan1State::ATTACK;
		}
	}

}

//공격 스테이트
void ANormalGigant1::attack()
{
	//플레이어가 사거리 안에 들어오고 플레이어와의 거리가 300이하라면 공격해라
	if (bIsPlayerInSight() && DistanceAiToCharacter.Length() <= 300.0f)
	{
		if (bIsAttack == false)
		{
			int32 Value = FMath::RandRange(1, 4);
			{
				if (Value == 1)
				{
					PlayAnimMontage(AttackMT1);

					// 공격 애니메이션을 실행 중임을 나타내는 변수 설정
					bIsAttackAnimationPlaying = true;

					bIsAttack = true;
				}
				if (Value == 2)
				{
					PlayAnimMontage(AttackMT2);

					// 공격 애니메이션을 실행 중임을 나타내는 변수 설정
					bIsAttackAnimationPlaying = true;

					bIsAttack = true;
				}
				if (Value == 3)
				{
					PlayAnimMontage(AttackMT3);

					// 공격 애니메이션을 실행 중임을 나타내는 변수 설정
					bIsAttackAnimationPlaying = true;

					bIsAttack = true;
				}
				if (Value == 4)
				{
					PlayAnimMontage(AttackMT4);

					// 공격 애니메이션을 실행 중임을 나타내는 변수 설정
					bIsAttackAnimationPlaying = true;

					bIsAttack = true;
				}
			}


			//3초마다 공격해라
			GetWorldTimerManager().SetTimer(TimerHandle_DelayAttack, this, &ANormalGigant1::RestartAttackFlag, 3.0f, false);
		}
	}
	else
	{

		// 패트롤 상태로 변경
		gigant1State = ENormalGigan1State::PATROL;
		// AI를 패트롤 상태로 이동
		aiCon->RandomPatrol();
	}








}

//데미지받는 스테이트
void ANormalGigant1::damaged()
{

}

//보스 뒤지는 스테이트
void ANormalGigant1::die()
{
	if (bIsGigantDie)
	{
		aiCon->StopMovement();
		UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
		int32 Value = FMath::RandRange(1, 4);
		float Duration = 0.0f; // 애니메이션 몽타쥬의 재생 시간
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

				// 애니메이션 재생이 끝난 후에 오브젝트를 제거하기 위해 타이머 설정
				GetWorldTimerManager().SetTimer(TimerHandle_Die1Destroy, this, &ANormalGigant1::DieDestroy, Duration, false);
			}
		}
	}


}
