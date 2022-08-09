#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SDIAnimNode_ArmIK.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDIAnimNode_ThirdPersonArmIK.generated.h"

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIAnimNode_ThirdPersonArmIK : public FSDIAnimNode_ArmIK {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FVector HandOffset;
    
    UPROPERTY(EditDefaultsOnly)
    bool bLeftSide;
    
    UPROPERTY(EditDefaultsOnly)
    bool bEnableDebugMimic;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EAxis::Type> HandUpAxis;
    
    UPROPERTY(EditDefaultsOnly)
    bool bInvertHandUpAxis;
    
    UPROPERTY(Transient)
    FTransform ActorTransform;
    
    UPROPERTY(Transient)
    FTransform WorldHandTransform;
    
    UPROPERTY(Transient)
    FTransform RelativeHMDTransform;
    
public:
    FSDIAnimNode_ThirdPersonArmIK();
};

