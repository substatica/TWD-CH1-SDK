#pragma once
#include "CoreMinimal.h"
#include "ESDIUtilityAIDifficulty.h"
#include "SDICoreUtilityAIFloat.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICoreUtilityAIFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<ESDIUtilityAIDifficulty, float> Floats;
    
    FSDICoreUtilityAIFloat();
};

