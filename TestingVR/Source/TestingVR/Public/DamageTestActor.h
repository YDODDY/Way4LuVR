
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DamageTestActor.generated.h"

UCLASS()
class TESTINGVR_API ADamageTestActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ADamageTestActor();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	int32 currentHP = 0;
	int32 maxHP = 30;

	UPROPERTY(EditDefaultsOnly)
	class UBoxComponent* boxComp;
	UPROPERTY(EditDefaultsOnly)
	class UStaticMeshComponent* meshComp;
	UPROPERTY(EditAnywhere)
	class USoundBase* hitSound;

	UFUNCTION()
	void OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
