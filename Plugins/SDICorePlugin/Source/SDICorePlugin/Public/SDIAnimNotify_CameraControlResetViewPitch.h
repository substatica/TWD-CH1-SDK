#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AlphaBlend.h"
#include "SDIAnimNotify_CameraControlResetViewPitch.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USDIAnimNotify_CameraControlResetViewPitch : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlphaBlend ResetPitchBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchBlendTimeVelocityOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlphaBlend PitchInputEaseIn;
    
public:
    USDIAnimNotify_CameraControlResetViewPitch();
};

