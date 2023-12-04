// Copyright Epic Games, Inc. All Rights Reserved.

#include "PGCPPGameMode.h"
#include "PGCPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

APGCPPGameMode::APGCPPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
