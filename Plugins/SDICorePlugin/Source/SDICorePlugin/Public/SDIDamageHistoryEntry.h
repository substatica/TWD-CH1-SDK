#pragma once
#include "CoreMinimal.h"
#include "SDIReplicatedDamageData.h"
#include "SDIDamageHistoryEntry.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIDamageHistoryEntry {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> TheActor;
    
    UPROPERTY(Transient)
    TArray<FSDIReplicatedDamageData> Events;
    
    UPROPERTY(Transient)
    float LatestServerTimestamp;
    
    FSDIDamageHistoryEntry();
};

