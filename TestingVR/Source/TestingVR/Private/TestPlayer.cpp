

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
#include "PlayerKnifeActor.h"
#include "Components/ArrowComponent.h"
#include "Components/CapsuleComponent.h"
#include <../../../../../../../Source/Runtime/Engine/Classes/Kismet/KismetMathLibrary.h>

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

	rightAim = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("Right Aim"));
	rightAim ->SetupAttachment(RootComponent);
	rightAim ->SetTrackingMotionSource(TEXT("RightAim"));
	leftAim = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("Left Aim"));
	leftAim->SetupAttachment(RootComponent);
	leftAim->SetTrackingMotionSource(TEXT("LeftAim"));

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
	boostComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	boostComp -> SetAutoActivate(false);
	boostComp -> SetAutoDestroy(false);
	//바람 이펙트
	windEffectComp = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Wind Effect Component"));
	windEffectComp->SetupAttachment(RootComponent);
	windEffectComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	windEffectComp->SetAutoActivate(false);
	windEffectComp->SetAutoDestroy(false);
	//공격 이펙트
	attackEffectComp = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Attack Effect Component"));
	attackEffectComp->SetupAttachment(RootComponent);
	attackEffectComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	attackEffectComp->SetAutoActivate(false);
	attackEffectComp->SetAutoDestroy(false);
	//바람 효과음 
	windSoundComp = CreateDefaultSubobject<UAudioComponent>(TEXT("Wind Sound Effect"));
	windSoundComp->SetupAttachment(RootComponent);
	windSoundComp->SetAutoActivate(false);
	//달리기소리 효과음 
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

	//체력 초기화
	currentHP = maxHP;

	//컨트롤러 받아둠
	pc = Cast<APlayerController>(Controller);
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
	//인풋 받는동안 그래플링훅 꼽은 지점 계속 기억
 	if (bIsGrapplingR)
 	{
  		RcableComp->EndLocation = GetActorTransform().InverseTransformPosition(grabPointR);
 	}
 	if (bIsGrapplingL)
 	{
  		LcableComp->EndLocation = GetActorTransform().InverseTransformPosition(grabPointL);
 	}
	//양 손 조준점 띄우기
	ShowCrossHairR();
	ShowCrossHairL();


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
		//공격
		input->BindAction(ia_attack, ETriggerEvent::Started, this, &ATestPlayer::OnAttack);
	}
}
//이동
void ATestPlayer::OnIAMove(const FInputActionValue& value)
{
	runningSoundComp->Play();
	FVector2D v = value.Get<FVector2D>();

	AddMovementInput(GetActorForwardVector(), v.Y);
	AddMovementInput(GetActorRightVector(), v.X);
}
//시야 회전 좌우
void ATestPlayer::OnIATurn(const FInputActionValue& value)
{
	float v = value.Get<float>();

	AddControllerYawInput(v * sensivility);
}
//시야 회전 위아래
void ATestPlayer::OnIATurnUpDown(const FInputActionValue& value)
{
	float v = value.Get<float>();
	AddControllerPitchInput(v * sensivility);
}
//점프
void ATestPlayer::OnIAJump(const FInputActionValue& value)
{
	Jump();
	UGameplayStatics::PlaySound2D(GetWorld(), jumpSound);
}
//오른손 그래플링 훅
void ATestPlayer::OnRightShooting(const FInputActionValue& value)
{	
	FVector startLocR = rightAim->GetComponentLocation();
	FVector endLocR = startLocR + rightAim->GetForwardVector() * 50000;
	FHitResult hitInfo;
	FCollisionQueryParams params;
	params.AddIgnoredActor(this);
	params.AddIgnoredComponent(rightHand);
	params.AddIgnoredComponent(leftHand);
	//라인트레이스 발사
	bool bResult = GetWorld()->LineTraceSingleByChannel(hitInfo, startLocR, endLocR, ECC_Visibility,params);
	if (bResult)
	{
		bIsGrapplingR = true;
		bIsGrappling = true;
		bFixCrossHairR = true;
		//케이블 컴포넌트 Visibility 킴
		RcableComp->SetVisibility(true);
		if (bSoundR == false)
		{	
			bSoundR = true;
			//효과음
			UGameplayStatics::PlaySound2D(GetWorld(), shootingSound);
		}

		grabPointR = hitInfo.ImpactPoint;
		if (bIsGrapplingR)
		{	//라인트레이스 충돌지점 위치값 저장 + 캐릭터무브먼트모드 Flying 으로 전환 > LaunchCharacter, AddForce 적용
			GetCharacterMovement()->SetMovementMode(MOVE_Flying);
 			RcableComp->EndLocation = GetActorTransform().InverseTransformPosition(grabPointR);
		//	LaunchCharacter((grabPointR-GetActorLocation()) * 0.2f, true, true);
			
			crossHairR_inst->SetActorLocation(grabPointR);
			//바람효과
			windEffectComp->Activate();
			windEffectComp->SetVisibility(true);
			//3초 뒤 바람효과 끔
			FTimerHandle boostHandle;
			GetWorldTimerManager().SetTimer(boostHandle, FTimerDelegate::CreateLambda([&]() {
				windEffectComp->SetVisibility(false);
				}), 2.0f, false);
		}
	}
}
//왼손 그래플링 훅 
void ATestPlayer::OnLeftShooting(const FInputActionValue& value)
{
	FVector startLocL = leftAim->GetComponentLocation();
	FVector endLocL = startLocL + leftAim->GetForwardVector()* 50000;
	FHitResult hitInfo;
	FCollisionQueryParams params;
	params.AddIgnoredActor(this);
	params.AddIgnoredComponent(rightHand);
	params.AddIgnoredComponent(leftHand);

	//왼손컴포넌트 위치에서 라인트레이스 발사
	bool bResult = GetWorld()->LineTraceSingleByChannel(hitInfo, startLocL, endLocL, ECC_Visibility, params);
	if (bResult)
	{
		bIsGrapplingL = true;
		bIsGrappling = true;
		bFixCrossHairL = true;
		//왼손 케이블 컴포넌트 Visibility 킴
		LcableComp->SetVisibility(true);
		if (bSoundL == false)
		{
			bSoundL = true;
			//효과음
			UGameplayStatics::PlaySound2D(GetWorld(), shootingSound);
		}
		grabPointL = hitInfo.ImpactPoint;
		if (bIsGrapplingL)
		{	//라인트레이스 충돌지점 위치값 저장 + 캐릭터무브먼트모드 Flying 으로 전환 > LaunchCharacter, AddForce 적용
			GetCharacterMovement()->SetMovementMode(MOVE_Flying);

			LcableComp->EndLocation = GetActorTransform().InverseTransformPosition(grabPointL);
		//	LaunchCharacter((grabPointL - GetActorLocation())* 0.2f, true, true);
			crossHairL_inst->SetActorLocation(grabPointL);

			//바람효과
			windEffectComp->Activate();
			windEffectComp->SetVisibility(true);
			//3초 뒤 바람효과 끔
			FTimerHandle boostHandle;
			GetWorldTimerManager().SetTimer(boostHandle, FTimerDelegate::CreateLambda([&]() {
				windEffectComp->SetVisibility(false);
				}), 2.0f, false);
		}
	}
}
//훅 쏘는 키 뗐을 때 R
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
//훅 쏘는 키 뗐을 때 L
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
//부스트
void ATestPlayer::OnBoost(const FInputActionValue& value)
{	
	if (GetCharacterMovement()->IsFalling() || GetCharacterMovement()->IsFlying())
	{	
		GetCharacterMovement()->SetMovementMode(MOVE_Flying);
		LaunchCharacter(GetActorForwardVector() * 5000, true, true);
		
		//바람이펙트+부스트이펙트 둘다 킴
		boostComp->Activate();
		boostComp->SetVisibility(true);
		windEffectComp->Activate();
		windEffectComp->SetVisibility(true);
		UGameplayStatics::PlaySound2D(GetWorld(), boostingSound);
		
		//부스트 이펙트는 1.5초 뒤 끔
		FTimerHandle boostHandle;
		GetWorldTimerManager().ClearTimer(boostHandle);
		GetWorldTimerManager().SetTimer(boostHandle, FTimerDelegate::CreateLambda([&]() {
			boostComp->SetVisibility(false);
			}), 1.5f, false);
	}
}
//공격인풋 함수 
void ATestPlayer::OnAttack(const FInputActionValue& value)
{	
	if (attackingSound != nullptr)
	{
		UGameplayStatics::PlaySound2D(GetWorld(), attackingSound);
	}

	FActorSpawnParameters params;
	params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	GetWorld()->SpawnActor<APlayerKnifeActor>(knifeActor, knifeLocation->GetComponentLocation(), knifeLocation->GetComponentRotation(), params);

	//공격 이펙트
	attackEffectComp->Activate();
	attackEffectComp->SetVisibility(true);
	//1초 뒤 공격효과 끔
	FTimerHandle attackEffectHandle;
	GetWorldTimerManager().ClearTimer(attackEffectHandle);
	GetWorldTimerManager().SetTimer(attackEffectHandle, FTimerDelegate::CreateLambda([&]() {
		attackEffectComp->SetVisibility(false);
		}), 0.7f, false);
}

