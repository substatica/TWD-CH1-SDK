#pragma once
#include "CoreMinimal.h"
#include "SDIDamageHistoryEntry.h"
#include "SDIDamageHistory.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIDamageHistory {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSDIDamageHistoryEntry> HistoryArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInflictedHistory;
    
public:
    FSDIDamageHistory();
};

