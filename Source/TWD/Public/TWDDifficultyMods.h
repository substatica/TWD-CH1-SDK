#pragma once
#include "CoreMinimal.h"
#include "RFloat.h"
#include "TWDDifficultyMods.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FTWDDifficultyMods {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DayPercentageAdded;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRFloat DayPercentageRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HealthLossMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StaminaLossMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BellsTimerAddedSeconds;
    
    FTWDDifficultyMods();
};

