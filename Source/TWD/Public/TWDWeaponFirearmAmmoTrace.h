#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "SDIWeaponFirearmAmmoTrace.h"
#include "SDITuningAttribute_TWDWeaponFirearmAmmoTrace.h"
#include "TWDWeaponPelletCharacterHit.h"
#include "TWDWeaponDismemberChance.h"
#include "TWDWeaponFirearmAmmoTrace.generated.h"

class ATWDCharacter;
class ATWDWeaponFirearmAmmoTrace;
class UAkAudioEvent;

UCLASS(Blueprintable)
class ATWDWeaponFirearmAmmoTrace : public ASDIWeaponFirearmAmmoTrace {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactNoiseRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve DurabilityAdditionalSpreadDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve HeadshotPenetrationChanceDistanceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<ATWDCharacter>, FRuntimeFloatCurve> HeadshotPenetrationChanceDistanceCurveOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve PassThroughChanceDistanceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<ATWDCharacter>, FRuntimeFloatCurve> PassThroughChanceDistanceCurveOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PassThroughMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDWeaponDismemberChance DismemberChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<ATWDCharacter>, FTWDWeaponDismemberChance> DismemberChanceOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ImpactAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ImpactAkEventSurfaceSwitchGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanPenetrateHelmet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAssistMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAssistRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAssistAngleDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAimAssistUseSpreadTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AimAssistAsyncTracePlatformLevel;
    
    UPROPERTY(EditAnywhere, Transient)
    TMap<TWeakObjectPtr<ATWDCharacter>, FTWDWeaponPelletCharacterHit> PelletCharacterHits;
    
public:
    ATWDWeaponFirearmAmmoTrace(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    ATWDWeaponFirearmAmmoTrace* TuneTWDWeaponFirearmAmmoTrace(FSDITuningAttribute_TWDWeaponFirearmAmmoTrace Attr, float PreModifier, float Add, float PostModifier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetImpactNoiseRadius() const;
    
};

