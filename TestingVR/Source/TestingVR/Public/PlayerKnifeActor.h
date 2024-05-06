
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayerKnifeActor.generated.h"

UCLASS()
class TESTINGVR_API APlayerKnifeActor : public AActor
{
	GENERATED_BODY()
	
public:	
	APlayerKnifeActor();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	class UBoxComponent* boxComp;
	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* meshComp;

	float currentTime = 0;

	UPROPERTY()
	class ATestPlayer* player;

};
