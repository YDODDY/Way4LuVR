#include "BeastGigant.h"
#include <../../../../../../../Source/Runtime/Engine/Classes/Kismet/GameplayStatics.h>
#include "GameFramework/CharacterMovementComponent.h"
#include "Animation/AnimSequence.h"
#include "Math/Vector.h"
#include "Components/StaticMeshComponent.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "BeastGigantAIController.h"
#include "Components/CapsuleComponent.h"
#include "BP_Rock1.h"
#include <../../../../../../../Source/Runtime/Engine/Classes/Components/ArrowComponent.h>


// 생성자
ABeastGigant::ABeastGigant()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	
	aiCon = Cast<ABeastGigantAIController>(GetController());


	ArrowComp = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComp"));
	ArrowComp->SetupAttachment(GetMesh());

	// 소켓의 위치를 가져옴
	FVector RightHandSocketLocation = GetMesh()->GetSocketLocation(TEXT("RightHandSocket"));

	// 메시의 위치를 소켓의 위치로
	ArrowComp->SetRelativeLocation(RightHandSocketLocation);

	// 메시를 소켓에 붙힘
	ArrowComp->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("RightHandSocket"));

	ArrowComp->SetRelativeLocation(FVector(0.0f, -130.0f, 80.0f));
	ArrowComp->SetRelativeRotation(FRotator(0.0f, -90.f, 0.0f));
	ArrowComp->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f));

	ArrowComp->SetVisibility(true);
	
	//ArrowComp->SetRelativeLocation(FVector()*/
	
	RockMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RockMesh"));
	
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Rock3(TEXT("/Script/Engine.StaticMesh'/Game/Megascans/3D_Assets/Small_Sandstone_vd5scdo/S_Small_Sandstone_vd5scdo_lod5_Var1.S_Small_Sandstone_vd5scdo_lod5_Var1'"));

	if (Rock3.Succeeded())
	{
		RockMesh->SetStaticMesh(Rock3.Object);
	}

	RockMesh->SetupAttachment(GetMesh());

	// 소켓의 위치를 가져옴
	FVector RightHand2SocketLocation = GetMesh()->GetSocketLocation(TEXT("RightHandSocket"));

	// 메시의 위치를 소켓의 위치로
	RockMesh->SetRelativeLocation(RightHand2SocketLocation);

	// 메시를 소켓에 붙힘
	RockMesh->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("RightHandSocket"));

	RockMesh->SetRelativeLocation(FVector(-60.0f, -100.0f, 50.0f));
	RockMesh->SetWorldScale3D(FVector(14.0f, 14.0f, 20.0f));

	RockMesh->SetVisibility(false);










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

	//거인의 오버랩 설정해주기
	


	//1. 레프트 포어암
	LeftForeArmMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeftForeArmMesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>LeftForeArm(TEXT("/Script/Engine.StaticMesh'/Engine/EngineMeshes/Cube.Cube'"));
	if (LeftForeArm.Succeeded())
	{
		LeftForeArmMesh->SetStaticMesh(LeftForeArm.Object);
	}
	
	LeftForeArmMesh->SetupAttachment(GetMesh());

	// 소켓의 위치를 가져옴
	FVector LeftForeArmSocketLocation = GetMesh()->GetSocketLocation(TEXT("LeftForeArmSocket"));

	// 메시의 위치를 소켓의 위치로
	LeftForeArmMesh->SetRelativeLocation(LeftForeArmSocketLocation);

	// 메시를 소켓에 붙힘
	LeftForeArmMesh->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("LeftForeArmSocket"));

	LeftForeArmMesh->SetRelativeLocation(FVector(0.0f, -510.0f, 0.0f));
	LeftForeArmMesh->SetWorldScale3D(FVector(1.0f, 3.5f, 1.0f));

	LeftForeArmMesh->SetVisibility(false);

	//2. 레프트 암
	LeftArmMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeftArmMesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>LeftArm(TEXT("/Script/Engine.StaticMesh'/Engine/EngineMeshes/Cube.Cube'"));
	if (LeftArm.Succeeded())
	{
		LeftArmMesh->SetStaticMesh(LeftArm.Object);
	}

	LeftArmMesh->SetupAttachment(GetMesh());

	// 소켓의 위치를 가져옴
	FVector LeftArmSocketLocation = GetMesh()->GetSocketLocation(TEXT("LeftArmSocket"));

	// 메시의 위치를 소켓의 위치로
	LeftArmMesh->SetRelativeLocation(LeftArmSocketLocation);

	// 메시를 소켓에 붙힘
	LeftArmMesh->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("LeftArmSocket"));

	LeftArmMesh->SetRelativeLocation(FVector(0.0f, -180.0f, 0.0f));
	LeftArmMesh->SetWorldScale3D(FVector(1.0f, 2.25f, 1.0f));

	LeftArmMesh->SetVisibility(false);

	//3. 라이트 포어 암
	RightForeArmMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightForeArmMesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>RightForeArm(TEXT("/Script/Engine.StaticMesh'/Engine/EngineMeshes/Cube.Cube'"));
	if (RightForeArm.Succeeded())
	{
		RightForeArmMesh->SetStaticMesh(RightForeArm.Object);
	}

	RightForeArmMesh->SetupAttachment(GetMesh());

	// 소켓의 위치를 가져옴
	FVector RightForeArmSocketLocation = GetMesh()->GetSocketLocation(TEXT("RightForeArmSocket"));

	// 메시의 위치를 소켓의 위치로
	RightForeArmMesh->SetRelativeLocation(RightForeArmSocketLocation);

	// 메시를 소켓에 붙힘
	RightForeArmMesh->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("RightForeArmSocket"));

	RightForeArmMesh->SetRelativeLocation(FVector(0.0f, -510.0f, 0.0f));
	RightForeArmMesh->SetWorldScale3D(FVector(1.0f, 3.5f, 1.0f));

	RightForeArmMesh->SetVisibility(false);

	//4. 라이트 암
	RightArmMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightArmMesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>RightArm(TEXT("/Script/Engine.StaticMesh'/Engine/EngineMeshes/Cube.Cube'"));
	if (RightArm.Succeeded())
	{
		RightArmMesh->SetStaticMesh(RightArm.Object);
	}

	RightArmMesh->SetupAttachment(GetMesh());

	// 소켓의 위치를 가져옴
	FVector RightArmSocketLocation = GetMesh()->GetSocketLocation(TEXT("RightArmSocket"));

	// 메시의 위치를 소켓의 위치로
	RightArmMesh->SetRelativeLocation(RightArmSocketLocation);

	// 메시를 소켓에 붙힘
	RightArmMesh->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("RightArmSocket"));

	RightArmMesh->SetRelativeLocation(FVector(0.0f, -180.0f, 0.0f));
	RightArmMesh->SetWorldScale3D(FVector(1.0f, 2.25f, 1.0f));

	RightArmMesh->SetVisibility(false);

	//5. 레트프레그
	LeftLegMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeftLegMesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>LeftLeg(TEXT("/Script/Engine.StaticMesh'/Engine/EngineMeshes/Cube.Cube'"));
	if (LeftLeg.Succeeded())
	{
		LeftLegMesh->SetStaticMesh(LeftLeg.Object);
	}

	LeftLegMesh->SetupAttachment(GetMesh());

	// 소켓의 위치를 가져옴
	FVector LeftLegSocketLocation = GetMesh()->GetSocketLocation(TEXT("LeftLegSocket"));

	// 메시의 위치를 소켓의 위치로
	LeftLegMesh->SetRelativeLocation(LeftLegSocketLocation);

	// 메시를 소켓에 붙힘
	LeftLegMesh->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("LeftLegSocket"));

	LeftLegMesh->SetWorldScale3D(FVector(1.0f, 3.5f, 1.0f));

	LeftLegMesh->SetVisibility(false);

	//6. 라이트레그
	RightLegMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightLegMesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>RightLeg(TEXT("/Script/Engine.StaticMesh'/Engine/EngineMeshes/Cube.Cube'"));
	if (RightLeg.Succeeded())
	{
		RightLegMesh->SetStaticMesh(RightLeg.Object);
	}

	RightLegMesh->SetupAttachment(GetMesh());

	// 소켓의 위치를 가져옴
	FVector RightLegSocketLocation = GetMesh()->GetSocketLocation(TEXT("RightLegSocket"));

	// 메시의 위치를 소켓의 위치로
	RightLegMesh->SetRelativeLocation(RightLegSocketLocation);

	// 메시를 소켓에 붙힘
	RightLegMesh->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("RightLegSocket"));

	RightLegMesh->SetWorldScale3D(FVector(1.0f, 3.5f, 1.0f));

	RightLegMesh->SetVisibility(false);

	//7. 몸통
	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Body(TEXT("/Script/Engine.StaticMesh'/Engine/EngineMeshes/Cube.Cube'"));
	if (Body.Succeeded())
	{
		BodyMesh->SetStaticMesh(Body.Object);
	}

	BodyMesh->SetupAttachment(GetMesh());

	// 소켓의 위치를 가져옴
	FVector BodySocketLocation = GetMesh()->GetSocketLocation(TEXT("Spine1Socket"));

	// 메시의 위치를 소켓의 위치로
	BodyMesh->SetRelativeLocation(BodySocketLocation);

	// 메시를 소켓에 붙힘
	BodyMesh->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("Spine1Socket"));

	BodyMesh->SetRelativeLocation(FVector(0.0f, 70.0f, 30.0f));
	BodyMesh->SetWorldScale3D(FVector(2.75f, 4.25f, 1.75f));

	BodyMesh->SetVisibility(false);

	//8. 목
	NeckMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NeckMesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Neck(TEXT("/Script/Engine.StaticMesh'/Engine/EngineMeshes/Cube.Cube'"));
	if (Neck.Succeeded())
	{
		NeckMesh->SetStaticMesh(Neck.Object);
	}

	NeckMesh->SetupAttachment(GetMesh());

	// 소켓의 위치를 가져옴
	FVector NeckSocketLocation = GetMesh()->GetSocketLocation(TEXT("NeckSocket"));

	// 메시의 위치를 소켓의 위치로
	NeckMesh->SetRelativeLocation(NeckSocketLocation);

	// 메시를 소켓에 붙힘
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

	
	
	//기본상태는 idle 상태로 초기화
	beastState = EBeastGigantState::STONEATTACK;

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

	currentHP = maxHP;

	// 로켓단 함수 호출
