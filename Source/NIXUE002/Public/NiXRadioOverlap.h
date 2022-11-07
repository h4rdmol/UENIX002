// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RadioBase.h"
#include "Components/BoxComponent.h"
#include "NiXRadioOverlap.generated.h"

/**
 * 
 */
UCLASS()
class NIXUE002_API ANiXRadioOverlap : public ARadioBase
{
	GENERATED_BODY()
public:
	ANiXRadioOverlap();

	UFUNCTION()
void OnOverlapBegin(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int otherBodyIndex, bool fromSweep, const FHitResult& sweepResult);

	UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int otherBodyIndex);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	 void PauseAudio();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBoxComponent* BoxCollision;
};
