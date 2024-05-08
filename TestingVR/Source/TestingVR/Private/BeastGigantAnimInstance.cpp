// Fill out your copyright notice in the Description page of Project Settings.


#include "BeastGigantAnimInstance.h"
#include "BeastGigant.h"

void UBeastGigantAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	beastgigant = Cast<ABeastGigant>(GetOwningActor());
	
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
}
