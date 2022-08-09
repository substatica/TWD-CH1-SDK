#pragma once
#include "CoreMinimal.h"
#include "RFloatExp.h"
#include "RRotatorExp.h"
#include "AlphaBlend.h"
#include "SDICameraRecoilSettings.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICameraRecoilSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRRotatorExp Recoil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRFloatExp RecoilDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAlphaBlendOption RecoilBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* RecoilBlendCustomCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRFloatExp RecoverDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAlphaBlendOption RecoverBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* RecoverBlendCustomCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRRotatorExp RecoverPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* DurationScaleCurve;
    
    FSDICameraRecoilSettings();
};

