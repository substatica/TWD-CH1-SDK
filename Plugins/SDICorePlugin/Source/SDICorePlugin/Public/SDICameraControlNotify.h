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
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<USDIAnimNotifyState_CameraControl> WeakNotify;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<USkeletalMeshComponent> WeakMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FQuat RefQuat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FQuat Quat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bQuatWasSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDidAllowCameraInput;
    
public:
    FSDICameraControlNotify();
};

