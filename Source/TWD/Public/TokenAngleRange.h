#pragma once
#include "CoreMinimal.h"
#include "TokenAngleRange.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FTokenAngleRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAngle;
    
    FTokenAngleRange();
};

