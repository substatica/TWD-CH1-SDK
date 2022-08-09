#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "RFloatExp.h"
#include "TWDWeaponStickSettings.generated.h"

USTRUCT(BlueprintType)
struct FTWDWeaponStickSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bHeldStick;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bThrownStick;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bLaunchedStick;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StickAngleDeg;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ThrownStickAngleDeg;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LaunchedStickAngleDeg;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HeldStickMinVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ThrownStickMinVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LaunchedStickMinVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bStickOrientToNormal;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bThrownStickOrientToNormal;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bLaunchedStickOrientToNormal;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRuntimeFloatCurve StickDepthVelocityCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRuntimeFloatCurve StickThrownDepthVelocityCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRuntimeFloatCurve StickLaunchedDepthVelocityCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PullStaminaCost;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRFloatExp StickDurabilityCost;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRFloatExp PullDurabilityCost;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bDurabilityCanBreakOnStick;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bDurabilityCanBreakOnPull;
    
    TWD_API FTWDWeaponStickSettings();
};

