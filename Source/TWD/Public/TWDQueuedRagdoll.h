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
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ATWDCharacter> Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSDIRigidBodyImpulse> Impulses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSDIRigidBodyRadialImpulse> RadialImpulses;
    
    TWD_API FTWDQueuedRagdoll();
};

