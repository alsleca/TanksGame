// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

class ATankPawn;

/**
 * 
 */
UCLASS()
class TANKSGAME_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	ATankPawn* TankPawn;

	virtual void BeginPlay() override;
	void MoveForward(float AxisValue);

public:
	ATankPlayerController();
	virtual void SetupInputComponent() override;
};