// 	Throw(GetActorForwardVector(), 1000);
// 	FVector throwDirection = FRotator(45.0f, 0.0f, 0.0f).RotateVector(GetActorForwardVector());
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

	//FString strState = UEnum::GetValueAsString(beastState);
	//DrawDebugString(GetWorld(), GetActorLocation(), strState, nullptr, FColor::Red, 0, true, 1);




	SuperJump();

	 //currentHP 확인
	UE_LOG(LogTemp, Warning, TEXT("Current HP: %d"), currentHP);

}

// Called to bind functionality to input
void ABeastGigant::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


void ABeastGigant::TakeDamage()
{
	// 현재 HP를 2 감소
	currentHP = FMath::Clamp(currentHP - 2, 0, maxHP);

	// 캐릭터가 여전히 생존 중인지 확인
	if (currentHP <= 0)
	{
		bIsGigantDie = true;
		// HP가 0 이하면 캐릭터가 죽은 것으로 처리
		beastState = EBeastGigantState::DIE;
	}
	else
	{
		//애니메이션,나이아가라 수정 예정
	}
}

void ABeastGigant::TakeCriticalDamagae()
{
	// 현재 HP를 50 감소
	currentHP = FMath::Clamp(currentHP - 50, 0, maxHP);

	// 캐릭터가 여전히 생존 중인지 확인
	if (currentHP <= 0)
	{
		bIsGigantDie = true;
		// HP가 0 이하면 캐릭터가 죽은 것으로 처리
		beastState = EBeastGigantState::DIE;
	}
	else
	{
		//애니메이션,나이아가라 수정 예정
	}
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

void ABeastGigant::DieDestroy()
{
	Destroy();
}

void ABeastGigant::StandStill()
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	AnimInstance -> Montage_Play(StandStillMT);
}

