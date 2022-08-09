#pragma once
#include "CoreMinimal.h"
#include "TWDPlayerStateInfo.generated.h"

USTRUCT(BlueprintType)
struct FTWDPlayerStateInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<float> FactionReputations;
    
    TWD_API FTWDPlayerStateInfo();
};

