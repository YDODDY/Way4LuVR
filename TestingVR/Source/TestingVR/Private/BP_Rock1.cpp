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
        // ���带 ������ �� ������ ����
        return;
    }

    if (!bHasDirection)
    {
        // �÷��̾� ���� ������
        PlayerPawn = UGameplayStatics::GetPlayerPawn(World, 0);
        if (PlayerPawn)
        {
            // ���� ��ġ�� �÷��̾��� ��ġ ���� ���
            Direction = PlayerPawn->GetActorLocation() - GetActorLocation();

            // ���� ���͸� ����ȭ
            Direction.Normalize();

            // ������ �����Ǿ����� ǥ��
            bHasDirection = true;
        }
    }

    if (bHasDirection)
    {
        // ����ȭ�� ���͸� �̿��Ͽ� ���� ���ο� ��ġ ����
        SetActorLocation(GetActorLocation() + Direction * speed);
    }
}

void ABP_Rock1::PitchingRandom(float DeltaTime)
{
    // ������ �ӵ��� ���� (1���� 200 ����)
    RandomSpeed = FMath::RandRange(100.0f, 280.0f);

    UWorld* World = GetWorld();
    if (!World)
    {
        // ���带 ������ �� ������ ����
        return;
    }

    if (!bHasDirection)
    {
        // �÷��̾� ���� ������
        PlayerPawn = UGameplayStatics::GetPlayerPawn(World, 0);
        if (PlayerPawn)
        {
            // ���� ��ġ�� �÷��̾��� ��ġ ���� ���
            Direction = PlayerPawn->GetActorLocation() - GetActorLocation();

            RandomLocationStone= PlayerPawn->GetActorLocation() - GetActorLocation() + FVector(FMath::RandRange(-1500, 1500), FMath::RandRange(-1500, 1500), FMath::RandRange(-1500, 1500));

            // ���� ���͸� ����ȭ
            Direction.Normalize();

            RandomLocationStone.Normalize();
            // ������ �����Ǿ����� ǥ��
            bHasDirection = true;
        }
    }

    if (bHasDirection)
    {
        // ����ȭ�� ���͸� �̿��Ͽ� ���� ���ο� ��ġ ����
        SetActorLocation(GetActorLocation() + RandomLocationStone * RandomSpeed);
    }
}


// Called when the game starts or when spawned
void ABP_Rock1::BeginPlay()
{
	Super::BeginPlay();
	
    // ������ �ӵ��� ���� (1���� 200 ����)
    RandomSpeed = FMath::RandRange(1.0f, 500.0f);

    // �ӵ��� ���
    UE_LOG(LogTemp, Warning, TEXT("speed : %f"), RandomSpeed);
	
}

// Called every frame
void ABP_Rock1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    PitchingRandom(DeltaTime);
}

