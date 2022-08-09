#pragma once
#include "CoreMinimal.h"
#include "ESDIUtilityAIDifficulty.h"
#include "RFloatExp.h"
#include "SDICoreUtilityAIFRFloatExp.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICoreUtilityAIFRFloatExp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESDIUtilityAIDifficulty, FRFloatExp> RFloats;
    
    FSDICoreUtilityAIFRFloatExp();
};

