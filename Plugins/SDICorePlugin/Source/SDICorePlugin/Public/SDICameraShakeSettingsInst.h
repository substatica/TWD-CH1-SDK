#pragma once
#include "CoreMinimal.h"
#include "SDICameraShakeSettings.h"
#include "SDICameraShakeSettingsInst.generated.h"

class UMatineeCameraShake;
class UCurveFloat;
class ASDICorePlayerCameraManager;

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICameraShakeSettingsInst : public FSDICameraShakeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ShakeScaleCurve;
    
protected:
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<UMatineeCameraShake> WeakShake;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ASDICorePlayerCameraManager> WeakCameraManager;
    
public:
    FSDICameraShakeSettingsInst();
};

