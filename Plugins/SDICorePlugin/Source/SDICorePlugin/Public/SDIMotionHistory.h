#pragma once
#include "CoreMinimal.h"
#include "SDIMotionHistoryEntry.h"
#include "SDIMotionHistory.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIMotionHistory {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<FSDIMotionHistoryEntry> Entries;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxHistoryTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxHistoryEntries;
    
public:
    FSDIMotionHistory();
};

