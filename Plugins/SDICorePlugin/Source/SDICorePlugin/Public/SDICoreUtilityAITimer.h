#pragma once
#include "CoreMinimal.h"
#include "ESDIUtilityAIDifficulty.h"
#include "RFloatExp.h"
#include "SDICoreUtilityAITimer.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICoreUtilityAITimer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<ESDIUtilityAIDifficulty, FRFloatExp> Times;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Timer;
    
    FSDICoreUtilityAITimer();
};

