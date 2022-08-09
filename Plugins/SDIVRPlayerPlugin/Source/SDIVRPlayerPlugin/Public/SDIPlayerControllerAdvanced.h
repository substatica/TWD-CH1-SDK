#pragma once
#include "CoreMinimal.h"
#include "SDIPlayerController.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDIPlayerControllerAdvanced.generated.h"

UCLASS()
class SDIVRPLAYERPLUGIN_API ASDIPlayerControllerAdvanced : public ASDIPlayerController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float MaxVRYawDeltaDegrees;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatRK4SpringInterpolator VRYawDeltaSpring;
    
    UPROPERTY(EditDefaultsOnly)
    float VRFacingHMDScale;
    
    UPROPERTY(EditDefaultsOnly)
    float VRFacingHandsScale;
    
    UPROPERTY(EditDefaultsOnly)
    float VRFacingHandsCrossScale;
    
    UPROPERTY(EditDefaultsOnly)
    float VRFacingThumbsScale;
    
    UPROPERTY(EditDefaultsOnly)
    float VRFacingThumbsScaleSmoothingFactor;
    
    UPROPERTY(Transient)
    FVector SmoothThumbComponent;
    
public:
    ASDIPlayerControllerAdvanced();
};