void ABeastGigant::SpawnStone()
{
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	FTransform spawnTrans;
	spawnTrans.SetLocation(ArrowComp->GetComponentLocation());
	spawnTrans.SetRotation(ArrowComp->GetComponentQuat());

	rock1 = GetWorld()->SpawnActor<ABP_Rock1>(rockactor, spawnTrans, SpawnParams);
	if (rock1 != nullptr)
	{
		rock1->AttachToComponent(ArrowComp, FAttachmentTransformRules::KeepWorldTransform);
	}
}

void ABeastGigant::SpawnExtraStone()
{
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	for (int32 i = 0; i < 20; ++i)
	{
		// ArrowComp의 위치를 가져와서 X, Y, Z축 방향으로 최대 20만큼 랜덤하게 이동
		FVector RandomOffset = FVector(
			FMath::RandRange(-20.0f, 20.0f),
			FMath::RandRange(-20.0f, 20.0f),
			FMath::RandRange(-20.0f, 20.0f)
		);

		FVector SpawnLocation = ArrowComp->GetComponentLocation() + RandomOffset;

		// 변환을 설정
		FTransform spawnTrans;
		spawnTrans.SetLocation(SpawnLocation);
		spawnTrans.SetRotation(ArrowComp->GetComponentQuat());

		// rock1을 스폰
		ABP_Rock1* rock = GetWorld()->SpawnActor<ABP_Rock1>(rockactor, spawnTrans, SpawnParams);
		if (rock != nullptr)
		{
			// rock1을 ArrowComp에 부착
			rock->AttachToComponent(ArrowComp, FAttachmentTransformRules::KeepWorldTransform);
		}
	}
}



