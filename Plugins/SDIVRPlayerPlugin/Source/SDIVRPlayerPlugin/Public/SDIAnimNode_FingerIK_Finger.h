#pragma once
#include "CoreMinimal.h"
#include "ESDIHandFinger.h"
#include "SDIAnimNode_FingerIK_FingerBone.h"
#include "ESDIHandPose.h"
#include "SDIAnimNode_FingerIK_Finger.generated.h"

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIAnimNode_FingerIK_Finger {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    ESDIHandFinger Finger;
    
    UPROPERTY(EditAnywhere)
    TArray<FSDIAnimNode_FingerIK_FingerBone> Bones;
    
    UPROPERTY(EditAnywhere)
    float EndFingerLength;
    
    UPROPERTY(EditAnywhere)
    float CollisionStep;
    
    UPROPERTY(EditAnywhere)
    float FingerRadius;
    
    UPROPERTY(EditAnywhere)
    float BlendWeightSpeed;
    
    UPROPERTY(EditAnywhere)
    TArray<ESDIHandPose> ValidHandPoses;
    
    UPROPERTY(Transient)
    float BlendWeightMul;
    
    UPROPERTY(Transient)
    float BlendWeightMulDir;
    
    FSDIAnimNode_FingerIK_Finger();
};

