#pragma once
#include "CoreMinimal.h"
#include "SDIComponentHistoryEntry.h"
#include "SDIComponentHistory.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIComponentHistory {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HistoryDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseRealTimeSeconds;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FSDIComponentHistoryEntry> History;
    
public:
    FSDIComponentHistory();
};

