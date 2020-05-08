// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "FPS_ExperimentalGameMode.h"
#include "FPS_ExperimentalHUD.h"
#include "Player/FirstPersonCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPS_ExperimentalGameMode::AFPS_ExperimentalGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Dynamic/Character/Behaviour/BP_Character"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPS_ExperimentalHUD::StaticClass();
}
