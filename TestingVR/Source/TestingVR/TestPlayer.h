
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

	//������Ʈ
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

	//��ǲ
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

	//�ν��� ����Ʈ
	UPROPERTY(EditAnywhere, Category = "VR")
	class UNiagaraComponent* boostComp;



	//�̵����� ����
	FVector moveDir;
	//ȸ������ ����
	FRotator deltaRot;

		
	//���̺� ������Ʈ Visibility ����� 
	bool bIsGrapplingR = false;
	bool bIsGrapplingL = false;


	//���̺� ������ ��ġ����
	FVector grabPointR;
	FVector grabPointL;

	//��ǲ�Լ�
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
