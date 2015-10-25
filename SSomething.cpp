// Fill out your copyright notice in the Description page of Project Settings.

#include "CanvasUE1.h"
#include "SSomething.h"


// Sets default values
ASSomething::ASSomething()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASSomething::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASSomething::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

