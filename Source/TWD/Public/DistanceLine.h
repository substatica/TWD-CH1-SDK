#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DistanceLine.generated.h"

class UEnvQueryContext;

USTRUCT(BlueprintType)
struct TWD_API FDistanceLine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> LineFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> LineTo;
    
    FDistanceLine();
};

