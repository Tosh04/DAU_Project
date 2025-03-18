// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter_GameMode.h"
#include "GameFramework/Actor.h"

AMyCharacter_GameMode::AMyCharacter_GameMode() {
	PrimaryActorTick.bCanEverTick = true;
}

void AMyCharacter_GameMode::BeginPlay() {
	Super::BeginPlay();

	FTimerHandle UnuseHandle;
	GetWorldTimerManager().SetTimer(
		UnuseHandle, this, &AMyCharacter_GameMode::SpawnWaterRecharge, FMath::RandRange(2,5), true);
}

void AMyCharacter_GameMode::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
}

void AMyCharacter_GameMode::SpawnWaterRecharge()
{
	float RandX = FMath::RandRange(Spawn_X_Min, Spawn_X_Max);
	float RandY = FMath::RandRange(Spawn_Y_Min, Spawn_Y_Max);

	FVector SpawnPosition = FVector(RandX, RandY, Spawn_Z);
	FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);

	GetWorld()->SpawnActor(WaterRecharge, &SpawnPosition, &SpawnRotation);

}

