#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ETWDCharacterHitRegion.h"
#include "UObject/NoExportTypes.h"
#include "TWDNonVRMeleeAttackHitDetails.generated.h"

USTRUCT(BlueprintType)
struct FTWDNonVRMeleeAttackHitDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FHitResult Hit;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bWeakpoint;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bWeakpointIsDiseased;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bArmored;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bArmorBroken;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bStab;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bDismember;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ETWDCharacterHitRegion HitRegion;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector Direction;
    
    TWD_API FTWDNonVRMeleeAttackHitDetails();
};

