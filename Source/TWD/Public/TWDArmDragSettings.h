#pragma once
#include "CoreMinimal.h"
#include "TWDArmDragSettings.generated.h"

USTRUCT(BlueprintType)
struct FTWDArmDragSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Limit;
    
    TWD_API FTWDArmDragSettings();
};

