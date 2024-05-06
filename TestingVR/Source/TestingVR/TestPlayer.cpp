

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
#include "Components/AudioComponent.h"
#include "FocusPointWidgetActor.h"
#include "LeftFocusPointWidgetActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "DamageTestActor.h"
#include "PlayerKnifeActor.h"
#include "Components/ArrowComponent.h"

ATestPlayer::ATestPlayer()
{
	PrimaryActorTick.bCanEverTick = true;

	VRcamera = CreateDefaultSubobject<UCameraComponent>(TEXT("VR Camera"));
	VRcamera->SetupAttachment(RootComponent);
	//�����Ʈ�ѷ�
	leftMotion = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("Left Motion Controller"));
	leftMotion->SetupAttachment(RootComponent);
	leftMotion->SetTrackingMotionSource(TEXT("Left"));
	rightMotion = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("Right Motion Controller"));
	rightMotion->SetupAttachment(RootComponent);
	rightMotion->SetTrackingMotionSource(TEXT("Right"));
	//���̷�Ż �Ž�
	leftHand = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Left Hand"));
	leftHand->SetupAttachment(leftMotion);
	leftHand->SetRelativeLocationAndRotation(FVector(-2.98126f, -3.5f, 4.561753f), FRotator(-25, -180, 90));
	rightHand = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Right Hand"));
	rightHand->SetupAttachment(rightMotion);
	rightHand->SetRelativeLocationAndRotation(FVector(-2.98126f, 3.5f, 4.561753f), FRotator(25, 0, 90));
	//������ ���̺�
	RcableComp = CreateDefaultSubobject<UCableComponent>(TEXT("Right Cable Component"));
	RcableComp->SetupAttachment(rightHand);
	RcableComp->SetRelativeScale3D(FVector(0.7f));
	RcableComp->SetVisibility(false);
	//�޼� ���̺�
	LcableComp = CreateDefaultSubobject<UCableComponent>(TEXT("Left Cable Component"));
	LcableComp->SetupAttachment(leftHand);
	LcableComp->SetRelativeScale3D(FVector(0.7f));
	LcableComp->SetVisibility(false);
	//�ν�Ʈ ����Ʈ
	boostComp = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Boost Effect Component"));
	boostComp -> SetupAttachment(RootComponent);
	boostComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	boostComp -> SetAutoActivate(false);
	boostComp -> SetAutoDestroy(false);
	//�ٶ� ����Ʈ
	windEffectComp = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Wind Effect Component"));
	windEffectComp->SetupAttachment(RootComponent);
	windEffectComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	windEffectComp->SetAutoActivate(false);
	windEffectComp->SetAutoDestroy(false);
	//���� ����Ʈ
	attackEffectComp = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Attack Effect Component"));
	attackEffectComp->SetupAttachment(RootComponent);
	attackEffectComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	attackEffectComp->SetAutoActivate(false);
	attackEffectComp->SetAutoDestroy(false);
	//�ٶ� ȿ���� 
	windSoundComp = CreateDefaultSubobject<UAudioComponent>(TEXT("Wind Sound Effect"));
	windSoundComp->SetupAttachment(RootComponent);
	windSoundComp->SetAutoActivate(false);
	//�޸���Ҹ� ȿ���� 
	runningSoundComp = CreateDefaultSubobject<UAudioComponent>(TEXT("Running Sound Effect"));
	runningSoundComp->SetupAttachment(RootComponent);
	runningSoundComp->SetAutoActivate(false);

	knifeLocation = CreateDefaultSubobject<UArrowComponent>(TEXT("Knife Location Component"));
	knifeLocation->SetupAttachment(RootComponent);
	knifeLocation->SetRelativeLocation(FVector(30, 0, 0));
	knifeLocation->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

