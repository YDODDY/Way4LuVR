

#include "TestPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "MotionControllerComponent.h"
#include <../../../../../../../Plugins/EnhancedInput/Source/EnhancedInput/Public/EnhancedInputSubsystems.h>
#include <../../../../../../../Plugins/EnhancedInput/Source/EnhancedInput/Public/EnhancedInputComponent.h>
#include <../../../../../../../Plugins/EnhancedInput/Source/EnhancedInput/Public/InputActionValue.h>
#include "GameFramework/CharacterMovementComponent.h"
#include "CableComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/PlayerCameraManager.h"
#include "NiagaraComponent.h"

ATestPlayer::ATestPlayer()
{
	PrimaryActorTick.bCanEverTick = true;

	VRcamera = CreateDefaultSubobject<UCameraComponent>(TEXT("VR Camera"));
	VRcamera->SetupAttachment(RootComponent);
	//모션컨트롤러
	leftMotion = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("Left Motion Controller"));
	leftMotion->SetupAttachment(RootComponent);
	leftMotion->SetTrackingMotionSource(TEXT("Left"));
	rightMotion = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("Right Motion Controller"));
	rightMotion->SetupAttachment(RootComponent);
	rightMotion->SetTrackingMotionSource(TEXT("Right"));
	//스켈레탈 매시
	leftHand = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Left Hand"));
	leftHand->SetupAttachment(leftMotion);
	leftHand->SetRelativeLocationAndRotation(FVector(-2.98126f, -3.5f, 4.561753f), FRotator(-25, -180, 90));
	rightHand = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Right Hand"));
	rightHand->SetupAttachment(rightMotion);
	rightHand->SetRelativeLocationAndRotation(FVector(-2.98126f, 3.5f, 4.561753f), FRotator(25, 0, 90));
	//오른손 케이블
	RcableComp = CreateDefaultSubobject<UCableComponent>(TEXT("Right Cable Component"));
	RcableComp->SetupAttachment(rightHand);
	RcableComp->SetRelativeScale3D(FVector(0.7f));
	RcableComp->SetVisibility(false);
	//왼손 케이블
	LcableComp = CreateDefaultSubobject<UCableComponent>(TEXT("Left Cable Component"));
	LcableComp->SetupAttachment(leftHand);
	LcableComp->SetRelativeScale3D(FVector(0.7f));
	LcableComp->SetVisibility(false);
	//부스트 이펙트
	boostComp = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Boost Effect Component"));
	boostComp -> SetupAttachment(RootComponent);
	boostComp -> SetAutoActivate(false);
	boostComp -> SetAutoDestroy(false);

}

void ATestPlayer::BeginPlay()
{
	Super::BeginPlay();

	//컨트롤러 받아둠
	auto* pc = Cast<APlayerController>(Controller);
	if (pc)
	{
		auto subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(pc->GetLocalPlayer());
		if (subsystem)
		{
			subsystem->AddMappingContext(imc_VRPlayer, 0);
		}
	}
}

void ATestPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

 	if (bIsGrapplingR)
 	{
  		RcableComp->EndLocation = GetActorTransform().InverseTransformPosition(grabPointR);
 	}
 	if (bIsGrapplingL)
 	{
  		LcableComp->EndLocation = GetActorTransform().InverseTransformPosition(grabPointL);
 	}

}

void ATestPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* input = Cast<UEnhancedInputComponent>(PlayerInputComponent);

	if (input)
	{
		//기본이동 
		input->BindAction(ia_move, ETriggerEvent::Triggered, this, &ATestPlayer::OnIAMove);
		input->BindAction(ia_move, ETriggerEvent::Completed, this, &ATestPlayer::OnIAMove);
		input->BindAction(ia_jump, ETriggerEvent::Started, this, &ATestPlayer::OnIAJump);
		input->BindAction(ia_turnLR, ETriggerEvent::Triggered, this, &ATestPlayer::OnIATurn);
		input->BindAction(ia_turnUD, ETriggerEvent::Triggered, this, &ATestPlayer::OnIATurnUpDown);
		//그래플링훅 발사
		input->BindAction(ia_Rshot, ETriggerEvent::Started, this, &ATestPlayer::OnRightShooting);
		input->BindAction(ia_Rshot, ETriggerEvent::Completed, this, &ATestPlayer::StopRightShooting);
		input->BindAction(ia_Lshot, ETriggerEvent::Started, this, &ATestPlayer::OnLeftShooting);
		input->BindAction(ia_Lshot, ETriggerEvent::Completed, this, &ATestPlayer::StopLeftShooting);
		input->BindAction(ia_boost, ETriggerEvent::Started, this, &ATestPlayer::OnBoost);
	}
}
//이동
void ATestPlayer::OnIAMove(const FInputActionValue& value)
{
	FVector2D v = value.Get<FVector2D>();

	AddMovementInput(GetActorForwardVector(), v.Y);
	AddMovementInput(GetActorRightVector(), v.X);
}
//시야 회전 좌우
void ATestPlayer::OnIATurn(const FInputActionValue& value)
{
	float v = value.Get<float>();

	AddControllerYawInput(v);
}
//시야 회전 위아래
void ATestPlayer::OnIATurnUpDown(const FInputActionValue& value)
{
	float v = value.Get<float>();
	AddControllerPitchInput(v);
}
//점프
void ATestPlayer::OnIAJump(const FInputActionValue& value)
{
	Jump();
}

