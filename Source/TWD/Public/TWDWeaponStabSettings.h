#pragma once
#include "CoreMinimal.h"
#include "RFloatExp.h"
#include "TWDPlayerControllerTimeDilation.h"
#include "TWDWeaponSettingsNonVRHitRules.h"
#include "TWDWeaponStabSettings.generated.h"

USTRUCT(BlueprintType)
struct FTWDWeaponStabSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCanStab;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StabPushMotionMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StabPullMotionMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StabHeadHeldPullOutStrengthFactorMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StabAngleDeg;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ThrownStabAngleDeg;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LaunchedStabAngleDeg;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StabBrainMaxAngleDeg;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StabWiggleAngleDeg;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bStabAllowWiggleAfterStart;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StabWiggleSpeedDeg;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StabPushMovementMaxOffsetAngleDeg;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bStabOrientToNormal;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bThrownStabOrientToNormal;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bLaunchedStabOrientToNormal;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StabCompleteHoldTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RestabDelay;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StabRangedGrabDelay;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StabActiveRagdollStrengthMultiplyer;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRFloatExp StabPullOutStrength;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StabPullOutStrengthFactor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StabStartStaminaCost;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StabCompleteStaminaCost;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StabPullStaminaCost;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRFloatExp StabStartDurabilityCost;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRFloatExp StabCompleteDurabilityCost;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRFloatExp StabPullDurabilityCost;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bDurabilityCanBreakOnStabStart;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bDurabilityCanBreakOnStabComplete;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bDurabilityCanBreakOnStabPull;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCanStabOffscreen;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OnscreenHorizontalAngleDeg;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OnscreenVerticalAngleDeg;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bStabUseTimeDilation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTWDPlayerControllerTimeDilation StabTimeDilation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bThrownStabUseTimeDilation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTWDPlayerControllerTimeDilation ThrownStabTimeDilation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bLaunchedStabUseTimeDilation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTWDPlayerControllerTimeDilation LaunchedStabTimeDilation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bNonVRStabUseTimeDilation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTWDPlayerControllerTimeDilation NonVRStabTimeDilation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bNonVRStabWeakpointUseTimeDilation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTWDPlayerControllerTimeDilation NonVRStabWeakpointTimeDilation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bNonVRThrownStabUseTimeDilation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTWDPlayerControllerTimeDilation NonVRThrownStabTimeDilation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bNonVRLaunchedStabUseTimeDilation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTWDPlayerControllerTimeDilation NonVRLaunchedStabTimeDilation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTWDWeaponSettingsNonVRHitRules NonVRStabRules;
    
    TWD_API FTWDWeaponStabSettings();
};

