// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BeastGigant.generated.h"

UENUM(BlueprintType)
enum class EBeastGigantState : uint8
{
	IDLE,
	HOWLING,
	MOVE,
	BACKJUMP,
	NORMALATTACK,
	STONEATTACK,
	GROGGY,
	DIE
};



UCLASS()
class TESTINGVR_API ABeastGigant : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABeastGigant();


	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UAnimMontage* roarMT;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	EBeastGigantState beastState = EBeastGigantState::IDLE;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UAnimMontage* AttackMT1;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UAnimMontage* AttackMT2;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UAnimMontage* AttackMT3;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UAnimMontage* AttackMT4;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UAnimMontage* AttackMT5;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UAnimMontage* AttackMT6;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UAnimMontage* AttackMT7;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UAnimMontage* AttackMT8;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UAnimMontage* AttackMT9;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UAnimMontage* AttackMT10;


	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UAnimMontage* StandStillMT;

	bool bIsGigantDie = false;

	UFUNCTION()
	void TakeDamage();

	UFUNCTION()
	void TakeCriticalDamagae();

	// ���� ������ �̺�Ʈ <��Ʈ>


	//����Ʈ �����
	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* LeftForeArmMesh;

	//����Ʈ ��
	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* LeftArmMesh;

	//����Ʈ ���� ��
	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* RightForeArmMesh;

	//����Ʈ ��
	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* RightArmMesh;

	//����Ʈ ����
	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* LeftLegMesh;

	//����Ʈ ����
	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* RightLegMesh;

	//����
	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* BodyMesh;

	//��
	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* NeckMesh;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UNiagaraComponent* NormalBlood;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UNiagaraComponent* CriticalBlood;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UAnimMontage* Die1;

	//�������� , ���������

	//����Ʈ �����
	UFUNCTION()
	void OnBeginOverLeftForeArm(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnEndOverlapLeftForeArm(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);


	//����Ʈ ��
	UFUNCTION()
	void OnBeginOverlapLeftArm(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnEndOverlapLeftArm(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);


	//����Ʈ �����
	UFUNCTION()
	void OnBeginOverlapRightForeArm(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnEndOverlapRightForeArm(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);


	//����Ʈ ��
	UFUNCTION()
	void OnBeginOverlapRightArm(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnEndOverlapRightArm(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	


	UFUNCTION()
	void OnBeginOverlapLeftLeg(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnEndOverlapLeftLeg(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);


	//����Ʈ ����
	UFUNCTION()
	void OnBeginOverlapRightLeg(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnEndOverlapRightLeg(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);



	//����
	UFUNCTION()
	void OnBeginOverlapBody(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnEndOverlapBody(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);


	//��
	UFUNCTION()
	void OnBeginOverlapNeck(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnEndOverlapNeck(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);



    UAnimSequence* JumpAttack;

	void SearchPlayer();

	void RestartAttackFlag();

	float DistanceToPlayer();

	void MoveToPlayer();

	void MoveToLocationJump();

	void ChangeNormalAttackJump();

	void SuperJump();

	void DieDestroy();

	void StandStill();

	

	//���ϴ��Լ�
	//void Throw(const FVector& throwDir, float throwPower);
	int32 currentHP = 0;

	int32 maxHP = 500;
	

	FVector TargetLocation;

	FVector NewLocation;

	float MovementSpeed = 2500.0f;

	float AcceptanceRadius;

	bool bIsAlreadyPlayRoar = false;

	bool bIsAttack = false;

	bool bIsAttackingMT = false;

	bool bIsAttackAnimationPlaying = false;

	bool bIsMovingNow = false;

	bool bIsAnimNotify = false;

	bool bIsFar = false;

	bool bIsSuperJumping = false;

	bool OnceJump = false;

	bool bIsOverlappingKnife = false;

	bool bIsOnceDieMT = false;

	bool bIsGigantDieStill = false;

	float currentTime = 0;

	class ABeastGigantAIController* aiCon;

	FVector PlayerLocation;

	//�÷��̾�� ���ΰ��� �Ÿ�����
	FVector DistanceAiToCharacter;

	APawn* PlayerPawn;

	FTimerHandle TimerHandle_DelayAttack;
	
	FTimerHandle TimerHandle_MoveToPlayer;

	FTimerHandle TimerHandle_ChangeNormalAttack;

	FTimerHandle TimerHandle_SuperJump;

	FTimerHandle TimerHandle_FK;

	FTimerHandle TimerHandle_Die1Destroy;

	FTimerHandle TimerHandle_StopAnimation;

	FTimerHandle TimerHandle_DieStill;


	void idle(float deltaSeconds);
	void howling(float deltaSeconds);
	void move();
	void backjump();
	void normalattack();
	void stoneattack();
	void groggy();
	void die();
};
