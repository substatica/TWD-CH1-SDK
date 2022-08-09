#pragma once
#include "CoreMinimal.h"
#include "EAIBaseGroundMovementSpeedType.h"
#include "ETWDWaypointMovementMode.h"
#include "ECharacterStance.h"
#include "TWDWaypointTrigger.h"
#include "TWDWaypointSettings.generated.h"

class ATWDWaypoint;

USTRUCT(BlueprintType)
struct FTWDWaypointSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ATWDWaypoint* Waypoint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETWDWaypointMovementMode MovementMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ThreatRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAIBaseGroundMovementSpeedType BaseGroundMovementSpeedType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MovementSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ECharacterStance Stance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bClearHistoryOnDeparture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FTWDWaypointTrigger> Triggers;
    
    TWD_API FTWDWaypointSettings();
};

