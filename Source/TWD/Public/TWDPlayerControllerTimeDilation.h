#pragma once
#include "CoreMinimal.h"
#include "AlphaBlend.h"
#include "Engine/EngineTypes.h"
#include "TWDPlayerControllerTimeDilation.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FTWDPlayerControllerTimeDilation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float Duration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* TimeDilationOverrideCurve;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EAlphaBlendOption BlendIn;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UCurveFloat* BlendInCurve;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float BlendInDuration;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EAlphaBlendOption BlendOut;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UCurveFloat* BlendOutCurve;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float BlendOutDuration;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float Delay;
    
    UPROPERTY(Transient)
    FTimerHandle DelayTimerHandle;
    
    TWD_API FTWDPlayerControllerTimeDilation();
};

