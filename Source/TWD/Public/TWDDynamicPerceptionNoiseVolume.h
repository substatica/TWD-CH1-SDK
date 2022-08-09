#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TWDDynamicPerceptionNoiseVolume.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, Deprecated, NotPlaceable)
class ADEPRECATED_TWDDynamicPerceptionNoiseVolume : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseNoiseRadiusMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseNoiseRadiusAdjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* NoiseRadiusCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFalloffIsRelative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FalloffStartRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FalloffExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FalloffCurve;
    
public:
    ADEPRECATED_TWDDynamicPerceptionNoiseVolume();
};

