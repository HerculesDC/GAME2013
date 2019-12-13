// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Paddle.generated.h"

class UStaticMeshComponent;
class UMaterial;
UCLASS()
class A1_DIASCAMPOS__H_API APaddle : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APaddle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Paddle Body")
	TArray<UStaticMeshComponent*> MeshComp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Paddle Body")
	UMaterial* MyMat;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
