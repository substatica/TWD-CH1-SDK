#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "UObject/NoExportTypes.h"
#include "BoneContainer.h"
#include "Animation/AnimNodeBase.h"
#include "UObject/NoExportTypes.h"
#include "SDIAnimNode_ThirdPersonHeadAndBodyIK.generated.h"

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIAnimNode_ThirdPersonHeadAndBodyIK : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink SourcePose;
    
    UPROPERTY(EditAnywhere)
    FBoneReference HeadBone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference ArmsRootBone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference AnimRootBone;
    
    UPROPERTY(EditAnywhere)
    FVector HMDHeadBoneOffset;
    
    UPROPERTY(EditAnywhere)
    FVector ArmsRootBoneDirOffset;
    
    UPROPERTY(EditAnywhere)
    float ArmsRootBoneDirVertScale;
    
    UPROPERTY(EditAnywhere)
    FVector ArmsRootBoneDirRoll;
    
    UPROPERTY(EditAnywhere)
    float ArmsRootRollUpThreshold;
    
    UPROPERTY(EditAnywhere)
    float ArmsRootRollUpScale;
    
    UPROPERTY(EditDefaultsOnly)
    bool bEnableDebugMimic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Alpha;
    
    UPROPERTY(VisibleAnywhere)
    bool bIgnoreTimeDilation;
    
protected:
    UPROPERTY(Transient)
    FTransform RelativeHMDTransform;
    
    UPROPERTY(Transient)
    FTransform RelativeHandTransforms[2];
    
    UPROPERTY(Transient)
    FTransform ActorTransform;
    
    UPROPERTY(Transient)
    bool bInputsValid;
    
    UPROPERTY(Transient)
    float ActorCustomTimeDilation;
    
    UPROPERTY(Transient)
    int32 HeadIndex;
    
    UPROPERTY(Transient)
    FTransform HeadTransform;
    
    UPROPERTY(Transient)
    FTransform ArmsRootTransform;
    
    UPROPERTY(Transient)
    FTransform AnimRootTransform;
    
    UPROPERTY(Transient)
    TArray<int32> NeckIndexChain;
    
    UPROPERTY(Transient)
    TArray<int32> ArmsRootIndexChain;
    
    UPROPERTY(Transient)
    TArray<FTransform> LocalTransforms;
    
public:
    FSDIAnimNode_ThirdPersonHeadAndBodyIK();
};

