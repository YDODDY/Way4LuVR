// Fill out your copyright notice in the Description page of Project Settings.


#include "Granede.h"
#include <../../../../../../../Source/Runtime/Engine/Classes/Components/SphereComponent.h>
#include <../../../../../../../Source/Runtime/Engine/Classes/Components/StaticMeshComponent.h>

// Sets default values
AGranede::AGranede()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	sphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("Sphre Component"));

	SetRootComponent(sphereComp);

	sphereComp->SetSphereRadius(50);
	sphereComp->SetCollisionProfileName(FName("Grenade"));
	//Simulation Hit Events 체크변경
	sphereComp->SetNotifyRigidBodyCollision(true);

	sphereComp->OnComponentHit.AddDynamic(this, &AGranede::BombAction);

	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));
	meshComp->SetupAttachment(RootComponent);
	meshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	

}

void AGranede::BombAction(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor && OtherActor->GetName() == "Floor")
	{
		// 물리 시뮬레이션을 비활성화하여 폭탄이 멈추도록 설정
		sphereComp->SetSimulatePhysics(false);
	}
}


void AGranede::Throw(const FVector& throwDir, float throwPower)
{
	// 피직스가 off 상태라면 on 상태로 전환한다.
	if (!sphereComp->IsSimulatingPhysics())
	{
		sphereComp->SetSimulatePhysics(true);
	}

	// 45도 각도로 방향을 조정하여 Impulse를 추가
	FVector adjustedThrowDir = FRotator(45.0f, 0.0f, 0.0f).RotateVector(throwDir);
	sphereComp->AddImpulse(adjustedThrowDir * throwPower);
	//sphereComp->AddImpulse(throwDir * throwPower);
}

void AGranede::BlockWorldDynamicCollision()
{
	// 월드 다이나믹 콜리전을 블록
	sphereComp->SetCollisionResponseToChannel(ECollisionChannel::ECC_WorldDynamic, ECollisionResponse::ECR_Block);

	// 폭탄 위치를 멈추기 위해 물리 시뮬레이션을 비활성화
	sphereComp->SetSimulatePhysics(false);
}

// TArray<FVector> AGranede::CalculateThrowPoints(AActor* baseActor, const FVector& dir, float power, float interval, float simulTime, float gravityZ)
// {
// 	TArray<FVector> simulPoints;
// 
// 	// 총 횟수 = 시뮬레이션 총 시간 / 시뮬레이션 간격
// 	int32 segment = simulTime / interval;
// 	FVector startLocation = baseActor->GetActorLocation() + baseActor->GetActorForwardVector() * 100;
// 	FVector gravityValue = FVector(0, 0, gravityZ);
// 	float mass = 1;
// 
// 	for (int32 i = 0; i < segment; i++)
// 	{
// 		// p = p0 + vt - 0.5*g*t*t * mass * mass
// 		float term = interval * i;
// 		FVector predictLocation = startLocation + dir * power * term + 0.5f * gravityValue * term * term * mass * mass;
// 		simulPoints.Add(predictLocation);
// 	}
// 
// 	return simulPoints;
/*}*/

// Called when the game starts or when spawned
void AGranede::BeginPlay()
{
	Super::BeginPlay();
	Throw(GetActorForwardVector(), 1000);
	FVector throwDirection = FRotator(45.0f, 0.0f, 0.0f).RotateVector(GetActorForwardVector());

	// 2초 후에 월드 다이나믹 콜리전을 블록하고 위치를 멈추는 함수 호출
 	//GetWorld()->GetTimerManager().SetTimer(BlockCollisionTimerHandle, this, &AGranede::BlockWorldDynamicCollision, 2.0f, false);
 }

// Called every frame
void AGranede::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// 매 프레임마다 CalculateThrowPoints 함수 호출
	/*TArray<FVector> SimulPoints = CalculateThrowPoints(GetOwner(), GetActorForwardVector(), 1000, 0.1f, 2.0f, -980.0f);*/
}

