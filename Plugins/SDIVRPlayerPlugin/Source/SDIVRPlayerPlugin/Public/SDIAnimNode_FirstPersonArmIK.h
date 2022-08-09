#pragma once
#include "CoreMinimal.h"
#include "SDIAnimNode_ArmIK.h"
#include "UObject/NoExportTypes.h"
#include "SDIAnimNode_FirstPersonArmIK.generated.h"

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIAnimNode_FirstPersonArmIK : public FSDIAnimNode_ArmIK {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMirroredBoneAxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform ShoulderTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastForeArmTwistDelta;
    
public:
    FSDIAnimNode_FirstPersonArmIK();
};