void ATestPlayer::BeginPlay()
{
	Super::BeginPlay();

	//��Ʈ�ѷ� �޾Ƶ�
	auto* pc = Cast<APlayerController>(Controller);
	if (pc)
	{
		auto subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(pc->GetLocalPlayer());
		if (subsystem)
		{
			subsystem->AddMappingContext(imc_VRPlayer, 0);
		}
	}
	FVector startLocR = rightHand->GetComponentLocation();
	FVector endLocR = startLocR + rightHand->GetRightVector() * 50000;
	FVector startLocL = leftHand->GetComponentLocation();
	FVector endLocL = startLocL + leftHand->GetRightVector() * 50000;

	FActorSpawnParameters paramsR;
	paramsR.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	crossHairR_inst = GetWorld()->SpawnActor<AFocusPointWidgetActor>(crossHairR_bp,endLocR, FRotator::ZeroRotator, paramsR);

	FActorSpawnParameters paramsL;
	paramsL.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	crossHairL_inst = GetWorld()->SpawnActor<ALeftFocusPointWidgetActor>(crossHairL_bp, endLocL, FRotator::ZeroRotator, paramsL);
}

void ATestPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//��ǲ �޴µ��� �׷��ø��� ���� ���� ��� ���
 	if (bIsGrapplingR)
 	{
  		RcableComp->EndLocation = GetActorTransform().InverseTransformPosition(grabPointR);
 	}
 	if (bIsGrapplingL)
 	{
  		LcableComp->EndLocation = GetActorTransform().InverseTransformPosition(grabPointL);
 	}
	//�� �� ������ ����
	ShowCrossHairR();
	ShowCrossHairL();


}

void ATestPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* input = Cast<UEnhancedInputComponent>(PlayerInputComponent);

	if (input)
	{
		//�⺻�̵� 
		input->BindAction(ia_move, ETriggerEvent::Triggered, this, &ATestPlayer::OnIAMove);
		input->BindAction(ia_move, ETriggerEvent::Completed, this, &ATestPlayer::OnIAMove);
		input->BindAction(ia_jump, ETriggerEvent::Started, this, &ATestPlayer::OnIAJump);
		input->BindAction(ia_turnLR, ETriggerEvent::Triggered, this, &ATestPlayer::OnIATurn);
		input->BindAction(ia_turnUD, ETriggerEvent::Triggered, this, &ATestPlayer::OnIATurnUpDown);
		//�׷��ø��� �߻�
		input->BindAction(ia_Rshot, ETriggerEvent::Started, this, &ATestPlayer::OnRightShooting);
		input->BindAction(ia_Rshot, ETriggerEvent::Completed, this, &ATestPlayer::StopRightShooting);
		input->BindAction(ia_Lshot, ETriggerEvent::Started, this, &ATestPlayer::OnLeftShooting);
		input->BindAction(ia_Lshot, ETriggerEvent::Completed, this, &ATestPlayer::StopLeftShooting);
		input->BindAction(ia_boost, ETriggerEvent::Started, this, &ATestPlayer::OnBoost);
		//����
		input->BindAction(ia_attack, ETriggerEvent::Started, this, &ATestPlayer::OnAttack);
	}
}
//�̵�
void ATestPlayer::OnIAMove(const FInputActionValue& value)
{
	runningSoundComp->Play();
	FVector2D v = value.Get<FVector2D>();

	AddMovementInput(GetActorForwardVector(), v.Y);
	AddMovementInput(GetActorRightVector(), v.X);
}
//�þ� ȸ�� �¿�s
void ATestPlayer::OnIATurn(const FInputActionValue& value)
{
	float v = value.Get<float>();

	AddControllerYawInput(v * sensivility);
}
//�þ� ȸ�� ���Ʒ�
void ATestPlayer::OnIATurnUpDown(const FInputActionValue& value)
{
	float v = value.Get<float>();
	AddControllerPitchInput(v * sensivility);
}
//����
void ATestPlayer::OnIAJump(const FInputActionValue& value)
{
	Jump();
	UGameplayStatics::PlaySound2D(GetWorld(), jumpSound);
}


