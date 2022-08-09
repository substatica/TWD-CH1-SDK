#pragma once
#include "CoreMinimal.h"
#include "ETWDWaypointTriggerEvent.h"
#include "TWDWaypointEventHistoryActorSet.h"
#include "TWDWaypointEventHistoryEventMap.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FTWDWaypointEventHistoryEventMap {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<ETWDWaypointTriggerEvent, FTWDWaypointEventHistoryActorSet> Map;
    
    FTWDWaypointEventHistoryEventMap();
};

