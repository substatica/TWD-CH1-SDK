#pragma once
#include "CoreMinimal.h"
#include "TWDWaypointEventHistoryActorSet.h"
#include "ETWDWaypointTriggerEvent.h"
#include "TWDWaypointEventHistoryEventMap.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FTWDWaypointEventHistoryEventMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETWDWaypointTriggerEvent, FTWDWaypointEventHistoryActorSet> Map;
    
    FTWDWaypointEventHistoryEventMap();
};

