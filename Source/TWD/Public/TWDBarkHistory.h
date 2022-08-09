#pragma once
#include "CoreMinimal.h"
#include "TWDResponse.h"
#include "TWDBarkHistory.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FTWDBarkHistory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTWDResponse Response;
    
    FTWDBarkHistory();
};

