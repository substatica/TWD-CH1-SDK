#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "TWDPerceptionShadowVolume.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, MinimalAPI)
class ATWDPerceptionShadowVolume : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BasePerceptionMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BasePerceptionAdditive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PerceptionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCoverageAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CoverageAttenuationCurve;
    
public:
    ATWDPerceptionShadowVolume();
};