//로켓단함수
// void ABeastGigant::Throw(const FVector& throwDir, float throwPower)
// {
// 	// 피직스가 off 상태라면 on 상태로 전환한다.
// 	if (!GetCapsuleComponent()->IsSimulatingPhysics())
// 	{
// 		GetCapsuleComponent()->SetSimulatePhysics(true);
// 	}
// 
// 	// 45도 각도로 방향을 조정하여 Impulse를 추가
// 	FVector adjustedThrowDir = FRotator(45.0f, 0.0f, 0.0f).RotateVector(throwDir);
// 	GetCapsuleComponent()->AddImpulse(adjustedThrowDir * throwPower);
// 
// }

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
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && !bIsGigantStoneAttack)
	{
		AnimInstance->Montage_Play(StandAttackMT);

		
		bIsGigantStoneAttack = true;
		UE_LOG(LogTemp, Warning, TEXT("!!"));
	}
	
}

void ABeastGigant::groggy()
{
	//SuperJump();
	MoveToLocationJump();
}

void ABeastGigant::die()
{
	



	if (bIsGigantDie)
	{
		UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
		float Duration = 0.0f; // 애니메이션 몽타쥬의 재생 시간
		UAnimMontage* SelectedMontage = nullptr;

		if (AnimInstance && !bIsOnceDieMT)
		{
			SelectedMontage = Die1;
			bIsGigantDie = false;
			bIsOnceDieMT = true;
		}
			
		if (SelectedMontage)
		{
			
			//Duration = SelectedMontage->CalculateSequenceLength() - 0.25f;
			AnimInstance->Montage_Play(SelectedMontage, 1.0f);

			
				
			//코드 개판이라 수정좀 할께요..나중에 ㅠ
			
// 			else // bIsGigantDieStill이 true일 때
// 			{
// 				if (AnimInstance->Montage_IsPlaying(SelectedMontage))
// 				{
// 					AnimInstance->Montage_Pause(SelectedMontage);
// 					UE_LOG(LogTemp, Warning, TEXT("1212121212"));
// 					
// 					aiCon->UnPossess();
// 				}
// 			}

			// 애니메이션 재생이 끝난 후에 오브젝트를 제거하기 위해 타이머 설정
			GetWorldTimerManager().SetTimer(TimerHandle_Die1Destroy, this, &ABeastGigant::DieDestroy, 15.0f, false);
		}
	}
}

