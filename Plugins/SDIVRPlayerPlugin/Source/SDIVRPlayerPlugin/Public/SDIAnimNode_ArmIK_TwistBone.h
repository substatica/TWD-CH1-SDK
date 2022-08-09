#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "UObject/NoExportTypes.h"
#include "SDIAnimNode_ArmIK_TwistBone.generated.h"

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIAnimNode_ArmIK_TwistBone {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference Bone;
    
    UPROPERTY(EditAnywhere)
    float Weight;
    
    UPROPERTY(EditAnywhere)
    bool bUseSpring;
    
    UPROPERTY(EditAnywhere)
    FFloatRK4SpringInterpolator Spring;
    
    FSDIAnimNode_ArmIK_TwistBone();
};

