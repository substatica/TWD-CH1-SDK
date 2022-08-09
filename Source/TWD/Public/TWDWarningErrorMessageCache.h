#pragma once
#include "CoreMinimal.h"
#include "TWDWarningErrorMessageCache.generated.h"

USTRUCT(BlueprintType)
struct FTWDWarningErrorMessageCache {
    GENERATED_BODY()
public:
    UPROPERTY()
    float ExpireTime;
    
    UPROPERTY()
    FString MessageString;
    
    UPROPERTY()
    int32 NumDuplicates;
    
    TWD_API FTWDWarningErrorMessageCache();
};

