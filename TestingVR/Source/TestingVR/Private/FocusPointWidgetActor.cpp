

#include "FocusPointWidgetActor.h"
#include "Components/WidgetComponent.h"

AFocusPointWidgetActor::AFocusPointWidgetActor()
{
	PrimaryActorTick.bCanEverTick = true;
// 	widgetComp = CreateDefaultSubobject<UWidgetComponent>(TEXT("CrossHair Widget Component"));
// 	widgetComp -> SetupAttachment(RootComponent);
// 	widgetComp -> SetRelativeScale3D(FVector(0.5f));
// 	widgetComp -> SetVisibility(false);
}

void AFocusPointWidgetActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void AFocusPointWidgetActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

