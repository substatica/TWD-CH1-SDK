#pragma once
#include "CoreMinimal.h"
#include "ESDIUtilityAIDifficulty.h"
#include "RFloatExp.h"
#include "SDICoreUtilityAIFRFloatExp.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICoreUtilityAIFRFloatExp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<ESDIUtilityAIDifficulty, FRFloatExp> RFloats;
    
    FSDICoreUtilityAIFRFloatExp();
};

