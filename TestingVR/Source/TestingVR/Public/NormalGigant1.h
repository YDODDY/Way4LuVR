// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "NormalGigant1.generated.h"

UENUM(BlueprintType)
enum class ENormalGigan1State : uint8
{
	IDLE,
	PATROL,
	MOVE,
	ATTACK,
	DAMAGED,
	DIE
};

UCLASS()
class TESTINGVR_API ANormalGigant1 : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ANormalGigant1();

	float currentTime = 0;
	//아이들에서 패트롤할떄의 딜레이
	UPROPERTY(EditAnywhere, Category = "MySettings")
	float RandomPatrolDelay = 5.0f;

	//아이들로 변하는 딜레이
	UPROPERTY(EditAnywhere, Category = "MySettings")
	float ChangeidleDelay = 10.0f;

	float gigantMoveDelay;

	float AngleDegree = 90.0f;

	float AcosAngle;

	float Dots;

	float CopiedAngleDegree;

	float DistanceToPlayerTo;

	UPROPERTY(EditAnywhere, Category="MySettings")
	float GigantAttackDistance = 800.0f;


	float AngleToPlayer;

	FVector  DistanceToDistance;

	FVector randomPatrolPoint = FVector(1000);

	FVector RandomLocation;

	FVector PlayerLocation;

	FVector DistanceVector;

	//플레이어와 거인과의 거리벡터
	
	FVector DistanceAiToCharacter;

	FVector RightDirection;

	FVector LeftDirection;

	FVector Forward;

	FVector MyLocation;

	FRotator DirectionToPlayer;

	FRotator MyRotation;

	FTimerHandle TimerHandle_ChangeToPatrol;

	FTimerHandle TimerHandle_DelayAttack;

	FTimerHandle TimerHandle_Die1Destroy;

	FTimerHandle TimerHandle_Die2Destroy;

	FTimerHandle TimerHandle_Die3Destroy;

	FTimerHandle TimerHandle_Die4Destroy;

	class UNavigationSystemV1* navSys;

	class ANormalGigant1AIController* aiCon;

	class UNavigationSystemV1* NavArea;

	void OnAIMoveCompleted(struct FAIRequestID RequestID, const struct FPathFollowingResult& Result);

	void SearchPlayer();

	void MoveToPlayer();

	void TakeDamage();

	void TakeCriticalDamage();

	bool bIsPlayerInSight();

	void RestartAttackFlag();

	void DieDestroy();

	void IgnoreChannel();

	void CancelIgnoreChannel();



	//거인의 탐지범위
	float DistanceToPlayer();


	//virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	//virtual void NotifyActorEndOverlap(AActor* OtherActor) override;

	APawn* PlayerPawn;

	UWorld* currentWorld;

	int32 currentHP = 0;

	int32 maxHP = 50;


	//칼에 맞았는지를 나타내는 변수
	bool bIsOverlappingKnife = false;

	bool bIsPatrolBegin = false;

	bool bIsOncePatrol = false;

	bool bIsAttack = false;

	bool bIsAttackAnimationPlaying = false;

	bool bIsGigantDie = false;

	bool bIsPatrolAndIdle = false;

	bool bIsOnceDieMT = false;

	bool bIsSpawnBlood = false;

	bool bGigantDie = false;


	//목덜미 메시
	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* BoxMesh;

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* BodyMesh;

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* LeftArm;

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* RightArm;

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* LeftLeg;

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* RightLeg;

	UPROPERTY(EditAnywhere)
	class USphereComponent* RightHandCollision;

	UPROPERTY(EditAnywhere)
	class USphereComponent* LeftHandCollision;

	UPROPERTY(EditAnywhere)
	class UBoxComponent* RightArmCollision;

	UPROPERTY(EditAnywhere)
	class UBoxComponent* LeftArmCollision;


	// 시야 반경
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MySettings")
	float SightRadius = 1000.0f;

	// 시야각
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Mysettings")
	float SightAngle = 90.0f;



	float traceSpeed = 750.0f;

	
	float attackDistance = 170.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MySettings")
	float SightRange = 500.0f;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UAnimMontage* AttackMT1;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UAnimMontage* AttackMT2;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UAnimMontage* AttackMT3;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UAnimMontage* AttackMT4;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UAnimMontage* Die1;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UAnimMontage* Die2;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UAnimMontage* Die3;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UAnimMontage* Die4;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UNiagaraComponent* CriticalBlood;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UNiagaraComponent* NormalBlood;



	//목덜미 비긴오버랩 이벤트
	UFUNCTION()
	void OnBeginOverlapNeck(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnEndOverlapNeck(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);


	//몸통 비긴 오버랩 이벤트
	UFUNCTION()
	void OnBeginOverlapBody(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnEndOverlapBody(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	//왼손 오버랩 이벤트
	UFUNCTION()
	void OnBeginOverlapLeftArm(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnEndOverlapLeftArm(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	//오른손 오버랩 이벤트
	UFUNCTION()
	void OnBeginOverlapRightArm(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnEndOverlapRightArm(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);


	//왼발 오버랩 이벤트
	UFUNCTION()
	void OnBeginOverlapLeftLeg(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnEndOverlapLeftLeg(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);


	//오른발 오버랩 이벤트
	UFUNCTION()
	void OnBeginOverlapRightLeg(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


	UFUNCTION()
	void OnEndOverlapRightLeg(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);


	//공격범위 오버랩 이벤트
	UFUNCTION()
	void OnAttackBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	ENormalGigan1State gigant1State = ENormalGigan1State::IDLE;

	void idle(float deltaSeconds);
	void patrol(float deltaSeconds);
	void move();
	void attack();
	void damaged();
	void die();

};
