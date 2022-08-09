#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "UObject/NoExportTypes.h"
#include "BoneContainer.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/InputScaleBias.h"
#include "SDIAnimNode_ArmIK_TwistBone.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDIAnimNode_ArmIK.generated.h"

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIAnimNode_ArmIK : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink SourcePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputScaleBias AlphaScaleBias;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bHasArmsRootBone;
    
    UPROPERTY(VisibleAnywhere)
    bool bIgnoreTimeDilation;
    
    UPROPERTY(EditAnywhere)
    FBoneReference WristBone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference ElbowBone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference ShoulderBone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference ArmsRootBone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference HeadBone;
    
    UPROPERTY(EditAnywhere)
    TArray<FSDIAnimNode_ArmIK_TwistBone> ForeArmTwistBones;
    
    UPROPERTY(EditAnywhere)
    float ForeArmTwistSwapThreshold;
    
    UPROPERTY(EditAnywhere)
    TArray<FSDIAnimNode_ArmIK_TwistBone> UpperArmTwistBones;
    
    UPROPERTY(EditAnywhere)
    FVectorRK4SpringInterpolator ElbowSpring;
    
    UPROPERTY(EditAnywhere)
    float ElbowSideRotationDefaultDeg;
    
    UPROPERTY(EditAnywhere)
    float ElbowSideRotationMaxDeg;
    
    UPROPERTY(EditAnywhere)
    float ElbowSideRotationSideContribution;
    
    UPROPERTY(EditAnywhere)
    float ElbowSideRotationSideExp;
    
    UPROPERTY(EditAnywhere)
    float ElbowSideRotationUpContribution;
    
    UPROPERTY(EditAnywhere)
    float ElbowSideRotationUpExp;
    
    UPROPERTY(EditAnywhere)
    float ElbowSideRotationForwardContribution;
    
    UPROPERTY(EditAnywhere)
    float ElbowSideRotationForwardExp;
    
    UPROPERTY(EditAnywhere)
    float ElbowSideRotationForwardDownExp;
    
    UPROPERTY(EditAnywhere)
    float ElbowSideRotationPalmUpExp;
    
    UPROPERTY(EditAnywhere)
    float MaxExtensionPct;
    
protected:
    UPROPERTY(Transient)
    float ActualAlpha;
    
    UPROPERTY(Transient)
    float SideMultiplier;
    
    UPROPERTY(Transient)
    float ActorCustomTimeDilation;
    
    UPROPERTY(Transient)
    int32 RootIndex;
    
    UPROPERTY(Transient)
    FTransform RootTransform;
    
    UPROPERTY(Transient)
    FTransform WorldRootTransform;
    
    UPROPERTY(Transient)
    FTransform ArmsRootTransform;
    
    UPROPERTY(Transient)
    FTransform HeadTransform;
    
    UPROPERTY(Transient)
    TArray<FTransform> LocalTransforms;
    
    UPROPERTY(Transient)
    FVector ArmMeshScale;
    
    UPROPERTY(Transient)
    bool bInputsValid;
    
public:
    FSDIAnimNode_ArmIK();
};

