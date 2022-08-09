#pragma once
#include "CoreMinimal.h"
#include "TWDEstimatedLevelLoadingTime.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FTWDEstimatedLevelLoadingTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Map;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    FTWDEstimatedLevelLoadingTime();
};

