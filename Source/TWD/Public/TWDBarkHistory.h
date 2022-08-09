#pragma once
#include "CoreMinimal.h"
#include "TWDResponse.h"
#include "TWDBarkHistory.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FTWDBarkHistory {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FTWDResponse Response;
    
    FTWDBarkHistory();
};

