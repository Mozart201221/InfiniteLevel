// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FPS_ExperimentalGameMode.h"
#include "InfiniteTerrainlGameMode.generated.h"

/**
 * 
 */
UCLASS()
class FPS_EXPERIMENTAL_API AInfiniteTerrainlGameMode : public AFPS_ExperimentalGameMode
{
	GENERATED_BODY()
	
public:
	AInfiniteTerrainlGameMode();

	UFUNCTION(BlueprintCallable, Category = "Bounds Pool")
	void PopulateBoundVolumePool();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pool")
	class UActorPool* NavMeshBoundsVolumePool;

private:
	void AddToPool(class ANavMeshBoundsVolume* VolumeToAdd);
};
