#pragma once
#include "CoreMinimal.h"
#include "TWDHealingBuffParams.generated.h"

USTRUCT(BlueprintType)
struct FTWDHealingBuffParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Amount;
    
    TWD_API FTWDHealingBuffParams();
};

