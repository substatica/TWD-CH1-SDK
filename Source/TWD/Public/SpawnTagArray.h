#pragma once
#include "CoreMinimal.h"
#include "SpawnTagArray.generated.h"

class ASDIActorSpawner;

USTRUCT(BlueprintType)
struct FSpawnTagArray {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<ASDIActorSpawner*> Spawners;
    
    TWD_API FSpawnTagArray();
};

