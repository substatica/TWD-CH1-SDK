#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SDIReplicatedRagdollBone.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIReplicatedRagdollBone {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName BoneName;
    
    UPROPERTY(Transient)
    FRigidBodyState RagdollState;
    
    FSDIReplicatedRagdollBone();
};

