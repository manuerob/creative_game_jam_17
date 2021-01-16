// Copyright Epic Games, Inc. All Rights Reserved.

#include "FishPossessGameMode.h"
#include "FishPossessCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFishPossessGameMode::AFishPossessGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
