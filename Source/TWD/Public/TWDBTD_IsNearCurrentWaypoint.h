#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TWDBTD_Base.h"
#include "TWDBTD_IsNearCurrentWaypoint.generated.h"

UCLASS(BlueprintType)
class TWD_API UTWDBTD_IsNearCurrentWaypoint : public UTWDBTD_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlackboardKeySelector ShouldFleeKey;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxDistance;
    
public:
    UTWDBTD_IsNearCurrentWaypoint();
};