//플레이어 데미지 입는 함수 - 거인 사용 
void ATestPlayer::OnDamaged(AActor* attacker)
{	
	//체력 깎기 
	currentHP = currentHP - 50;
	if (currentHP <= 0)
	{
		Die();
	}
	//인풋 꺼버리기 -> 1초 뒤 다시 인풋 활성화 
	pc->DisableInput(pc);
	FTimerHandle inputTimerHandle; 
	GetWorldTimerManager().ClearTimer(inputTimerHandle);
	GetWorldTimerManager().SetTimer(inputTimerHandle, FTimerDelegate::CreateLambda([&]() {
		pc->EnableInput(pc);
		}), 2.0f, false);
	FVector dir = GetActorLocation() - attacker->GetActorForwardVector();
	GetCharacterMovement()->AddImpulse(dir, false);


	UE_LOG(LogTemp, Warning, TEXT("PlayerDamaged"));

}
//오른손 조준점 UI 띄우기
void ATestPlayer::ShowCrossHairR()
{
	if(crossHairR_inst != nullptr)
	{ 
		if(bFixCrossHairR == false)
		{ 
			FVector startLocR = rightAim->GetComponentLocation();
			FVector endLocR = startLocR + rightAim->GetForwardVector() * 50000;
			FHitResult hitInfo;
			FCollisionQueryParams params;
			params.AddIgnoredActor(this);
			params.AddIgnoredComponent(rightHand);
			params.AddIgnoredComponent(leftHand);
			float distance = 1.0f;

			//라인트레이스 발사
			bool bResult = GetWorld()->LineTraceSingleByChannel(hitInfo, startLocR, endLocR, ECC_Visibility, params);
			if (bResult)
			{ 
				crossHairR_inst->SetActorLocation(hitInfo.ImpactPoint);
				distance = kAdjustCrossJairScale * hitInfo.Distance / 100;
			}
			else
			{
				crossHairR_inst->SetActorLocation(endLocR);
				distance = kAdjustCrossJairScale * FVector::Dist(startLocR, endLocR) / 100;

			}

			crossHairR_inst->SetActorScale3D(FVector(distance));

			FVector dir = crossHairR_inst->GetActorLocation() - VRcamera->GetComponentLocation();
			crossHairR_inst->SetActorRotation(UKismetMathLibrary::MakeRotFromX(dir.GetSafeNormal()));
		}
	}
}

