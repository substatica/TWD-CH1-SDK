#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SDICameraShakeSettings.h"
#include "SDIAnimNotify_CameraShake.generated.h"

UCLASS(CollapseCategories)
class USDIAnimNotify_CameraShake : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FSDICameraShakeSettings CameraShake;
    
public:
    USDIAnimNotify_CameraShake();
};

