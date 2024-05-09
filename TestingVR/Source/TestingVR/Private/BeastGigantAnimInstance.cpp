// Fill out your copyright notice in the Description page of Project Settings.


#include "BeastGigantAnimInstance.h"
#include "BeastGigant.h"

void UBeastGigantAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	beastgigant = Cast<ABeastGigant>(TryGetPawnOwner());
	
}

void UBeastGigantAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	
	if (beastgigant)
	{
		currentStates = beastgigant->beastState;

	}
	
}

void UBeastGigantAnimInstance::AnimNotify_AttackEnding()
{
	UE_LOG(LogTemp,Warning, TEXT("CALLLLLLL"));
	beastgigant->bIsAttackAnimationPlaying = false;
}

void UBeastGigantAnimInstance::AnimNotify_AttackStart1()
{
	beastgigant->bIsAttackAnimationPlaying=true;
	UE_LOG(LogTemp, Warning, TEXT("CA2222222"));
}

void UBeastGigantAnimInstance::AnimNotify_JumpStart()
{
	beastgigant->bIsAnimNotify=true;
	beastgigant->bIsMovingNow = true;
	UE_LOG(LogTemp, Warning, TEXT("t11111"));
}
