#pragma once
#include "CoreMinimal.h"
#include "SDIRigidBodyImpulse.h"
#include "SDIRigidBodyRadialImpulse.h"
#include "TWDQueuedRagdoll.generated.h"

class ATWDCharacter;

USTRUCT(BlueprintType)
struct FTWDQueuedRagdoll {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TWeakObjectPtr<ATWDCharacter> Character;
    
    UPROPERTY(Transient)
    TArray<FSDIRigidBodyImpulse> Impulses;
    
    UPROPERTY(Transient)
    TArray<FSDIRigidBodyRadialImpulse> RadialImpulses;
    
    TWD_API FTWDQueuedRagdoll();
};

