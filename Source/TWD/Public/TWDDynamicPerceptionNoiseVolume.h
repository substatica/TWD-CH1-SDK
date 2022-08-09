#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TWDDynamicPerceptionNoiseVolume.generated.h"

class UCurveFloat;

UCLASS(Deprecated, NotPlaceable)
class ADEPRECATED_TWDDynamicPerceptionNoiseVolume : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float BaseNoiseRadiusMultiplier;
    
    UPROPERTY(EditAnywhere)
    float BaseNoiseRadiusAdjustment;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* NoiseRadiusCurve;
    
    UPROPERTY(EditAnywhere)
    bool bFalloffIsRelative;
    
    UPROPERTY(EditAnywhere)
    float FalloffStartRadius;
    
    UPROPERTY(EditAnywhere)
    float FalloffExp;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* FalloffCurve;
    
public:
    ADEPRECATED_TWDDynamicPerceptionNoiseVolume();
};

