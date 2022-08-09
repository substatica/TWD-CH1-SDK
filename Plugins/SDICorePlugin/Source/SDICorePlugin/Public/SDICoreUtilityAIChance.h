#pragma once
#include "CoreMinimal.h"
#include "ESDIUtilityAIDifficulty.h"
#include "SDICoreUtilityAIChance.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICoreUtilityAIChance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<ESDIUtilityAIDifficulty, float> Chances;
    
    FSDICoreUtilityAIChance();
};

