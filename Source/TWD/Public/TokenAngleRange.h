#pragma once
#include "CoreMinimal.h"
#include "TokenAngleRange.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FTokenAngleRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxAngle;
    
    FTokenAngleRange();
};

