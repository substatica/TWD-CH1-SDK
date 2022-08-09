#pragma once
#include "CoreMinimal.h"
#include "TWDWeaponSettingsNonVRHitRules.generated.h"

USTRUCT(BlueprintType)
struct FTWDWeaponSettingsNonVRHitRules {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bWeakpoint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bWeakpointRequireChargedAttack;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bNonWeakpoint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bNonWeakpointRequireChargedAttack;
    
    TWD_API FTWDWeaponSettingsNonVRHitRules();
};

