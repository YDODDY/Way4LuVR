// Fill out your copyright notice in the Description page of Project Settings.


#include "BP_Rock1.h"
#include "Components/StaticMeshComponent.h"
#include <../../../../../../../Source/Runtime/Engine/Classes/Components/ArrowComponent.h>
#include <../../../../../../../Source/Runtime/Engine/Classes/Kismet/GameplayStatics.h>

// Sets default values
ABP_Rock1::ABP_Rock1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RockComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RockComp"));

	RootComponent = RockComp;
	
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Rock1(TEXT("/Script/Engine.StaticMesh'/Game/Megascans/3D_Assets/Coral_Stone_wfbmej3r/S_Coral_Stone_wfbmej3r_lod5_Var1.S_Coral_Stone_wfbmej3r_lod5_Var1'"));

	static ConstructorHelpers::FObjectFinder<UStaticMesh>Rock2(TEXT("/Script/Engine.StaticMesh'/Game/Megascans/3D_Assets/Small_Beach_Rock_wfcpeggr/S_Small_Beach_Rock_wfcpeggr_lod5_Var1.S_Small_Beach_Rock_wfcpeggr_lod5_Var1'"));

	static ConstructorHelpers::FObjectFinder<UStaticMesh>Rock3(TEXT("/Script/Engine.StaticMesh'/Game/Megascans/3D_Assets/Small_Sandstone_vd5scdo/S_Small_Sandstone_vd5scdo_lod5_Var1.S_Small_Sandstone_vd5scdo_lod5_Var1'"));

	static ConstructorHelpers::FObjectFinder<UStaticMesh>Rock4(TEXT("/Script/Engine.StaticMesh'/Game/Megascans/3D_Assets/Small_Tundra_Rock_vjcqcfb/S_Small_Tundra_Rock_vjcqcfb_lod5_Var1.S_Small_Tundra_Rock_vjcqcfb_lod5_Var1'"));


	if (Rock3.Succeeded())
	{
		RockComp->SetStaticMesh(Rock3.Object);
	}
	
	RockComp->SetWorldScale3D(FVector(2.0f, 2.0f, 4.0f));

	
	
	

}

void ABP_Rock1::Pitching()
{
    UWorld* World = GetWorld();
    if (!World)
    {
        // 월드를 가져올 수 없으면 종료
        return;
    }

    if (!bHasDirection)
    {
        // 플레이어 폰을 가져옴
        PlayerPawn = UGameplayStatics::GetPlayerPawn(World, 0);
        if (PlayerPawn)
        {
            // 돌의 위치와 플레이어의 위치 벡터 계산
            Direction = PlayerPawn->GetActorLocation() - GetActorLocation();

            // 방향 벡터를 정규화
            Direction.Normalize();

            // 방향이 설정되었음을 표시
            bHasDirection = true;
        }
    }

    if (bHasDirection)
    {
        // 정규화된 벡터를 이용하여 돌의 새로운 위치 설정
        SetActorLocation(GetActorLocation() + Direction * speed);
    }
}

void ABP_Rock1::PitchingRandom(float DeltaTime)
{
    // 랜덤한 속도를 생성 (1에서 200 사이)
    RandomSpeed = FMath::RandRange(100.0f, 280.0f);

    UWorld* World = GetWorld();
    if (!World)
    {
        // 월드를 가져올 수 없으면 종료
        return;
    }

    if (!bHasDirection)
    {
        // 플레이어 폰을 가져옴
        PlayerPawn = UGameplayStatics::GetPlayerPawn(World, 0);
        if (PlayerPawn)
        {
            // 돌의 위치와 플레이어의 위치 벡터 계산
            Direction = PlayerPawn->GetActorLocation() - GetActorLocation();

            RandomLocationStone= PlayerPawn->GetActorLocation() - GetActorLocation() + FVector(FMath::RandRange(-1500, 1500), FMath::RandRange(-1500, 1500), FMath::RandRange(-1500, 1500));

            // 방향 벡터를 정규화
            Direction.Normalize();

            RandomLocationStone.Normalize();
            // 방향이 설정되었음을 표시
            bHasDirection = true;
        }
    }

    if (bHasDirection)
    {
        // 정규화된 벡터를 이용하여 돌의 새로운 위치 설정
        SetActorLocation(GetActorLocation() + RandomLocationStone * RandomSpeed);
    }
}


// Called when the game starts or when spawned
void ABP_Rock1::BeginPlay()
{
	Super::BeginPlay();
	
    // 랜덤한 속도를 생성 (1에서 200 사이)
    RandomSpeed = FMath::RandRange(1.0f, 500.0f);

    // 속도를 출력
    UE_LOG(LogTemp, Warning, TEXT("speed : %f"), RandomSpeed);
	
}

// Called every frame
void ABP_Rock1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    PitchingRandom(DeltaTime);
}

