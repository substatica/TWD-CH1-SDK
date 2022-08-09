#pragma once
#include "CoreMinimal.h"
#include "SDIAnimNotifyStateData.h"
#include "UObject/NoExportTypes.h"
#include "SDICameraControlNotify.generated.h"

class USDIAnimNotifyState_CameraControl;
class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICameraControlNotify : public FSDIAnimNotifyStateData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TWeakObjectPtr<USDIAnimNotifyState_CameraControl> WeakNotify;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<USkeletalMeshComponent> WeakMeshComp;
    
    UPROPERTY(Transient)
    FQuat RefQuat;
    
    UPROPERTY(Transient)
    FQuat Quat;
    
    UPROPERTY(Transient)
    bool bQuatWasSet;
    
    UPROPERTY(Transient)
    bool bDidAllowCameraInput;
    
public:
    FSDICameraControlNotify();
};

