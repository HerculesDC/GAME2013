// Fill out your copyright notice in the Description page of Project Settings.


#include "Puck.h"
#include "Materials/Material.h"
#include "Components/StaticMeshComponent.h"
#include "PhysicalMaterials/PhysicalMaterial.h"

// Sets default values
APuck::APuck()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Puck Body"));
	RootComponent = m_MeshComponent;

	m_MeshComponent->SetMaterial(0, m_Material);
}

// Called when the game starts or when spawned
void APuck::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APuck::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

