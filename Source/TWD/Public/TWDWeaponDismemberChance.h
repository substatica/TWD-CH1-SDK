#pragma once
#include "CoreMinimal.h"
#include "ETWDCharacterHitRegion.h"
#include "Curves/CurveFloat.h"
#include "TWDWeaponDismemberChance.generated.h"

USTRUCT(BlueprintType)
struct FTWDWeaponDismemberChance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETWDCharacterHitRegion, FRuntimeFloatCurve> DismemberChanceDistanceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireFullChance;
    
    TWD_API FTWDWeaponDismemberChance();
};

