// Copyright Epic Games, Inc. All Rights Reserved.

#include "NIXUE002GameMode.h"
#include "NIXUE002Character.h"
#include "UObject/ConstructorHelpers.h"

ANIXUE002GameMode::ANIXUE002GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
