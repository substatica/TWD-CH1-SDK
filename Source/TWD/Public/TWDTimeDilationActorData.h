#pragma once
#include "CoreMinimal.h"
#include "TWDTimeDilationActorData.generated.h"

USTRUCT(BlueprintType)
struct FTWDTimeDilationActorData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float TimeDilationFactor;
    
    TWD_API FTWDTimeDilationActorData();
};

