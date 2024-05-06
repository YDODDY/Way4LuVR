

#include "PlayerKnifeActor.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

APlayerKnifeActor::APlayerKnifeActor()
{
	PrimaryActorTick.bCanEverTick = true;

	boxComp=CreateDefaultSubobject<UBoxComponent>(TEXT("Attack Collision Component"));
	SetRootComponent(boxComp);
	boxComp->SetRelativeScale3D(FVector(4.25f, 4.75f, 1));
	boxComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	meshComp=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Attack Mesh Component"));
	meshComp->SetupAttachment(RootComponent);
	meshComp->SetRelativeLocation(FVector(0, 0, -30));
	meshComp->SetRelativeScale3D(FVector(0.6f));
	meshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void APlayerKnifeActor::BeginPlay()
{
	Super::BeginPlay();

}

void APlayerKnifeActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	currentTime += DeltaTime;
	SetActorLocation(GetActorLocation() + GetActorForwardVector() * 100);

	if (currentTime >= 1.0f)
	{
		Destroy();
	}

}
