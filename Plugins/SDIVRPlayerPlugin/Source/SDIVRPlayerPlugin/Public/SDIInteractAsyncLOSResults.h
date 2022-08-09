#pragma once
#include "CoreMinimal.h"
#include "SDIAsyncLOSResults.h"
#include "ESDIInteractRangeType.h"
#include "SDIInteractAsyncLOSResults.generated.h"

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIInteractAsyncLOSResults {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ESDIInteractRangeType, FSDIAsyncLOSResults> AsyncLOSResults;
    
public:
    FSDIInteractAsyncLOSResults();
};

