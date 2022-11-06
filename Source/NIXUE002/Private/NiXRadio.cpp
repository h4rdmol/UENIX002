// Fill out your copyright notice in the Description page of Project Settings.


#include "NiXRadio.h"
#include "Components/AudioComponent.h"

ANiXRadio::ANiXRadio()
{
	
}

// Called when the game starts or when spawned
void ANiXRadio::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Hello from radio class class"));
	if(Audio)
		this->Audio->Play();
}