#pragma once
#include "CoreMinimal.h"
#include "ETWDWaypointTriggerEvent.h"
#include "ETWDWaypointFilterType.h"
#include "TWDWaypointTriggerEventData.generated.h"

class ATWDWaypoint;
class AActor;

USTRUCT(BlueprintType)
struct FTWDWaypointTriggerEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ATWDWaypoint* Waypoint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<AActor*> ActorFilter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETWDWaypointFilterType FilterType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETWDWaypointTriggerEvent Event;
    
    TWD_API FTWDWaypointTriggerEventData();
};

