#pragma once
#include "CoreMinimal.h"
#include "TWDPlayerSicknessInfo.generated.h"

USTRUCT(BlueprintType)
struct FTWDPlayerSicknessInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Sickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SicknessStaminaRecoveryRateMultiplier;
    
    TWD_API FTWDPlayerSicknessInfo();
};

