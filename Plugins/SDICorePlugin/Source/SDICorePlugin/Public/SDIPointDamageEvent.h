#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SDIForceFeedbackSettings.h"
#include "UObject/NoExportTypes.h"
#include "SDICameraShakeSettings.h"
#include "SDIReplicatedMap_FName_Float.h"
#include "SDIPointDamageEvent.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIPointDamageEvent : public FPointDamageEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ImpactVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitReactImpulseMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitReactMinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDICameraShakeSettings CameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIForceFeedbackSettings ForceFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIReplicatedMap_FName_Float DamageEffectiveness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamageID;
    
    FSDIPointDamageEvent();
};

