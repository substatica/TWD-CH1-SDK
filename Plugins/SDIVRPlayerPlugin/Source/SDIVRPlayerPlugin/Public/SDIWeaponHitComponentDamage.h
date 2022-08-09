#pragma once
#include "CoreMinimal.h"
#include "SDIDamageData.h"
#include "ESDIAxis.h"
#include "RFloat.h"
#include "SDISurfaceSoundBoneFilter.h"
#include "SDICachedCollisionInfoShapeScaleOverride.h"
#include "SDIWeaponHitComponentDamage.generated.h"

class AActor;
class UHapticFeedbackEffect_Base;

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIWeaponHitComponentDamage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESDIAxis VelocityAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRFloat VelocityRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableTwoHandVelocityRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRFloat TwoHandVelocityRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinContinuousVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinContinuousVelocityTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bScaleDamageOnVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSDIDamageData DamageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TwoHandMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSDISurfaceSoundBoneFilter> DamageSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftClassPtr<AActor>> DamageSoundClasses;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSDICachedCollisionInfoShapeScaleOverride> DamageOverlapScaleOverrides;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UHapticFeedbackEffect_Base* DamageFeedback;
    
    FSDIWeaponHitComponentDamage();
};

