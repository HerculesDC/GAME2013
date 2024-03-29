// Fill out your copyright notice in the Description page of Project Settings.


#include "Paddle.h"
#include "Materials/Material.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
APaddle::APaddle()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp.Add(CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Bod Lower")));
	MeshComp.Add(CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Bod Upper")));

	MyMat = CreateDefaultSubobject<UMaterial>(TEXT("BodMat"));
}

// Called when the game starts or when spawned
void APaddle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APaddle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APaddle::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

