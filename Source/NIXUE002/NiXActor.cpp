// Fill out your copyright notice in the Description page of Project Settings.


#include "NiXActor.h"

// Sets default values
ANiXActor::ANiXActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	BoxCollision->SetupAttachment(Mesh);
}

// Called when the game starts or when spawned
void ANiXActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ANiXActor::ChangeMesh(AActor* overlappingActor, UStaticMesh* newMesh)
{
	if (overlappingActor == GetWorld()->GetFirstPlayerController()->GetPawn())
	{
		Mesh->SetStaticMesh(newMesh);
	}
}

// Called every frame
void ANiXActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

