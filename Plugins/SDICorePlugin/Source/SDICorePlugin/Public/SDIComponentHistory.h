#pragma once
#include "CoreMinimal.h"
#include "SDIComponentHistoryEntry.h"
#include "SDIComponentHistory.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIComponentHistory {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HistoryDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRealTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSDIComponentHistoryEntry> History;
    
public:
    FSDIComponentHistory();
};

