#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AlphaBlend.h"
#include "SDIAnimNotify_CameraControlResetViewPitch.generated.h"

UCLASS(CollapseCategories)
class USDIAnimNotify_CameraControlResetViewPitch : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FAlphaBlend ResetPitchBlend;
    
    UPROPERTY(EditAnywhere)
    float PitchBlendTimeVelocityOverride;
    
    UPROPERTY(EditAnywhere)
    FAlphaBlend PitchInputEaseIn;
    
public:
    USDIAnimNotify_CameraControlResetViewPitch();
};

