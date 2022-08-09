#pragma once
#include "CoreMinimal.h"
#include "ETWDCharacterHitRegion.h"
#include "Curves/CurveFloat.h"
#include "TWDWeaponDismemberChance.generated.h"

USTRUCT(BlueprintType)
struct FTWDWeaponDismemberChance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<ETWDCharacterHitRegion, FRuntimeFloatCurve> DismemberChanceDistanceCurve;
    
    UPROPERTY(EditAnywhere)
    bool bRequireFullChance;
    
    TWD_API FTWDWeaponDismemberChance();
};

