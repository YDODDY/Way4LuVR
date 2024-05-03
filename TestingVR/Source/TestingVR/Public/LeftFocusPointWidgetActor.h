
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LeftFocusPointWidgetActor.generated.h"

UCLASS()
class TESTINGVR_API ALeftFocusPointWidgetActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ALeftFocusPointWidgetActor();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* meshComp;
};
