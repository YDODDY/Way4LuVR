

#include "FocusPointWidgetActor.h"
#include "Components/StaticMeshComponent.h"

AFocusPointWidgetActor::AFocusPointWidgetActor()
{
	PrimaryActorTick.bCanEverTick = true;
	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));
	meshComp->SetupAttachment(RootComponent);
	meshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);


}

void AFocusPointWidgetActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void AFocusPointWidgetActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

