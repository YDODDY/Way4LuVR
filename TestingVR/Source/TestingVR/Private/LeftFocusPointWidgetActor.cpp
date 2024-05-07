

#include "LeftFocusPointWidgetActor.h"
#include "Components/StaticMeshComponent.h"


ALeftFocusPointWidgetActor::ALeftFocusPointWidgetActor()
{
	PrimaryActorTick.bCanEverTick = true;
	rootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
	SetRootComponent(rootComp);
	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));
	meshComp -> SetupAttachment(RootComponent);
	meshComp -> SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ALeftFocusPointWidgetActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ALeftFocusPointWidgetActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

