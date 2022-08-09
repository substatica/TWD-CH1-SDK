#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SDIDamageType.h"
#include "EHitReactType.h"
#include "RVector.h"
#include "TWDPlayerControllerTimeDilation.h"
#include "UObject/NoExportTypes.h"
#include "EWoundType.h"
#include "TWDDamageType.generated.h"

class UTWDDamageType;

UCLASS(MinimalAPI)
class UTWDDamageType : public USDIDamageType {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bUseDeathBlowWounds;
    
    UPROPERTY(EditAnywhere)
    FRVector WoundDiameter;
    
    UPROPERTY(EditAnywhere)
    float DistanceForward;
    
    UPROPERTY(EditAnywhere)
    float MinWoundSize;
    
    UPROPERTY(EditAnywhere)
    float MaxDentForSmallBodyParts;
    
    UPROPERTY(EditAnywhere)
    FVector2D SplashRatio;
    
    UPROPERTY(EditAnywhere)
    FVector SplashSize;
    
    UPROPERTY(EditAnywhere)
    FRVector DeathBlowWoundDiameter;
    
    UPROPERTY(EditAnywhere)
    float DeathBlowDistanceForward;
    
    UPROPERTY(EditAnywhere)
    float DeathBlowMinWoundSize;
    
    UPROPERTY(EditAnywhere)
    FVector2D DeathBlowSplashRatio;
    
    UPROPERTY(EditAnywhere)
    float GrappleHandStruggleDamageFraction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PushBackDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PushBackTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PushBackThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EHitReactType HitReactType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCauseHitReactionOnZeroDamage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EWoundType WoundType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EWoundType DeathBlowWoundType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DeathblowDamageImpulse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DeathblowDamageImpulseNonVRScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTWDPlayerControllerTimeDilation DamageTimeDilation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTWDPlayerControllerTimeDilation DeathBlowTimeDilation;
    
public:
    UTWDDamageType();
    UFUNCTION(BlueprintPure)
    EWoundType GetWoundType() const;
    
    UFUNCTION(BlueprintPure)
    FRVector GetWoundDiameter() const;
    
    UFUNCTION(BlueprintPure)
    bool GetUseDeathBlowWounds() const;
    
    UFUNCTION(BlueprintPure)
    static UTWDDamageType* GetTWDDamageType(UClass* DamageTypeClass, bool& bValid) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetSplashSize() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetSplashRatio() const;
    
    UFUNCTION(BlueprintPure)
    float GetMinWoundSize() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxDentForSmallBodyParts() const;
    
    UFUNCTION(BlueprintPure)
    float GetGrappleHandStruggleDamageFraction() const;
    
    UFUNCTION(BlueprintPure)
    float GetDistanceForward() const;
    
    UFUNCTION(BlueprintPure)
    EWoundType GetDeathBlowWoundType() const;
    
    UFUNCTION(BlueprintPure)
    FRVector GetDeathBlowWoundDiameter() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetDeathBlowSplashRatio() const;
    
    UFUNCTION(BlueprintPure)
    float GetDeathBlowMinWoundSize() const;
    
    UFUNCTION(BlueprintPure)
    float GetDeathBlowDistanceForward() const;
    
    UFUNCTION(BlueprintPure)
    float GetDeathblowDamageImpulse() const;
    
    UFUNCTION(BlueprintPure)
    bool CausesHitReactionOnZeroDamage() const;
    
};

