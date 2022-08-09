#pragma once
#include "CoreMinimal.h"
#include "SDIDamageData.h"
#include "ESDIAxis.h"
#include "SDIWeaponHitCapsuleComponent.h"
#include "Curves/CurveFloat.h"
#include "SDIPlayerHandMove.h"
#include "ETWDCharacterHitRegion.h"
#include "TWDWeaponStabSettings.h"
#include "TWDWeaponDismemberSettings.h"
#include "TWDWeaponStickSettings.h"
#include "ETWDNonVRMeleeAttackType.h"
#include "TWDWeaponHitCapsuleComponent.generated.h"

class UPhysicalMaterial;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTWDWeaponHitCapsuleComponent : public USDIWeaponHitCapsuleComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAllowStab;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ESDIAxis StabAxis;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ESDIAxis ThrownStabAxis;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ESDIAxis LaunchedStabAxis;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ESDIAxis StabWoundAxis;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StabCollisionCorrectionStep;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StabStartDepth;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StabMaxDepth;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRuntimeFloatCurve StabInitialDepthVelocityCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRuntimeFloatCurve StabThrownInitialDepthVelocityCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRuntimeFloatCurve StabLaunchedInitialDepthVelocityCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bStabInitialDepthVelocityRemovePawnVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StabStartLerpTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StabThrownStartLerpTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StabLaunchedStartLerpTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bStabCanPush;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bStabCanDrag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bStabFromThrown;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bStabFromLaunched;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bStabUsePullOutMove;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bStabStickAfterRelease;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bStabBrainingUseRagdoll;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRuntimeFloatCurve StabCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRuntimeFloatCurve StabPullCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSDIDamageData StabStartDamageData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSDIDamageData StabCompleteDamageData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSDIDamageData StabPullDamageData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 StabSawIncrements;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSDIPlayerHandMove StabDragPullOutMove;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSDIPlayerHandMove StabPullOutMove;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<ETWDCharacterHitRegion, FTWDWeaponStabSettings> StabSettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAllowDismember;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ESDIAxis DismemberAxis;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ESDIAxis DismemberFlatAxis;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<ETWDCharacterHitRegion, FTWDWeaponDismemberSettings> DismemberSettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAllowStick;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ESDIAxis StickAxis;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ESDIAxis ThrownStickAxis;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ESDIAxis LaunchedStickAxis;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<UPhysicalMaterial*, FTWDWeaponStickSettings> StickSettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ESDIAxis WoundAxis;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSet<ETWDNonVRMeleeAttackType> NonVRAttackTypeFilter;
    
public:
    UTWDWeaponHitCapsuleComponent();
    UFUNCTION(BlueprintCallable)
    void SetStickingAllowed(bool bCanDismember);
    
    UFUNCTION(BlueprintCallable)
    void SetStabbingAllowed(bool bCanStab);
    
    UFUNCTION(BlueprintCallable)
    void SetDismemberAllowed(bool bCanDismember);
    
    UFUNCTION(BlueprintPure)
    bool IsStickingAllowed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsStabbingAllowed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDismemberAllowed() const;
    
};

