#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AlphaBlend.h"
#include "SDIAnimNotify_CameraControlAllowInput.generated.h"

UCLASS(CollapseCategories)
class USDIAnimNotify_CameraControlAllowInput : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FAlphaBlend CameraInputEaseIn;
    
public:
    USDIAnimNotify_CameraControlAllowInput();
};

