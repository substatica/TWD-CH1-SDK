#pragma once
#include "CoreMinimal.h"
#include "ETWDWaypointFilterType.h"
#include "ETWDWaypointTriggerEvent.h"
#include "TWDWaypointTriggerEventData.generated.h"

class ATWDWaypoint;
class AActor;

USTRUCT(BlueprintType)
struct FTWDWaypointTriggerEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATWDWaypoint* Waypoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETWDWaypointFilterType FilterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETWDWaypointTriggerEvent Event;
    
    TWD_API FTWDWaypointTriggerEventData();
};

