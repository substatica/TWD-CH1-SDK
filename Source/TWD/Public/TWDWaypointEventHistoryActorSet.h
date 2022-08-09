#pragma once
#include "CoreMinimal.h"
#include "TWDWaypointEventHistoryActorSet.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FTWDWaypointEventHistoryActorSet {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSet<FName> ActorNames;
    
    FTWDWaypointEventHistoryActorSet();
};

