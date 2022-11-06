// Fill out your copyright notice in the Description page of Project Settings.
#include "RadioBase.h"

#include "Components/AudioComponent.h"

// Sets default values
ARadioBase::ARadioBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	SceneComponent->SetupAttachment(RootComponent);

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(SceneComponent);

	Audio = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio"));
	Audio->SetupAttachment(SceneComponent);
}

// Called when the game starts or when spawned
void ARadioBase::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Hello from base class"));
}


void ARadioBase::PauseAudio()
{
	Audio->SetPaused(true);
}


// Called every frame
void ARadioBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

