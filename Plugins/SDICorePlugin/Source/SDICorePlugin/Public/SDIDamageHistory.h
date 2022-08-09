#pragma once
#include "CoreMinimal.h"
#include "SDIDamageHistoryEntry.h"
#include "SDIDamageHistory.generated.h"

USTRUCT()
struct SDICOREPLUGIN_API FSDIDamageHistory {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float MaxDuration;
    
    UPROPERTY(Transient)
    TArray<FSDIDamageHistoryEntry> HistoryArray;
    
    UPROPERTY(Transient)
    bool bInflictedHistory;
    
public:
    FSDIDamageHistory();
};

