#pragma once
#include "CoreMinimal.h"
#include "SpawnerQueueNode.generated.h"

class ASDIActorSpawner;

USTRUCT(BlueprintType)
struct FSpawnerQueueNode {
    GENERATED_BODY()
public:
    UPROPERTY()
    ASDIActorSpawner* Spawner;
    
    UPROPERTY()
    FName SpawnTag;
    
    TWD_API FSpawnerQueueNode();
};