//������ �׷��ø� ��
void ATestPlayer::OnRightShooting(const FInputActionValue& value)
{	
	FVector startLocR = rightHand->GetComponentLocation();
	FVector endLocR = startLocR + rightHand->GetRightVector() * 50000;
	FHitResult hitInfo;
	FCollisionObjectQueryParams objQueryParams;
	objQueryParams.AddObjectTypesToQuery(ECC_WorldStatic);
	objQueryParams.AddObjectTypesToQuery(ECC_WorldDynamic);
	//����Ʈ���̽� �߻�
	bool bResult = GetWorld()->LineTraceSingleByObjectType(hitInfo, startLocR, endLocR, objQueryParams);
	if (bResult)
	{
		bIsGrapplingR = true;
		bIsGrappling = true;
		bFixCrossHairR = true;
		//���̺� ������Ʈ Visibility Ŵ
		RcableComp->SetVisibility(true);
		if (bSoundR == false)
		{	
			bSoundR = true;
			//ȿ����
			UGameplayStatics::PlaySound2D(GetWorld(), shootingSound);
		}

		grabPointR = hitInfo.ImpactPoint;
		if (bIsGrapplingR)
		{	//����Ʈ���̽� �浹���� ��ġ�� ���� + ĳ���͹����Ʈ��� Flying ���� ��ȯ > LaunchCharacter, AddForce ����
			GetCharacterMovement()->SetMovementMode(MOVE_Flying);
 			RcableComp->EndLocation = GetActorTransform().InverseTransformPosition(grabPointR);
		//	LaunchCharacter((grabPointR-GetActorLocation()) * 0.2f, true, true);
			
			crossHairR_inst->SetActorLocation(grabPointR);
			//�ٶ�ȿ��
			windEffectComp->Activate();
			windEffectComp->SetVisibility(true);
			//3�� �� �ٶ�ȿ�� ��
			FTimerHandle boostHandle;
			GetWorldTimerManager().SetTimer(boostHandle, FTimerDelegate::CreateLambda([&]() {
				windEffectComp->SetVisibility(false);
				}), 2.0f, false);
		}
	}
}
//�޼� �׷��ø� �� 
void ATestPlayer::OnLeftShooting(const FInputActionValue& value)
{
	FVector startLocL = leftHand->GetComponentLocation();
	FVector endLocL = startLocL + leftHand->GetRightVector() * 50000;
	FHitResult hitInfo;
	FCollisionObjectQueryParams objQueryParams;
	objQueryParams.AddObjectTypesToQuery(ECC_WorldStatic);
	objQueryParams.AddObjectTypesToQuery(ECC_WorldDynamic);

	//�޼�������Ʈ ��ġ���� ����Ʈ���̽� �߻�
	bool bResult = GetWorld()->LineTraceSingleByObjectType(hitInfo, startLocL, endLocL, objQueryParams);
	if (bResult)
	{
		bIsGrapplingL = true;
		bIsGrappling = true;
		bFixCrossHairL = true;
		//�޼� ���̺� ������Ʈ Visibility Ŵ
		LcableComp->SetVisibility(true);
		if (bSoundL == false)
		{
			bSoundL = true;
			//ȿ����
			UGameplayStatics::PlaySound2D(GetWorld(), shootingSound);
		}
		grabPointL = hitInfo.ImpactPoint;
		if (bIsGrapplingL)
		{	//����Ʈ���̽� �浹���� ��ġ�� ���� + ĳ���͹����Ʈ��� Flying ���� ��ȯ > LaunchCharacter, AddForce ����
			GetCharacterMovement()->SetMovementMode(MOVE_Flying);

			LcableComp->EndLocation = GetActorTransform().InverseTransformPosition(grabPointL);
		//	LaunchCharacter((grabPointL - GetActorLocation())* 0.2f, true, true);
			crossHairL_inst->SetActorLocation(grabPointL);

			//�ٶ�ȿ��
			windEffectComp->Activate();
			windEffectComp->SetVisibility(true);
			//3�� �� �ٶ�ȿ�� ��
			FTimerHandle boostHandle;
			GetWorldTimerManager().SetTimer(boostHandle, FTimerDelegate::CreateLambda([&]() {
				windEffectComp->SetVisibility(false);
				}), 2.0f, false);
		}
	}
}
//�� ��� Ű ���� �� R
void ATestPlayer::StopRightShooting(const FInputActionValue& value)
{	
	bSoundR = false;
	bIsGrapplingR = false;
	bIsGrappling = false;
	bFixCrossHairR = false;
	if (!GetCharacterMovement()->IsFalling())
	{
		GetCharacterMovement()->SetMovementMode(MOVE_Falling);
	}
	RcableComp->SetVisibility(false);
}
//�� ��� Ű ���� �� L
void ATestPlayer::StopLeftShooting(const FInputActionValue& value)
{
	bSoundL = false;
	bIsGrapplingL = false;
	bIsGrappling = false;
	bFixCrossHairL = false;
	if (!GetCharacterMovement()->IsFalling())
	{
		GetCharacterMovement()->SetMovementMode(MOVE_Falling);
	}
	LcableComp->SetVisibility(false);
}
//�ν�Ʈ
void ATestPlayer::OnBoost(const FInputActionValue& value)
{	
	if (GetCharacterMovement()->IsFalling() || GetCharacterMovement()->IsFlying())
	{	
		GetCharacterMovement()->SetMovementMode(MOVE_Flying);
		LaunchCharacter(GetActorForwardVector() * 5000, true, true);
		
		//�ٶ�����Ʈ+�ν�Ʈ����Ʈ �Ѵ� Ŵ
		boostComp->Activate();
		boostComp->SetVisibility(true);
		windEffectComp->Activate();
		windEffectComp->SetVisibility(true);
		UGameplayStatics::PlaySound2D(GetWorld(), boostingSound);
		
		//�ν�Ʈ ����Ʈ�� 1.5�� �� ��
		FTimerHandle boostHandle;
		GetWorldTimerManager().ClearTimer(boostHandle);
		GetWorldTimerManager().SetTimer(boostHandle, FTimerDelegate::CreateLambda([&]() {
			boostComp->SetVisibility(false);
			}), 1.5f, false);
	}
}
//������ǲ �Լ� 
void ATestPlayer::OnAttack(const FInputActionValue& value)
{	
	if (attackingSound != nullptr)
	{
		UGameplayStatics::PlaySound2D(GetWorld(), attackingSound);
	}

	FActorSpawnParameters params;
	params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	GetWorld()->SpawnActor<APlayerKnifeActor>(knifeActor, knifeLocation->GetComponentLocation(), knifeLocation->GetComponentRotation(), params);

	//���� ����Ʈ
	attackEffectComp->Activate();
	attackEffectComp->SetVisibility(true);
	//1�� �� ����ȿ�� ��
	FTimerHandle attackEffectHandle;
	GetWorldTimerManager().ClearTimer(attackEffectHandle);
	GetWorldTimerManager().SetTimer(attackEffectHandle, FTimerDelegate::CreateLambda([&]() {
		attackEffectComp->SetVisibility(false);
		}), 0.7f, false);
}

