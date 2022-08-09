#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TWDHighScoreEntry.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FTWDHighScoreEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 Score;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<FName, int32> ScoreDetails;
    
    UPROPERTY(BlueprintReadWrite)
    FDateTime Timestamp;
    
    UPROPERTY(BlueprintReadWrite)
    FName MapName;
    
    UPROPERTY(BlueprintReadWrite)
    FText Grade;
    
    FTWDHighScoreEntry();
};

