#pragma once
#include "CoreMinimal.h"
#include "AlphaBlend.h"
#include "SDICameraReplicatedRecoilSettings.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICameraReplicatedRecoilSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    float RecoilPitch;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float RecoilYaw;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float RecoilRoll;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float RecoilDuration;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    EAlphaBlendOption RecoilBlend;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UCurveFloat* RecoilBlendCustomCurve;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float RecoverDuration;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    EAlphaBlendOption RecoverBlend;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UCurveFloat* RecoverBlendCustomCurve;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float RecoverPercentagePitch;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float RecoverPercentageYaw;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float RecoverPercentageRoll;
    
    FSDICameraReplicatedRecoilSettings();
};

