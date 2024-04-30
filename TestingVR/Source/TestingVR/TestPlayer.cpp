

#include "TestPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "MotionControllerComponent.h"
#include <../../../../../../../Plugins/EnhancedInput/Source/EnhancedInput/Public/EnhancedInputSubsystems.h>
#include <../../../../../../../Plugins/EnhancedInput/Source/EnhancedInput/Public/EnhancedInputComponent.h>
#include <../../../../../../../Plugins/EnhancedInput/Source/EnhancedInput/Public/InputActionValue.h>
#include "GameFramework/CharacterMovementComponent.h"



ATestPlayer::ATestPlayer()
{
	PrimaryActorTick.bCanEverTick = true;

	VRcamera = CreateDefaultSubobject<UCameraComponent>(TEXT("VR Camera"));
	VRcamera->SetupAttachment(RootComponent);

	leftMotion = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("Left Motion Controller"));
	leftMotion->SetupAttachment(RootComponent);
	leftMotion->SetTrackingMotionSource(TEXT("Left"));
	rightMotion = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("Right Motion Controller"));
	rightMotion->SetupAttachment(RootComponent);
	rightMotion->SetTrackingMotionSource(TEXT("Right"));

	leftHand = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Left Hand"));
	leftHand->SetupAttachment(leftMotion);
	leftHand->SetRelativeLocationAndRotation(FVector(-2.98126f, -3.5f, 4.561753f), FRotator(-25, -180, 90));
	rightHand = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Right Hand"));
	rightHand->SetupAttachment(rightMotion);
	rightHand->SetRelativeLocationAndRotation(FVector(-2.98126f, 3.5f, 4.561753f), FRotator(25, 0, 90));

	//GetCharacterMovement()->bOrientRotationToMovement = false;
	//GetCharacterMovement()->bUseControllerDesiredRotation = true;

}

void ATestPlayer::BeginPlay()
{
	Super::BeginPlay();
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

	//FVector localMoveDir = GetActorForwardVector() * moveDir.X + GetActorRightVector() * moveDir.Y;
	FVector localMoveDir = GetTransform().TransformVector(moveDir);
	AddMovementInput(localMoveDir.GetSafeNormal());
}

void ATestPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* input = Cast<UEnhancedInputComponent>(PlayerInputComponent);

	if (input)
	{
		input->BindAction(ia_move, ETriggerEvent::Triggered, this, &ATestPlayer::OnIAMove);
		input->BindAction(ia_move, ETriggerEvent::Completed, this, &ATestPlayer::OnIAMove);
		input->BindAction(ia_jump, ETriggerEvent::Started, this, &ATestPlayer::OnIAJump);
		input->BindAction(ia_shooting, ETriggerEvent::Started, this, &ATestPlayer::OnIAShooting);
	}
}

void ATestPlayer::OnIAMove(const FInputActionValue& value)
{
	FVector2D v = value.Get<FVector2D>();

	moveDir = FVector(v.Y, v.X, 0);
}

void ATestPlayer::OnIAJump(const FInputActionValue& value)
{
	Jump();
}
//그래플링훅
void ATestPlayer::OnIAShooting(const FInputActionValue& value)
{	
	FHitResult hitInfo;
	FVector startLoc = rightHand->GetComponentLocation();
	//FVector forwardVector = rightHand->GetForwardVector();
	//FVector endLoc = startLoc + forwardVector * 1000;
	FVector endLoc = startLoc + rightHand->GetForwardVector() * 1000;
	FCollisionObjectQueryParams objQueryParams;
	objQueryParams.AddObjectTypesToQuery(ECC_WorldStatic);
	objQueryParams.AddObjectTypesToQuery(ECC_WorldDynamic);

	//오른손컴포넌트 위치에서 라인트레이스 발사
	bool bResult = GetWorld()->LineTraceSingleByObjectType(hitInfo, startLoc, endLoc, objQueryParams);
	if (bResult)
	{
		DrawDebugLine(GetWorld(), startLoc, hitInfo.ImpactPoint, FColor::Red, false, 2.0f, 0, 1.0f);
	}
	else
	{
		DrawDebugLine(GetWorld(), startLoc, endLoc, FColor::Green, false, 2.0f, 0, 1.0f);
	}
}
