#pragma once
#include "CoreMinimal.h"
#include "TWDWarningErrorMessageCache.generated.h"

USTRUCT(BlueprintType)
struct FTWDWarningErrorMessageCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpireTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MessageString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumDuplicates;
    
    TWD_API FTWDWarningErrorMessageCache();
};

