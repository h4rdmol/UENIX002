// Fill out your copyright notice in the Description page of Project Settings.


#include "NiXRadioOverlap.h"
#include "Components/AudioComponent.h"

ANiXRadioOverlap::ANiXRadioOverlap ()
{
	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	BoxCollision->SetupAttachment(this->Mesh);
	BoxCollision->SetHiddenInGame(true);
	BoxCollision->SetBoxExtent(FVector(200.f, 200.f, 100.f));
	BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &ANiXRadioOverlap::OnOverlapBegin);
	BoxCollision->OnComponentEndOverlap.AddDynamic(this, &ANiXRadioOverlap::OnOverlapEnd);
}

void ANiXRadioOverlap::OnOverlapBegin(UPrimitiveComponent* overlappedComponent, AActor* otherActor,
	UPrimitiveComponent* otherComp, int otherBodyIndex, bool fromSweep, const FHitResult& sweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("OverLapBegin"));
	if (otherActor == GetWorld()->GetFirstPlayerController()->GetPawn())
	{
			this->Audio->SetPaused(false);
	}
}

void ANiXRadioOverlap::OnOverlapEnd(UPrimitiveComponent* overlappedComponent, AActor* otherActor,
	UPrimitiveComponent* otherComp, int otherBodyIndex)
{
	UE_LOG(LogTemp, Warning, TEXT("OverLapEnd"));
	if (otherActor == GetWorld()->GetFirstPlayerController()->GetPawn())
	{
			PauseAudio();
	}
}

void ANiXRadioOverlap::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Hello from RadioOverlap class"));
	Audio->SetPaused(true);
}

void ANiXRadioOverlap::PauseAudio()
{
	Super::PauseAudio();
	Audio->VolumeMultiplier = 0.f;
}
