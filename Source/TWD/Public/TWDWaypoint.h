#pragma once
#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "TWDWaypoint.generated.h"

UCLASS()
class TWD_API ATWDWaypoint : public ATargetPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WaitDuration;
    
    ATWDWaypoint();
};

