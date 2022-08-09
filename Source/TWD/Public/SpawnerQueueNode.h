#pragma once
#include "CoreMinimal.h"
#include "SpawnerQueueNode.generated.h"

class ASDIActorSpawner;

USTRUCT(BlueprintType)
struct FSpawnerQueueNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASDIActorSpawner* Spawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnTag;
    
    TWD_API FSpawnerQueueNode();
};

