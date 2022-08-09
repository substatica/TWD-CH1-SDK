#pragma once
#include "CoreMinimal.h"
#include "SpawnTagArray.generated.h"

class ASDIActorSpawner;

USTRUCT(BlueprintType)
struct FSpawnTagArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASDIActorSpawner*> Spawners;
    
    TWD_API FSpawnTagArray();
};

