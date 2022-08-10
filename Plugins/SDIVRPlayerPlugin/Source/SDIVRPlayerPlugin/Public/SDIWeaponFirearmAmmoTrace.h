#pragma once
#include "CoreMinimal.h"
#include "SDIWeaponFirearmAmmo.h"
#include "Engine/EngineTypes.h"
#include "SDIDamageData.h"
#include "Curves/CurveFloat.h"
#include "SDIWeaponFirearmAmmoTracePendingPelletHitFX.h"
#include "SDIWeaponFirearmAmmoTraceShotInfo.h"
#include "Engine/EngineTypes.h"
#include "SDITuningAttribute_SDIWeaponFirearmAmmoTrace.h"
#include "SDIWeaponFirearmFiredPelletInfo.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "SDIWeaponFirearmFiredShotInfo.h"
#include "SDIWeaponFirearmAmmoTracePelletHit.h"
#include "SDIWeaponFirearmAmmoTraceNearMissData.h"
#include "SDIWeaponFirearmAmmoTrace.generated.h"

class ASDIWeaponFirearmAmmoTrace;
class AActor;

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API ASDIWeaponFirearmAmmoTrace : public ASDIWeaponFirearmAmmo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIDamageData Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceImpactVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceImpactMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitReactImpulseMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearMissAlertRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AsyncTracePlatformLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PassThroughAsyncTracePlatformLevel;
    
    UPROPERTY(EditAnywhere)

    TEnumAsByte<ECollisionChannel> TraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve DirectDamageDistanceMultiplierCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve RadialDamageDistanceMultiplierCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSDIWeaponFirearmAmmoTraceShotInfo> AsyncShotInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSDIWeaponFirearmAmmoTracePendingPelletHitFX> PendingPelletHitFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle HandlePelletHitFXTimerHandle;
    
public:
    ASDIWeaponFirearmAmmoTrace();
    UFUNCTION(BlueprintCallable)
    ASDIWeaponFirearmAmmoTrace* TuneSDIWeaponFirearmAmmoTrace(FSDITuningAttribute_SDIWeaponFirearmAmmoTrace Attr, float PreModifier, float Add, float PostModifier);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnTracerFX(const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform, const FTransform& SpreadShotTransform, const FVector& EndLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SpawnImpactFX(const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform, const FTransform& SpreadShotTransform, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerHandleHitsAndNearMisses(const FSDIWeaponFirearmAmmoTraceShotInfo& TraceShotInfo);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastHandleHits(int32 ShotID, const FSDIWeaponFirearmFiredShotInfo& FiredShotInfo, const FTransform& ShotTransform, const TArray<FSDIWeaponFirearmAmmoTracePelletHit>& PelletHits);
    
    UFUNCTION(BlueprintCallable)
    void HandlePelletHitFXTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleNearMisses(const TArray<FSDIWeaponFirearmAmmoTraceNearMissData>& NearMissData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleHit(int32 ShotID, const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform, const FTransform& SpreadShotTransform, const FHitResult& Hit, const TArray<AActor*>& InDamagedActors, TArray<AActor*>& OutDamagedActors);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetTraceRange(const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetTraceImpactVelocity(const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform, const FTransform& SpreadShotTransform, const FHitResult& Hit, const TArray<AActor*>& DamagedActors);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AActor*> GetTraceIgnoreActors(const FSDIWeaponFirearmFiredShotInfo& FiredShotInfo, const FTransform& ShotTransform);
    
//    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
//    TEnumAsByte<ECollisionChannel> GetTraceChannel(const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetDamageMultiplier(const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform, const FTransform& SpreadShotTransform, const FHitResult& Hit, const TArray<AActor*>& DamagedActors, float& OutDirectDamageMultiplier, float& OutRadialDamageMultiplier);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AllowTracePassThrough(int32 PassThroughCount, const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform, const FTransform& SpreadShotTransform, const FVector& TraceStart, const FVector& TraceEnd, const FHitResult& LastHit, const TArray<FHitResult>& AllHits) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AllowHitPassThrough(int32 PassThroughCount, const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform, const FTransform& SpreadShotTransform, const FHitResult& LastHit, int32 LastHitIndex, const TArray<FHitResult>& AllHits, const TArray<AActor*>& DamagedActors) const;
    
};

