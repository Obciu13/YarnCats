// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include <YarnCats/YarnBase.h>
#include "CatBase.generated.h"

	class UCameraComponent;

UCLASS()
class YARNCATS_API ACatBase : public ACharacter
{
	GENERATED_BODY()


public:
	// Sets default values for this character's properties
	ACatBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MoveForward(float Value);
	void MoveRight(float Value);
	void MoveUp(float Value);
	void Turn(float Value);
	void TurnRate(float Value);
	void LookUp(float Value);
	void LookUpRate(float Value);

	void StartJump();
	void StopJump();
	void StopJumpAnimation();

	void SelectYarn();

	UFUNCTION(BlueprintNativeEvent)
	void ReleaseSelected();

	void IncreasePushForce();


	UFUNCTION(BlueprintNativeEvent)
	void StartPushForward();
	void FinishPushForward();

	UFUNCTION(BlueprintNativeEvent)
	void StartPushRight();
	void FinishPushRight();

	UFUNCTION(BlueprintNativeEvent)
	void StartPushLeft();
	void FinishPushLeft();



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cat")
		float BaseTurnRate = 45.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cat")
		float BaseLookAtRate = 45.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cat")
		float MaxSprintSpeed = 1200.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cat")
		bool IsJumping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Yarn")
		AYarnBase* SelectedYarn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cats")
		float PushForce;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cats")
		float MaxPushForce;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cats")
		bool LoadingForce;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cats")
		FTimerHandle ForceHandle;

	

private:
	float DefaultWalkSpeed;
};
