#pragma once
#include "CoreMinimal.h"
#include "ESDIInteractRangeType.h"
#include "SDIAsyncLOSResults.h"
#include "SDIInteractAsyncLOSResults.generated.h"

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIInteractAsyncLOSResults {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TMap<ESDIInteractRangeType, FSDIAsyncLOSResults> AsyncLOSResults;
    
public:
    FSDIInteractAsyncLOSResults();
};

