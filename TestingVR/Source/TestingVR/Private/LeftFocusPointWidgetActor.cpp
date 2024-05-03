

#include "LeftFocusPointWidgetActor.h"
#include "Components/WidgetComponent.h"


ALeftFocusPointWidgetActor::ALeftFocusPointWidgetActor()
{
	PrimaryActorTick.bCanEverTick = true;
	widgetComp = CreateDefaultSubobject<UWidgetComponent>(TEXT("CrossHair Widget Component"));
	widgetComp->SetupAttachment(RootComponent);
	widgetComp->SetRelativeScale3D(FVector(0.5f));
	widgetComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ALeftFocusPointWidgetActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ALeftFocusPointWidgetActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