//레프트 포어암
void ABeastGigant::OnBeginOverLeftForeArm(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//객체 이름이 BP_Knife인경우에만 오버랩 이벤트 발생
	if (OtherActor->GetName().Contains("BP_Knife") && bIsOverlappingKnife == false)
	{
		// 오버랩 상태 설정
		bIsOverlappingKnife = true;

		// 피해 입히는 함수 호출
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


//레프트 암
void ABeastGigant::OnBeginOverlapLeftArm(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//객체 이름이 BP_Knife인경우에만 오버랩 이벤트 발생
	if (OtherActor->GetName().Contains("BP_Knife") && bIsOverlappingKnife == false)
	{
		// 오버랩 상태 설정
		bIsOverlappingKnife = true;

		// 피해 입히는 함수 호출
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


//라이트 포어암
void ABeastGigant::OnBeginOverlapRightForeArm(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//객체 이름이 BP_Knife인경우에만 오버랩 이벤트 발생
	if (OtherActor->GetName().Contains("BP_Knife") && bIsOverlappingKnife == false)
	{
		// 오버랩 상태 설정
		bIsOverlappingKnife = true;

		// 피해 입히는 함수 호출
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


//라이트암
void ABeastGigant::OnBeginOverlapRightArm(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//객체 이름이 BP_Knife인경우에만 오버랩 이벤트 발생
	if (OtherActor->GetName().Contains("BP_Knife") && bIsOverlappingKnife == false)
	{
		// 오버랩 상태 설정
		bIsOverlappingKnife = true;

		// 피해 입히는 함수 호출
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


//레프트 레그
void ABeastGigant::OnBeginOverlapLeftLeg(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//객체 이름이 BP_Knife인경우에만 오버랩 이벤트 발생
	if (OtherActor->GetName().Contains("BP_Knife") && bIsOverlappingKnife == false)
	{
		// 오버랩 상태 설정
		bIsOverlappingKnife = true;

		// 피해 입히는 함수 호출
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


//라이트 레그
void ABeastGigant::OnBeginOverlapRightLeg(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//객체 이름이 BP_Knife인경우에만 오버랩 이벤트 발생
	if (OtherActor->GetName().Contains("BP_Knife") && bIsOverlappingKnife == false)
	{
		// 오버랩 상태 설정
		bIsOverlappingKnife = true;

		// 피해 입히는 함수 호출
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


//몸통
void ABeastGigant::OnBeginOverlapBody(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//객체 이름이 BP_Knife인경우에만 오버랩 이벤트 발생
	if (OtherActor->GetName().Contains("BP_Knife") && bIsOverlappingKnife == false)
	{
		// 오버랩 상태 설정
		bIsOverlappingKnife = true;

		// 피해 입히는 함수 호출
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


//목
void ABeastGigant::OnBeginOverlapNeck(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//객체 이름이 BP_Knife인경우에만 오버랩 이벤트 발생
	if (OtherActor->GetName().Contains("BP_Knife") && bIsOverlappingKnife == false)
	{
		// 오버랩 상태 설정
		bIsOverlappingKnife = true;

		// 피해 입히는 함수 호출
		TakeCriticalDamagae();

		UE_LOG(LogTemp, Warning, TEXT("BeginOverlapLeftForeArm"));

		UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), NormalBlood->GetAsset(), NeckMesh->GetComponentLocation(), BodyMesh->GetComponentRotation());

	}
}

void ABeastGigant::OnEndOverlapNeck(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	bIsOverlappingKnife = false;
	UE_LOG(LogTemp, Warning, TEXT("EndOverlapLeftForeArm"));
}
