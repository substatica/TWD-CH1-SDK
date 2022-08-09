#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DistanceLine.generated.h"

class UEnvQueryContext;

USTRUCT(BlueprintType)
struct TWD_API FDistanceLine {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> LineFrom;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> LineTo;
    
    FDistanceLine();
};

