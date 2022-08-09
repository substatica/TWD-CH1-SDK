#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "RRotator.h"
#include "UObject/NoExportTypes.h"
#include "SDIAnimNode_FingerIK_FingerBone.generated.h"

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIAnimNode_FingerIK_FingerBone {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference Bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRRotator RotationRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRK4SpringInterpolator Spring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TargetLerp;
    
    FSDIAnimNode_FingerIK_FingerBone();
};

