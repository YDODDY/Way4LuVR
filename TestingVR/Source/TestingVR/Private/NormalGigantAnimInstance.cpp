// Fill out your copyright notice in the Description page of Project Settings.


#include "NormalGigantAnimInstance.h"

void UNormalGigantAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	normalgigant = Cast<ANormalGigant1>(GetOwningActor());
}

void UNormalGigantAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (normalgigant)
	{
		currentState = normalgigant->gigant1State;

	}


}

void UNormalGigantAnimInstance::AnimNotify_Attack1End()
{
	//��Ƽ���̰� ������ false�� �������ְ� �ٽ� ����ǰ� 
	normalgigant->bIsAttackAnimationPlaying = false;
	normalgigant->gigant1State = ENormalGigan1State::ATTACK;


}