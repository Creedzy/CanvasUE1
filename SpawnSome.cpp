// Fill out your copyright notice in the Description page of Project Settings.

#include "CanvasUE1.h"
#include "SpawnSome.h"


// Sets default values
ASpawnSome::ASpawnSome()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	xPos = 1050.f;
	yPos = 60.f;
	zPos = 110.f;
}

// Called when the game starts or when spawned
void ASpawnSome::BeginPlay()
{
	Super::BeginPlay();
	

	UWorld* const World = GetWorld();
	FActorSpawnParameters spawnParams;
	spawnParams.Owner = this;								// Who spawned this object
	spawnParams.Instigator = Instigator;					// Who Can do damage to this object

	// Create a vector based on our code
	for (int32 i = 0; i < 5; i++){
		FVector newVec;
		newVec.Set(xPos, yPos+i*10, zPos);
		if (World)
		{
			AActor* spawnActor = World->SpawnActor<ASSomething>(spawner, newVec, FRotator::ZeroRotator, spawnParams);
		}
	}
}

// Called every frame
void ASpawnSome::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

