#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "UObject/NoExportTypes.h"
#include "BoneContainer.h"
#include "CommonAnimTypes.h"
#include "Animation/AnimTypes.h"
#include "SDIBoneSocketTarget.h"
#include "SDIAnimNode_TwoBoneIK.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference IKBone;
    
    UPROPERTY(EditAnywhere)
    float MaxExtensionPct;
    
    UPROPERTY(EditAnywhere)
    uint8 bAllowStretching: 1;
    
    UPROPERTY(EditAnywhere)
    float StartStretchRatio;
    
    UPROPERTY(EditAnywhere)
    float MaxStretchScale;
    
    UPROPERTY(EditAnywhere)
    uint8 bTakeRotationFromEffectorSpace: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bMaintainEffectorRelRot: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneControlSpace> EffectorLocationSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector EffectorLocation;
    
    UPROPERTY(EditAnywhere)
    FSDIBoneSocketTarget EffectorTarget;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneControlSpace> JointTargetLocationSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector JointTargetLocation;
    
    UPROPERTY(EditAnywhere)
    FSDIBoneSocketTarget JointTarget;
    
    UPROPERTY(EditAnywhere)
    bool bAllowTwist;
    
    UPROPERTY(EditAnywhere)
    FAxis TwistAxis;
    
    FSDIAnimNode_TwoBoneIK();
};

