// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Granede.generated.h"

UCLASS()
class TESTINGVR_API AGranede : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGranede();

	UPROPERTY(VisibleAnywhere, Category="MySettings")
	class USphereComponent* sphereComp;

	UPROPERTY(VisibleAnywhere, Category="MySettings")
	class UStaticMeshComponent* meshComp;

	UPROPERTY(VisibleAnywhere, Category="MySettings")
	float damageRadius = 500;

	UPROPERTY(VisibleAnywhere, Category="MySettings")
	int32 damagePower = 10;

	UPROPERTY(VisibleAnywhere, Category="MySettings")
	float upForce = 100000;

	UPROPERTY(VisibleAnywhere, Category="MySettings")
	TEnumAsByte<ECollisionChannel> affectTypes;

	UFUNCTION()
	void BombAction(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	void Throw(const FVector& throwDir, float throwPower);

	void BlockWorldDynamicCollision();

	FTimerHandle BlockCollisionTimerHandle;

// 	UFUNCTION(BlueprintCallable)
// 	static TArray<FVector> CalculateThrowPoints(class AActor* baseActor, const FVector& dir, float power, float interval, float simulTime, float gravityZ);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
