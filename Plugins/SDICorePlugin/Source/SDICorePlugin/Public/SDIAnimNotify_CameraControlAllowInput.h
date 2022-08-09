#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AlphaBlend.h"
#include "SDIAnimNotify_CameraControlAllowInput.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USDIAnimNotify_CameraControlAllowInput : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlphaBlend CameraInputEaseIn;
    
public:
    USDIAnimNotify_CameraControlAllowInput();
};

