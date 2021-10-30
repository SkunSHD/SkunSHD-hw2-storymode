// Copyright Epic Games, Inc. All Rights Reserved.

#include "HW2GameMode.h"
#include "HW2HUD.h"
#include "HW2Character.h"
#include "UObject/ConstructorHelpers.h"

AHW2GameMode::AHW2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AHW2HUD::StaticClass();
}
