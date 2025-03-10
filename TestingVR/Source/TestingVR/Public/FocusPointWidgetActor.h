
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FocusPointWidgetActor.generated.h"

UCLASS()
class TESTINGVR_API AFocusPointWidgetActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AFocusPointWidgetActor();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
 
	
	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* meshComp;

	UPROPERTY(EditAnywhere)
	class USceneComponent* rootComp;
};
