// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectFGameMode.h"
#include "ProjectFCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectFGameMode::AProjectFGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
