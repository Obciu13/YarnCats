// Fill out your copyright notice in the Description page of Project Settings.


#include "YarnBase.h"

// Sets default values
AYarnBase::AYarnBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh1-> SetupAttachment(GetRootComponent());
}

// Called when the game starts or when spawned
void AYarnBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AYarnBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AYarnBase::Roll(FVector Direction, float Force)
{
	GetMeshComponent()->AddImpulseAtLocation(Direction * Force, GetActorLocation());
}

