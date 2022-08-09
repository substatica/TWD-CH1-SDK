#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "UObject/NoExportTypes.h"
#include "BoneContainer.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/InputScaleBias.h"
#include "SDIAnimNode_FingerIK_Finger.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ESDIHandPose.h"
#include "SDICachedCollisionInfo.h"
#include "SDIAnimNode_FingerIK.generated.h"

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIAnimNode_FingerIK : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink SourcePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputScaleBias AlphaScaleBias;
    
    UPROPERTY(EditAnywhere)
    int32 MinGameplayPlatformLevel;
    
    UPROPERTY(VisibleAnywhere)
    bool bIgnoreTimeDilation;
    
    UPROPERTY(VisibleAnywhere)
    bool bApplyToTrackedHandMesh;
    
    UPROPERTY(EditAnywhere)
    FBoneReference HandRootBone;
    
    UPROPERTY(EditAnywhere)
    FSDIAnimNode_FingerIK_Finger Thumb;
    
    UPROPERTY(EditAnywhere)
    FSDIAnimNode_FingerIK_Finger IndexFinger;
    
    UPROPERTY(EditAnywhere)
    FSDIAnimNode_FingerIK_Finger MiddleFinger;
    
    UPROPERTY(EditAnywhere)
    FSDIAnimNode_FingerIK_Finger RingFinger;
    
    UPROPERTY(EditAnywhere)
    FSDIAnimNode_FingerIK_Finger PinkyFinger;
    
    UPROPERTY(EditAnywhere)
    bool bUseCollisionCache;
    
    UPROPERTY(EditAnywhere)
    float CollisionCacheRadius;
    
    UPROPERTY(EditAnywhere)
    FVector CollisionCacheOffset;
    
    UPROPERTY(EditAnywhere)
    bool bDebugDrawFingers;
    
    UPROPERTY(EditAnywhere)
    bool bTestRotationFixed;
    
    UPROPERTY(EditAnywhere)
    bool bTestRotationLive;
    
    UPROPERTY(EditAnywhere)
    float TestRotationFixedAmount;
    
    UPROPERTY(EditAnywhere)
    float TestRotationLiveSpeed;
    
    UPROPERTY(EditAnywhere)
    float TestRotationLiveHoldTime;
    
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
    TArray<FTransform> LocalTransforms;
    
    UPROPERTY(Transient)
    bool bInputsValid;
    
    UPROPERTY(Transient)
    TEnumAsByte<ECollisionChannel> CollisionChannel;
    
    UPROPERTY(Transient)
    ESDIHandPose LastHandPose;
    
    UPROPERTY(Transient)
    ESDIHandPose HandPose;
    
    UPROPERTY(Transient)
    float TestRotationLiveDir;
    
    UPROPERTY(Transient)
    float TestRotationLiveAmount;
    
    UPROPERTY(Transient)
    FSDICachedCollisionInfo CollisionCache;
    
public:
    FSDIAnimNode_FingerIK();
};

