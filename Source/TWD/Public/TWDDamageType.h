#pragma once
#include "CoreMinimal.h"
#include "SDIDamageType.h"
#include "EHitReactType.h"
#include "RVector.h"
#include "TWDPlayerControllerTimeDilation.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EWoundType.h"
#include "TWDDamageType.generated.h"

class UTWDDamageType;

UCLASS(Blueprintable, MinimalAPI)
class UTWDDamageType : public USDIDamageType {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDeathBlowWounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRVector WoundDiameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinWoundSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDentForSmallBodyParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SplashRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SplashSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRVector DeathBlowWoundDiameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathBlowDistanceForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathBlowMinWoundSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DeathBlowSplashRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleHandStruggleDamageFraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PushBackDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PushBackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PushBackThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHitReactType HitReactType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCauseHitReactionOnZeroDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWoundType WoundType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWoundType DeathBlowWoundType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathblowDamageImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathblowDamageImpulseNonVRScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDPlayerControllerTimeDilation DamageTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDPlayerControllerTimeDilation DeathBlowTimeDilation;
    
public:
    UTWDDamageType();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWoundType GetWoundType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRVector GetWoundDiameter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseDeathBlowWounds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTWDDamageType* GetTWDDamageType(UClass* DamageTypeClass, bool& bValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSplashSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetSplashRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinWoundSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxDentForSmallBodyParts() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGrappleHandStruggleDamageFraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceForward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWoundType GetDeathBlowWoundType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRVector GetDeathBlowWoundDiameter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetDeathBlowSplashRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDeathBlowMinWoundSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDeathBlowDistanceForward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDeathblowDamageImpulse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CausesHitReactionOnZeroDamage() const;
    
};

