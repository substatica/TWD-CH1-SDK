#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ETWDNonVRMeleeAttackType.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "TWDNonVRMeleeAttackHitDetails.h"
#include "TWDNonVRMeleeAttackDetails.generated.h"

class ASDIHeldActor;

USTRUCT(BlueprintType)
struct FTWDNonVRMeleeAttackDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    ASDIHeldActor* HeldActor;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TSubclassOf<ASDIHeldActor> HeldActorClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FHitResult Target;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Angle;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Charge;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector Velocity;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsCharged;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ETWDNonVRMeleeAttackType AttackType;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector SplayDirection;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FTWDNonVRMeleeAttackHitDetails> Hits;
    
    TWD_API FTWDNonVRMeleeAttackDetails();
};

