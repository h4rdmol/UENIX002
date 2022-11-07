// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RadioBase.generated.h"

UCLASS()
class NIXUE002_API ARadioBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARadioBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NiXTab")
	USceneComponent* SceneComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NiXTab")
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NiXTab")
	UAudioComponent* Audio;

	UFUNCTION(BlueprintNativeEvent)
	void PauseAudio();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

