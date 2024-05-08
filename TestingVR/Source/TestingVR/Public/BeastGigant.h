// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BeastGigant.generated.h"

UENUM(BlueprintType)
enum class EBeastGigantState : uint8
{
	IDLE,
	HOWLING,
	MOVE,
	BACKJUMP,
	NORMALATTACK,
	STONEATTACK,
	GROGGY,
	DIE
};



UCLASS()
class TESTINGVR_API ABeastGigant : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABeastGigant();


	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UAnimMontage* roarMT;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	EBeastGigantState beastState = EBeastGigantState::IDLE;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UAnimMontage* AttackMT1;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UAnimMontage* AttackMT2;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UAnimMontage* AttackMT3;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UAnimMontage* AttackMT4;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UAnimMontage* AttackMT5;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UAnimMontage* AttackMT6;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UAnimMontage* AttackMT7;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UAnimMontage* AttackMT8;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UAnimMontage* AttackMT9;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UAnimMontage* AttackMT10;


	 UPROPERTY(EditAnywhere)
    UAnimSequence* JumpAttack;

	void SearchPlayer();

	void RestartAttackFlag();

	bool bIsAlreadyPlayRoar = false;

	bool bIsAttack = false;

	bool bIsAttackAnimationPlaying = false;

	float currentTime = 0;

	APawn* PlayerPawn;

	FTimerHandle TimerHandle_DelayAttack;
	

	void idle(float deltaSeconds);
	void howling(float deltaSeconds);
	void move();
	void backjump();
	void normalattack();
	void stoneattack();
	void groggy();
	void die();
};
