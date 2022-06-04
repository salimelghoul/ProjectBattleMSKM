// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectBattleMSKMGameMode.h"
#include "ProjectBattleMSKMCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectBattleMSKMGameMode::AProjectBattleMSKMGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
