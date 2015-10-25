// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "CanvasUE1.h"
#include "CanvasUE1GameMode.h"
#include "CanvasUE1Character.h"

ACanvasUE1GameMode::ACanvasUE1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
