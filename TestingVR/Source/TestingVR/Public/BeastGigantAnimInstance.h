// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "BeastGigant.h"
#include "BeastGigantAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class TESTINGVR_API UBeastGigantAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	

public:

	//beginplay
	virtual void NativeInitializeAnimation()override;

	//tick
	virtual void NativeUpdateAnimation(float DeltaSeconds)override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MySettings")
	EBeastGigantState currentStates;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MySettings")
	class ABeastGigant* beastgigant;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MySettings")
	class ABP_Rock1* rock;

	
	UFUNCTION()
	void AnimNotify_AttackEnding();

	UFUNCTION()
	void AnimNotify_AttackStart1();

	UFUNCTION()
	void AnimNotify_JumpStart();

	UFUNCTION()
	void AnimNotify_BeastDie();

	UFUNCTION()
	void AnimNotify_PitchingAttack();

	UFUNCTION()
	void AnimNotify_RockOn();
};
