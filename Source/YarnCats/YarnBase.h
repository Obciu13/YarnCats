// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "YarnBase.generated.h"

class UStaticMeshComponent;

UCLASS()
class YARNCATS_API AYarnBase : public AActor
{
	GENERATED_BODY()

		UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Cat", meta = (AllowPrivateAccess = "true"))
		UStaticMeshComponent* Mesh1;

		UStaticMeshComponent* GetMeshComponent() { return Mesh1; }

public:	
	// Sets default values for this actor's properties
	AYarnBase();

	void Roll(FVector Direction, float Force);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
