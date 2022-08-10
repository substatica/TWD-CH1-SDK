#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SDIReplicatedRagdollBone.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIReplicatedRagdollBone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRigidBodyState RagdollState;
    
    FSDIReplicatedRagdollBone();
};

