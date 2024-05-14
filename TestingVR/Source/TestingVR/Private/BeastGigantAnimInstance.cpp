// Fill out your copyright notice in the Description page of Project Settings.


#include "BeastGigantAnimInstance.h"
#include "BeastGigant.h"
#include "BP_Rock1.h"

void UBeastGigantAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	beastgigant = Cast<ABeastGigant>(TryGetPawnOwner());

	// rock 액터를 가져와서 캐스팅
	AActor* OwnerActor = GetOwningActor();
	if (OwnerActor)
	{
		rock = Cast<ABP_Rock1>(OwnerActor);
	}
	
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

void UBeastGigantAnimInstance::AnimNotify_BeastDie()
{
	beastgigant->bIsGigantDieStill=true;
	UE_LOG(LogTemp, Warning, TEXT("666666666666"));
}

void UBeastGigantAnimInstance::AnimNotify_PitchingAttack()
{
	UE_LOG(LogTemp, Warning, TEXT("AnimNotify_PitchingAttack"));
	beastgigant->RockMesh->SetVisibility(false);
	beastgigant->SpawnExtraStone();
	
}

void UBeastGigantAnimInstance::AnimNotify_RockOn()
{
	beastgigant->RockMesh->SetVisibility(true);
	
}