//왼손 조준점 UI 띄우기
void ATestPlayer::ShowCrossHairL()
{
	if(crossHairL_inst != nullptr)
	{ 
		if(bFixCrossHairL == false)
		{ 
			FVector startLocL = leftAim->GetComponentLocation();
			FVector endLocL = startLocL + leftAim->GetForwardVector()* 50000;
			FHitResult hitInfo;
			FCollisionQueryParams params;
			params.AddIgnoredActor(this);
			params.AddIgnoredComponent(rightHand);
			params.AddIgnoredComponent(leftHand);
			float distance = 1.0f;


			//라인트레이스 발사
			bool bResult = GetWorld()->LineTraceSingleByChannel(hitInfo, startLocL, endLocL, ECC_Visibility, params);
			if (bResult)
			{	
				crossHairL_inst->SetActorLocation(hitInfo.ImpactPoint);
				distance = kAdjustCrossJairScale * hitInfo.Distance / 100;
			}
			else
			{
				crossHairL_inst->SetActorLocation(endLocL);
				distance = kAdjustCrossJairScale * FVector::Dist(startLocL, endLocL) / 100;
			}
			crossHairL_inst->SetActorScale3D(FVector(distance));

			FVector dir = crossHairL_inst->GetActorLocation() - VRcamera->GetComponentLocation();
			crossHairL_inst->SetActorRotation(UKismetMathLibrary::MakeRotFromX(dir.GetSafeNormal()));
		}
	}
}

void ATestPlayer::Die()
{
	//인풋 꺼버리고 땅에 떨어짐 
	pc->DisableInput(pc);
	GetCapsuleComponent()->SetSimulatePhysics(true);
}

