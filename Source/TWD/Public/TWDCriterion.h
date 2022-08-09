#pragma once
#include "CoreMinimal.h"
#include "TWDCriterion.generated.h"

USTRUCT()
struct TWD_API FTWDCriterion {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Criterion;
    
    UPROPERTY(EditAnywhere)
    bool bRequired;
    
    UPROPERTY(EditAnywhere)
    int32 Weight;
    
    FTWDCriterion();
};

