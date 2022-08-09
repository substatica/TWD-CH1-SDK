#pragma once
#include "CoreMinimal.h"
#include "SDIReplicatedDamageData.h"
#include "SDIDamageHistoryEntry.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIDamageHistoryEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AActor> TheActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSDIReplicatedDamageData> Events;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LatestServerTimestamp;
    
    FSDIDamageHistoryEntry();
};

