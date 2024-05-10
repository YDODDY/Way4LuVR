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
	//Simulation Hit Events üũ����
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
		// ���� �ùķ��̼��� ��Ȱ��ȭ�Ͽ� ��ź�� ���ߵ��� ����
		sphereComp->SetSimulatePhysics(false);
	}
}


void AGranede::Throw(const FVector& throwDir, float throwPower)
{
	// �������� off ���¶�� on ���·� ��ȯ�Ѵ�.
	if (!sphereComp->IsSimulatingPhysics())
	{
		sphereComp->SetSimulatePhysics(true);
	}

	// 45�� ������ ������ �����Ͽ� Impulse�� �߰�
	FVector adjustedThrowDir = FRotator(45.0f, 0.0f, 0.0f).RotateVector(throwDir);
	sphereComp->AddImpulse(adjustedThrowDir * throwPower);
	//sphereComp->AddImpulse(throwDir * throwPower);
}

void AGranede::BlockWorldDynamicCollision()
{
	// ���� ���̳��� �ݸ����� ���
	sphereComp->SetCollisionResponseToChannel(ECollisionChannel::ECC_WorldDynamic, ECollisionResponse::ECR_Block);

	// ��ź ��ġ�� ���߱� ���� ���� �ùķ��̼��� ��Ȱ��ȭ
	sphereComp->SetSimulatePhysics(false);
}

// TArray<FVector> AGranede::CalculateThrowPoints(AActor* baseActor, const FVector& dir, float power, float interval, float simulTime, float gravityZ)
// {
// 	TArray<FVector> simulPoints;
// 
// 	// �� Ƚ�� = �ùķ��̼� �� �ð� / �ùķ��̼� ����
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

	// 2�� �Ŀ� ���� ���̳��� �ݸ����� ����ϰ� ��ġ�� ���ߴ� �Լ� ȣ��
 	//GetWorld()->GetTimerManager().SetTimer(BlockCollisionTimerHandle, this, &AGranede::BlockWorldDynamicCollision, 2.0f, false);
 }

// Called every frame
void AGranede::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// �� �����Ӹ��� CalculateThrowPoints �Լ� ȣ��
	/*TArray<FVector> SimulPoints = CalculateThrowPoints(GetOwner(), GetActorForwardVector(), 1000, 0.1f, 2.0f, -980.0f);*/
}

