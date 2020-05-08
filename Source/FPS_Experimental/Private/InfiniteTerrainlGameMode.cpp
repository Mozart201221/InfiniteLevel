// Fill out your copyright notice in the Description page of Project Settings.


#include "InfiniteTerrainlGameMode.h"
#include "GameFramework/Volume.h"
#include "NavMesh/NavMeshBoundsVolume.h "
#include "EngineUtils.h"
#include "ActorPool.h"

AInfiniteTerrainlGameMode::AInfiniteTerrainlGameMode()
{
	NavMeshBoundsVolumePool = CreateDefaultSubobject<UActorPool>(FName("Nav Mesh Bounds Volume Pool"));
}

void AInfiniteTerrainlGameMode::PopulateBoundVolumePool()
{
	auto VolumeIterator = TActorIterator<ANavMeshBoundsVolume>(GetWorld());
	while (VolumeIterator)
	{
		AddToPool(*VolumeIterator);
		++VolumeIterator;
	}
}

void AInfiniteTerrainlGameMode::AddToPool(ANavMeshBoundsVolume* VolumeToAdd)
{
	NavMeshBoundsVolumePool->Add(VolumeToAdd);
}