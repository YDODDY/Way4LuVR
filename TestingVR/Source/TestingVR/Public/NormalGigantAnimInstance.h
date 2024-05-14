// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "NormalGigant1AIController.h"
#include "NormalGigant1.h"
#include "NormalGigantAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class TESTINGVR_API UNormalGigantAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:

	//beginplay
	virtual void NativeInitializeAnimation()override;

	//tick
	virtual void NativeUpdateAnimation(float DeltaSeconds)override;

	class ANormalGigant1AIController* aiCon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MySettings")
	class ANormalGigant1* normalgigant;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MySettings")
	ENormalGigan1State currentState;

	UFUNCTION()
	void AnimNotify_Attack1End();

	UFUNCTION()
	void AnimNotify_AttackMTStart();

	UFUNCTION()
	void AnimNotify_AttackMTStart2();

	UFUNCTION()
	void AnimNotify_AttackMTStart3();

	UFUNCTION()
	void AnimNotify_AttackMTStart4();

	
};
