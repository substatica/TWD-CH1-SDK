#pragma once
#include "CoreMinimal.h"
#include "SubtitleSplit.h"
#include "SubtitleEntry.generated.h"

USTRUCT()
struct FSubtitleEntry {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 Key;
    
    UPROPERTY(Transient)
    FText Name;
    
    UPROPERTY(Transient)
    FText Subtitle;
    
    UPROPERTY(Transient)
    TArray<FSubtitleSplit> Splits;
    
    UPROPERTY(Transient)
    float Time;
    
    UPROPERTY(Transient)
    float Duration;
    
    TWD_API FSubtitleEntry();
};

