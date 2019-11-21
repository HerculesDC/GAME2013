// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AHPlayerController.generated.h"

class ACameraActor;
/**
 * 
 */
UCLASS()
class A1_DIASCAMPOS__H_API AAHPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	AAHPlayerController();

//protected:

	UPROPERTY(EditDefaultsOnly, Category="Game View Camera")
	ACameraActor* gameCam;
};
