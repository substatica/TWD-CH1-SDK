#pragma once
#include "CoreMinimal.h"
#include "TWDWeaponSettingsNonVRHitRules.generated.h"

USTRUCT(BlueprintType)
struct FTWDWeaponSettingsNonVRHitRules {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWeakpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWeakpointRequireChargedAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNonWeakpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNonWeakpointRequireChargedAttack;
    
    TWD_API FTWDWeaponSettingsNonVRHitRules();
};