//오른손 그래플링 훅
void ATestPlayer::OnRightShooting(const FInputActionValue& value)
{	
	FHitResult hitInfo;
	FVector startLoc = rightHand->GetComponentLocation();
	FVector endLoc = startLoc + rightHand->GetRightVector() * 50000;
	FCollisionObjectQueryParams objQueryParams;
	objQueryParams.AddObjectTypesToQuery(ECC_WorldStatic);
	objQueryParams.AddObjectTypesToQuery(ECC_WorldDynamic);

	//라인트레이스 발사
	bool bResult = GetWorld()->LineTraceSingleByObjectType(hitInfo, startLoc, endLoc, objQueryParams);
	if (bResult)
	{
		bIsGrapplingR = true;
		//케이블 컴포넌트 Visibility 킴
		RcableComp->SetVisibility(true);
		grabPointR = hitInfo.ImpactPoint;
		if (bIsGrapplingR)
		{	
			GetCharacterMovement()->SetMovementMode(MOVE_Flying);
 			RcableComp->EndLocation = GetActorTransform().InverseTransformPosition(grabPointR);
			LaunchCharacter((grabPointR-GetActorLocation()), true, true);
		}
	}
}
//왼손 그래플링 훅 
void ATestPlayer::OnLeftShooting(const FInputActionValue& value)
{
	FHitResult hitInfo;
	FVector startLoc = leftHand->GetComponentLocation();
	FVector endLoc = startLoc + leftHand->GetRightVector() * 50000;
	FCollisionObjectQueryParams objQueryParams;
	objQueryParams.AddObjectTypesToQuery(ECC_WorldStatic);
	objQueryParams.AddObjectTypesToQuery(ECC_WorldDynamic);

	//왼손컴포넌트 위치에서 라인트레이스 발사
	bool bResult = GetWorld()->LineTraceSingleByObjectType(hitInfo, startLoc, endLoc, objQueryParams);
	if (bResult)
	{
		bIsGrapplingL = true;
		//왼손 케이블 컴포넌트 Visibility 킴
		LcableComp->SetVisibility(true);
		grabPointL = hitInfo.ImpactPoint;
		if (bIsGrapplingL)
		{	
			GetCharacterMovement()->SetMovementMode(MOVE_Flying);

			LcableComp->EndLocation = GetActorTransform().InverseTransformPosition(grabPointL);
			LaunchCharacter((grabPointL - GetActorLocation()), true, true);
		}
	}
}

void ATestPlayer::StopRightShooting(const FInputActionValue& value)
{	
	bIsGrapplingR = false;
	if (!GetCharacterMovement()->IsFalling())
	{
		GetCharacterMovement()->SetMovementMode(MOVE_Falling);
	}
	RcableComp->SetVisibility(false);
}

void ATestPlayer::StopLeftShooting(const FInputActionValue& value)
{
	bIsGrapplingL = false;
	if (!GetCharacterMovement()->IsFalling())
	{
		GetCharacterMovement()->SetMovementMode(MOVE_Falling);
	}
	LcableComp->SetVisibility(false);
}
//부스트
void ATestPlayer::OnBoost(const FInputActionValue& value)
{	
	if (GetCharacterMovement()->IsFalling() || GetCharacterMovement()->IsFlying())
	{	
		GetCharacterMovement()->SetMovementMode(MOVE_Flying);
		LaunchCharacter(GetActorForwardVector() * 5000, true, true);
		
		boostComp->Activate();
		boostComp->SetVisibility(true);

		FTimerHandle boostHandle;
		GetWorldTimerManager().SetTimer(boostHandle, FTimerDelegate::CreateLambda([&]() {
			boostComp->SetVisibility(false);
			}), 1.0f, false);
	}
}

