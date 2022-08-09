#pragma once
#include "CoreMinimal.h"
#include "ETWDWaypointTriggerAction.h"
#include "ETWDWaypointTriggerOperation.h"
#include "TWDWaypointTriggerEventData.h"
#include "TWDWaypointTrigger.generated.h"

USTRUCT(BlueprintType)
struct FTWDWaypointTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETWDWaypointTriggerOperation TriggerOperation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FTWDWaypointTriggerEventData> Events;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETWDWaypointTriggerAction Action;
    
    TWD_API FTWDWaypointTrigger();
};

