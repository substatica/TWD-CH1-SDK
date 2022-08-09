#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Camera/CameraTypes.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDICameraShakeSettings.generated.h"

class UMatineeCameraShake;

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICameraShakeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UMatineeCameraShake> ShakeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECameraShakePlaySpace PlaySpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator UserPlaySpaceRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Delay;
    
    UPROPERTY(Transient)
    FTimerHandle DelayTimerHandle;
    
    FSDICameraShakeSettings();
};

