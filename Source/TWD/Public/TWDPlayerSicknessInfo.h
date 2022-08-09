#pragma once
#include "CoreMinimal.h"
#include "TWDPlayerSicknessInfo.generated.h"

USTRUCT(BlueprintType)
struct FTWDPlayerSicknessInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Sickness;
    
    UPROPERTY()
    float SicknessStaminaRecoveryRateMultiplier;
    
    TWD_API FTWDPlayerSicknessInfo();
};

