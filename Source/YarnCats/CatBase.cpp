// Fill out your copyright notice in the Description page of Project Settings.


#include "CatBase.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "TimerManager.h"
#include "YarnBase.h"


// Sets default values
ACatBase::ACatBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	//CameraComp->SetupAttachment(GetRootComponent());
	//CameraComp->bUsePawnControlRotation = true;


//	GetMesh()->SetOnlyOwnerSee(false);
//	GetMesh()->SetOnlyOwnerSee(true);


}

// Called when the game starts or when spawned
void ACatBase::BeginPlay()
{
	Super::BeginPlay();

	DefaultWalkSpeed = GetCharacterMovement()->MaxWalkSpeed;
	
}

// Called every frame
void ACatBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACatBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &ACatBase::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &ACatBase::MoveRight);
	PlayerInputComponent->BindAxis(TEXT("MoveUp"), this, &ACatBase::MoveUp);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &ACatBase::Turn);
	PlayerInputComponent->BindAxis(TEXT("TurnRate"), this, &ACatBase::TurnRate);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &ACatBase::LookUp);
	PlayerInputComponent->BindAxis(TEXT("LookUpRate"), this, &ACatBase::LookUpRate);

	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &ACatBase::StartJump);
	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Released, this, &ACatBase::StopJump);
	PlayerInputComponent->BindAction(TEXT("Select"), IE_Pressed, this, &ACatBase::SelectYarn);
	PlayerInputComponent->BindAction(TEXT("Select"), IE_Released, this, &ACatBase::ReleaseSelected);
	PlayerInputComponent->BindAction(TEXT("PushForward"), IE_Pressed, this, &ACatBase::StartPushForward);
	PlayerInputComponent->BindAction(TEXT("PushForward"), IE_Released, this, &ACatBase::FinishPushForward);
	PlayerInputComponent->BindAction(TEXT("PushRight"), IE_Pressed, this, &ACatBase::StartPushRight);
	PlayerInputComponent->BindAction(TEXT("PushRight"), IE_Released, this, &ACatBase::FinishPushRight);
	PlayerInputComponent->BindAction(TEXT("PushLeft"), IE_Pressed, this, &ACatBase::StartPushLeft);
	PlayerInputComponent->BindAction(TEXT("PushLeft"), IE_Released, this, &ACatBase::FinishPushLeft);



}

void ACatBase::MoveForward(float Value)
{
	if (Value != 0.0)
	{
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void ACatBase::MoveRight(float Value)
{
	if (Value != 0.0)
	{
		FVector RightVector = UKismetMathLibrary::GetRightVector(FRotator(0.0f, 0.0f, GetCapsuleComponent()->GetComponentRotation().Yaw));

		AddMovementInput(GetActorRightVector(), Value);
	}
}

void ACatBase::MoveUp(float Value)
{
	if (Value != 0.0)
	{
		AddMovementInput(GetActorUpVector(), Value);
	}

}

void ACatBase::Turn(float Value)
{
	AddControllerYawInput(Value);

}

void ACatBase::TurnRate(float Value)
{
	AddControllerYawInput(Value * BaseTurnRate * GetWorld()->GetDeltaSeconds());

}

void ACatBase::LookUp(float Value)
{
	AddControllerPitchInput(Value);

}

void ACatBase::LookUpRate(float Value)
{
	AddControllerPitchInput(Value * BaseLookAtRate * GetWorld()->GetDeltaSeconds());

}

void ACatBase::StartJump()
{
	IsJumping = true;
	Jump();
}

void ACatBase::StopJump()
{
	StopJumping();
	IsJumping = false;
	
}

void ACatBase::StopJumpAnimation()
{
	IsJumping = false;
}

void ACatBase::SelectYarn()
{
	FHitResult OutHit;
	FVector Start = GetActorLocation();
	FVector End = (GetActorForwardVector() * 200.f) + Start;
	FCollisionQueryParams CollisionParams;


	if (GetWorld()->LineTraceSingleByChannel(OutHit, Start, End, ECC_Visibility, CollisionParams))
	{
		if (OutHit.bBlockingHit)
		{
			SelectedYarn = Cast<AYarnBase>(OutHit.GetActor());
			if (SelectedYarn)
			{
				FRotator CurrentRotation = GetActorRotation();
				FRotator FaceTargetRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), SelectedYarn->GetRootComponent()->GetComponentLocation());
				AddControllerYawInput((FaceTargetRotation.Yaw - CurrentRotation.Yaw)/2);
				GetCharacterMovement()->Deactivate();
				SelectedYarn->StopRolling();
			}
		}
	}
}


void ACatBase::ReleaseSelected_Implementation()
{
	if (SelectedYarn)
	{
		SelectedYarn = NULL;
		GetCharacterMovement()->Activate();
	}
}


void ACatBase::IncreasePushForce()
{
	PushForce += DeltaPushForce;
	if (PushForce > MaxPushForce)
	{
		PushForce = MaxPushForce;
	}
}


void ACatBase::StartPushForward_Implementation()
{
	if (SelectedYarn && LoadingForce == false)
	{
		ForceHandle = GetWorldTimerManager().GenerateHandle(0);
		GetWorldTimerManager().SetTimer(ForceHandle, this, &ACatBase::IncreasePushForce, 0.1f, true);
		LoadingForce = true;
	}
}



void ACatBase::FinishPushForward()
{
	GetWorldTimerManager().ClearTimer(ForceHandle);
	LoadingForce = false;
	if (SelectedYarn)
	{
		FVector PushDirection = GetActorForwardVector();
		SelectedYarn->Roll(PushDirection, PushForce);
		ReleaseSelected();
		PushDirectionMode = "Forward";
		Push();
	}

	PushForce = 0;
}


void ACatBase::StartPushRight_Implementation()
{
	if (SelectedYarn && LoadingForce == false)
	{
		ForceHandle = GetWorldTimerManager().GenerateHandle(0);
		GetWorldTimerManager().SetTimer(ForceHandle, this, &ACatBase::IncreasePushForce, 0.1f, true);
		LoadingForce = true;
	}
}


void ACatBase::FinishPushRight()
{
	GetWorldTimerManager().ClearTimer(ForceHandle);
	LoadingForce = false;
	if (SelectedYarn)
	{
		FVector PushDirection = GetActorRightVector();
		SelectedYarn->Roll(PushDirection, PushForce);
		ReleaseSelected();
		PushDirectionMode = "Right";
		Push();
	}

	PushForce = 0;
}

void ACatBase::StartPushLeft_Implementation()
{
	if (SelectedYarn && LoadingForce == false)
	{
		ForceHandle = GetWorldTimerManager().GenerateHandle(0);
		GetWorldTimerManager().SetTimer(ForceHandle, this, &ACatBase::IncreasePushForce, 0.1f, true);
		LoadingForce = true;
	}
}


void ACatBase::FinishPushLeft()
{
	GetWorldTimerManager().ClearTimer(ForceHandle);
	LoadingForce = false;
	if (SelectedYarn)
	{
		FVector PushDirection = - GetActorRightVector();
		SelectedYarn->Roll(PushDirection, PushForce);
		ReleaseSelected();
		PushDirectionMode = "Left";
		Push();
	}

	PushForce = 0;
}


