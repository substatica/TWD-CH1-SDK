#pragma once
#include "CoreMinimal.h"
#include "TWDEstimatedLevelLoadingTime.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FTWDEstimatedLevelLoadingTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    FString Map;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    float Time;
    
    FTWDEstimatedLevelLoadingTime();
};

