

#include "DamageTestActor.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"

ADamageTestActor::ADamageTestActor()
{
	PrimaryActorTick.bCanEverTick = true;

	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Component"));
	SetRootComponent(boxComp);
	boxComp->SetGenerateOverlapEvents(true);
	
	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));
	meshComp->SetupAttachment(RootComponent);
	meshComp->SetRelativeScale3D(FVector(0.6f));
	meshComp->SetRelativeLocation(FVector(0, 0, -30));
	meshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

void ADamageTestActor::BeginPlay()
{
	Super::BeginPlay();
	
	currentHP = maxHP;

	boxComp->OnComponentBeginOverlap.AddDynamic(this, &ADamageTestActor::OnOverlap);
}

void ADamageTestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
//데미지 테스트 
void ADamageTestActor::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	currentHP = currentHP - 10;
	if (hitSound != nullptr)
	{
		UGameplayStatics::PlaySound2D(GetWorld(), hitSound);
	}
	if (currentHP <= 0)
	{
		Destroy();
	}
}

