#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SDIAnimNode_ArmIK.h"
#include "SDIAnimNode_FirstPersonArmIK.generated.h"

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIAnimNode_FirstPersonArmIK : public FSDIAnimNode_ArmIK {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bMirroredBoneAxes;
    
    UPROPERTY(Transient)
    FTransform ShoulderTransform;
    
    UPROPERTY(Transient)
    float LastForeArmTwistDelta;
    
public:
    FSDIAnimNode_FirstPersonArmIK();
};

