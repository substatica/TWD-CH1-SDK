#pragma once
#include "CoreMinimal.h"
#include "TWDBTD_Base.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TWDBTD_IsNearCurrentWaypoint.generated.h"

UCLASS(Blueprintable)
class TWD_API UTWDBTD_IsNearCurrentWaypoint : public UTWDBTD_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ShouldFleeKey;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
public:
    UTWDBTD_IsNearCurrentWaypoint();
};

