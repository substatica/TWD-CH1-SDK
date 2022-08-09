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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETWDWaypointTriggerOperation TriggerOperation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTWDWaypointTriggerEventData> Events;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETWDWaypointTriggerAction Action;
    
    TWD_API FTWDWaypointTrigger();
};

