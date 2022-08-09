#pragma once
#include "CoreMinimal.h"
#include "TWDHealingBuffParams.generated.h"

USTRUCT(BlueprintType)
struct FTWDHealingBuffParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Amount;
    
    TWD_API FTWDHealingBuffParams();
};

