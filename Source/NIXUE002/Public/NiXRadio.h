// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RadioBase.h"
#include "NiXRadio.generated.h"

/**
 * 
 */
UCLASS()
class NIXUE002_API ANiXRadio : public ARadioBase
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	ANiXRadio();

	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
};