//�÷��̾� ������ �Դ� �Լ� - ���� ��� 
void ATestPlayer::OnDamaged(AActor* attacker)
{

}
//������ ������ UI ����
void ATestPlayer::ShowCrossHairR()
{
	if(crossHairR_inst != nullptr)
	{ 
		if(bFixCrossHairR == false)
		{ 
			FVector startLocR = rightHand->GetComponentLocation();
			FVector endLocR = startLocR + rightHand->GetRightVector() * 50000;
			FHitResult hitInfo;
			FCollisionObjectQueryParams objQueryParams;
			objQueryParams.AddObjectTypesToQuery(ECC_WorldStatic);
			objQueryParams.AddObjectTypesToQuery(ECC_WorldDynamic);

			//����Ʈ���̽� �߻�
			bool bResult = GetWorld()->LineTraceSingleByObjectType(hitInfo, startLocR, endLocR, objQueryParams);
			if (bResult)
			{ 
				crossHairR_inst->SetActorLocation(hitInfo.ImpactPoint);
			}
			else
			{
				crossHairR_inst->SetActorLocation((rightHand->GetRightVector()) * 50000);
			}
		}
	}
}

//�޼� ������ UI ����
void ATestPlayer::ShowCrossHairL()
{
	if(crossHairL_inst != nullptr)
	{ 
		if(bFixCrossHairL == false)
		{ 
			FVector startLocL = leftHand->GetComponentLocation();
			FVector endLocL = startLocL + leftHand->GetRightVector() * 50000;
			FHitResult hitInfo;
			FCollisionObjectQueryParams objQueryParams;
			objQueryParams.AddObjectTypesToQuery(ECC_WorldStatic);
			objQueryParams.AddObjectTypesToQuery(ECC_WorldDynamic);

			//����Ʈ���̽� �߻�
			bool bResult = GetWorld()->LineTraceSingleByObjectType(hitInfo, startLocL, endLocL, objQueryParams);
			if (bResult)
			{	
				crossHairL_inst->SetActorLocation(hitInfo.ImpactPoint);
			}
			else
			{
				crossHairL_inst->SetActorLocation((leftHand->GetRightVector()) * 50000);
			}
		}
	}
}

