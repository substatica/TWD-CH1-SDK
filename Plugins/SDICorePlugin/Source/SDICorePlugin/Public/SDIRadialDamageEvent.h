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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDICameraShakeSettings CameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIForceFeedbackSettings ForceFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIReplicatedMap_FName_Float DamageEffectiveness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamageID;
    
    FSDIRadialDamageEvent();
};

