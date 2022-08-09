#pragma once
#include "CoreMinimal.h"
#include "TWDArmDragSettings.generated.h"

USTRUCT(BlueprintType)
struct FTWDArmDragSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Limit;
    
    TWD_API FTWDArmDragSettings();
};

