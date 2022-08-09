#pragma once
#include "CoreMinimal.h"
#include "RRotator.h"
#include "BoneContainer.h"
#include "UObject/NoExportTypes.h"
#include "SDIAnimNode_FingerIK_FingerBone.generated.h"

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIAnimNode_FingerIK_FingerBone {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference Bone;
    
    UPROPERTY(EditAnywhere)
    FRRotator RotationRange;
    
    UPROPERTY(EditAnywhere)
    FFloatRK4SpringInterpolator Spring;
    
    UPROPERTY(Transient)
    float TargetLerp;
    
    FSDIAnimNode_FingerIK_FingerBone();
};

