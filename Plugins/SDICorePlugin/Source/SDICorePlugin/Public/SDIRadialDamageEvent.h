#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SDICameraShakeSettings.h"
#include "SDIForceFeedbackSettings.h"
#include "SDIReplicatedMap_FName_Float.h"
#include "SDIRadialDamageEvent.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIRadialDamageEvent : public FRadialDamageEvent {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSDICameraShakeSettings CameraShake;
    
    UPROPERTY()
    FSDIForceFeedbackSettings ForceFeedback;
    
    UPROPERTY()
    FSDIReplicatedMap_FName_Float DamageEffectiveness;
    
    UPROPERTY()
    int32 DamageID;
    
    FSDIRadialDamageEvent();
};

