
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
	//케이블
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	class UCableComponent* RcableComp;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class UCableComponent* LcableComp;

	UPROPERTY(EditDefaultsOnly)
	class UBoxComponent* boxComp;

	//조준점 UI 
	UPROPERTY(EditAnywhere, Category = "VR|UI")
	TSubclassOf<class AFocusPointWidgetActor> crossHairR_bp;
	class AFocusPointWidgetActor* crossHairR_inst;

	UPROPERTY(EditAnywhere, Category = "VR|UI")
	TSubclassOf<class ALeftFocusPointWidgetActor> crossHairL_bp;
	class ALeftFocusPointWidgetActor* crossHairL_inst;



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

	UPROPERTY(EditDefaultsOnly, Category = "VR|Inputs")
	class UInputAction* ia_attack;

	class ADamagetTestActor* damageActor;


	//회전감도 
	UPROPERTY(EditAnywhere, Category = "VR|Inputs")
	float sensivility = 0.7f;

	//부스터 이펙트
	UPROPERTY(EditAnywhere)
	class UNiagaraComponent* boostComp;
	//바람 이펙트
	UPROPERTY(EditAnywhere)
	class UNiagaraComponent* windEffectComp;
	//공격 이펙트
	UPROPERTY(EditAnywhere)
	class UNiagaraComponent* attackEffectComp;

	//소리
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

	//임시 그래플링 사운드 제어용 
	bool bSoundR = false;
	bool bSoundL = false;

	bool bFixCrossHairR = false;
	bool bFixCrossHairL = false;

	//이동방향 변수
	FVector moveDir;
	//회전방향 변수
	FRotator deltaRot;
		
	//케이블 컴포넌트 Visibility 제어변수 
	UPROPERTY(BlueprintReadOnly)
	bool bIsGrapplingR = false;
	UPROPERTY(BlueprintReadOnly)
	bool bIsGrapplingL = false;
	UPROPERTY(BlueprintReadOnly)
	bool bIsGrappling = false;


	//케이블 꽂히는 위치변수
	UPROPERTY(BlueprintReadOnly)
	FVector grabPointR;
	UPROPERTY(BlueprintReadOnly)
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
