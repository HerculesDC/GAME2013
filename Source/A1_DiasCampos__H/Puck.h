// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Puck.generated.h"

//class UMaterial;
UCLASS()
class A1_DIASCAMPOS__H_API APuck : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APuck();

protected:

	UPROPERTY(EditDefaultsOnly, Category = "Puck Appearance")
	UStaticMeshComponent* m_MeshComponent;

	UPROPERTY(EditDefaultsOnly, Category = "Puck Appearance")
	UMaterial* m_Material;

	UPROPERTY(EditDefaultsOnly, Category = "Puck Appearance")
	UPhysicalMaterial* m_PhysicsMaterial;
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
