
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
	//���̺�
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	class UCableComponent* RcableComp;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class UCableComponent* LcableComp;

	UPROPERTY(EditDefaultsOnly)
	class UBoxComponent* boxComp;

	//������ UI 
	UPROPERTY(EditAnywhere, Category = "VR|UI")
	TSubclassOf<class AFocusPointWidgetActor> crossHairR_bp;
	class AFocusPointWidgetActor* crossHairR_inst;

	UPROPERTY(EditAnywhere, Category = "VR|UI")
	TSubclassOf<class ALeftFocusPointWidgetActor> crossHairL_bp;
	class ALeftFocusPointWidgetActor* crossHairL_inst;



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

	UPROPERTY(EditDefaultsOnly, Category = "VR|Inputs")
	class UInputAction* ia_attack;

	class ADamagetTestActor* damageActor;


	//ȸ������ 
	UPROPERTY(EditAnywhere, Category = "VR|Inputs")
	float sensivility = 0.7f;

	//�ν��� ����Ʈ
	UPROPERTY(EditAnywhere)
	class UNiagaraComponent* boostComp;
	//�ٶ� ����Ʈ
	UPROPERTY(EditAnywhere)
	class UNiagaraComponent* windEffectComp;
	//���� ����Ʈ
	UPROPERTY(EditAnywhere)
	class UNiagaraComponent* attackEffectComp;

	//�Ҹ�
	UPROPERTY(EditAnywhere, Category = "VR|Sounds")
	class USoundBase* jumpSound;
	UPROPERTY(EditAnywhere, Category = "VR|Sounds")
	class USoundBase* shootingSound;
	UPROPERTY(EditAnywhere, Category = "VR|Sounds")
	class USoundBase* boostingSound;
	UPROPERTY(EditAnywhere, Category = "VR|Sounds")
	class USoundBase* attackingSound;
	UPROPERTY(EditAnywhere, Category = "VR|Sounds")
	class UAudioComponent* windSoundComp;
	UPROPERTY(EditAnywhere, Category = "VR|Sounds")
	class UAudioComponent* runningSoundComp;

	//�ӽ� �׷��ø� ���� ����� 
	bool bSoundR = false;
	bool bSoundL = false;

	bool bFixCrossHairR = false;
	bool bFixCrossHairL = false;

	//�̵����� ����
	FVector moveDir;
	//ȸ������ ����
	FRotator deltaRot;
		
	//���̺� ������Ʈ Visibility ����� 
	UPROPERTY(BlueprintReadOnly)
	bool bIsGrapplingR = false;
	UPROPERTY(BlueprintReadOnly)
	bool bIsGrapplingL = false;
	UPROPERTY(BlueprintReadOnly)
	bool bIsGrappling = false;


	//���̺� ������ ��ġ����
	UPROPERTY(BlueprintReadOnly)
	FVector grabPointR;
	UPROPERTY(BlueprintReadOnly)
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
	UFUNCTION()
	void OnAttack(const FInputActionValue& value);
	UFUNCTION()
	void OnAttackBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void OnDamaged(AActor* attacker);

	UFUNCTION()
	void ShowCrossHairR();
	UFUNCTION()
	void ShowCrossHairL();
};
