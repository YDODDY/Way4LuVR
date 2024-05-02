
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TestPlayer.generated.h"

UCLASS()
class TESTINGVR_API ATestPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	ATestPlayer();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//컴포넌트
	UPROPERTY(EditDefaultsOnly)
	class UCameraComponent* VRcamera;

	UPROPERTY(EditDefaultsOnly)
	class UMotionControllerComponent* leftMotion;

	UPROPERTY(EditDefaultsOnly)
	class UMotionControllerComponent* rightMotion;

	UPROPERTY(EditDefaultsOnly)
	class USkeletalMeshComponent* leftHand;

	UPROPERTY(EditDefaultsOnly)
	class USkeletalMeshComponent* rightHand;

	UPROPERTY(EditDefaultsOnly)
	class UCableComponent* RcableComp;

	UPROPERTY(EditDefaultsOnly)
	class UCableComponent* LcableComp;

	//인풋
	UPROPERTY(EditDefaultsOnly , Category = "VR|Inputs")
	class UInputMappingContext* imc_VRPlayer;

	UPROPERTY(EditDefaultsOnly , Category = "VR|Inputs")
	class UInputAction* ia_move;

	UPROPERTY(EditDefaultsOnly, Category = "VR|Inputs")
	class UInputAction* ia_turnLR;
	
	UPROPERTY(EditDefaultsOnly, Category = "VR|Inputs")
	class UInputAction* ia_turnUD;
	
	UPROPERTY(EditDefaultsOnly , Category = "VR|Inputs")
	class UInputAction* ia_jump;

	UPROPERTY(EditDefaultsOnly , Category = "VR|Inputs")
	class UInputAction* ia_Rshot;

	UPROPERTY(EditDefaultsOnly, Category = "VR|Inputs")
	class UInputAction* ia_Lshot;

	UPROPERTY(EditDefaultsOnly, Category = "VR|Inputs")
	class UInputAction* ia_boost;

	//부스터 이펙트
	UPROPERTY(EditAnywhere, Category = "VR")
	class UNiagaraComponent* boostComp;



	//이동방향 변수
	FVector moveDir;
	//회전방향 변수
	FRotator deltaRot;

		
	//케이블 컴포넌트 Visibility 제어변수 
	bool bIsGrapplingR = false;
	bool bIsGrapplingL = false;


	//케이블 꽂히는 위치변수
	FVector grabPointR;
	FVector grabPointL;

	//인풋함수
	UFUNCTION()
	void OnIAMove(const FInputActionValue& value);
	UFUNCTION()
	void OnIAJump(const FInputActionValue& value);
	UFUNCTION()
	void OnIATurn(const FInputActionValue& value);
	UFUNCTION()
	void OnIATurnUpDown(const FInputActionValue& value);

	UFUNCTION()
	void OnRightShooting(const FInputActionValue& value);
	UFUNCTION()
	void OnLeftShooting(const FInputActionValue& value);
	UFUNCTION()
	void StopRightShooting(const FInputActionValue& value);
	UFUNCTION()
	void StopLeftShooting(const FInputActionValue& value);
	UFUNCTION()
	void OnBoost(const FInputActionValue& value);



};
