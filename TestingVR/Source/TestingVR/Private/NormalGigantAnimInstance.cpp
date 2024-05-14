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
	
	normalgigant->IgnoreChannel();
}

void UNormalGigantAnimInstance::AnimNotify_AttackMTStart()
{
	UE_LOG(LogTemp, Warning, TEXT("AnimNotify_AttackMTStart"));
	normalgigant->CancelIgnoreChannel();
}

void UNormalGigantAnimInstance::AnimNotify_AttackMTStart2()
{
	UE_LOG(LogTemp, Warning, TEXT("AnimNotify_AttackMTStart2"));
	normalgigant->CancelIgnoreChannel();
}

void UNormalGigantAnimInstance::AnimNotify_AttackMTStart3()
{
	UE_LOG(LogTemp, Warning, TEXT("AnimNotify_AttackMTStart3"));
	normalgigant->CancelIgnoreChannel();
}

void UNormalGigantAnimInstance::AnimNotify_AttackMTStart4()
{
	UE_LOG(LogTemp, Warning, TEXT("AnimNotify_AttackMTStart4"));
	normalgigant->CancelIgnoreChannel();
}


