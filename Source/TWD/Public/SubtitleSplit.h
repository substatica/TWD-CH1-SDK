#pragma once
#include "CoreMinimal.h"
#include "SubtitleSplit.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FSubtitleSplit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    FSubtitleSplit();
};

