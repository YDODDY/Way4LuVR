
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

	UPROPERTY(EditDefaultsOnly , Category = "VR")
	class UInputMappingContext* imc_VRPlayer;

	UPROPERTY(EditDefaultsOnly , Category = "VR")
	class UInputAction* ia_move;
	
	UPROPERTY(EditDefaultsOnly , Category = "VR")
	class UInputAction* ia_jump;

	UPROPERTY(EditDefaultsOnly , Category = "VR")
	class UInputAction* ia_shooting;





	FVector moveDir;

	UFUNCTION()
	void OnIAMove(const FInputActionValue& value);

	UFUNCTION()
	void OnIAJump(const FInputActionValue& value);

	UFUNCTION()
	void OnIAShooting(const FInputActionValue& value);
};
