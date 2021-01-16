// Copyright Epic Games, Inc. All Rights Reserved.

#include "DeepTankGameMode.h"
#include "DeepTankCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADeepTankGameMode::ADeepTankGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
