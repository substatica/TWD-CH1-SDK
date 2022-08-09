#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "Components/SceneComponent.h"
#include "AlphaBlend.h"
#include "SDIBlendOption.h"
#include "ESDIAxis.h"
#include "SDIAnimNotifyState_CameraControl.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SDICOREPLUGIN_API USDIAnimNotifyState_CameraControl : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 Priority;
    
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ERelativeTransformSpace> SocketTransformSpace;
    
    UPROPERTY(EditAnywhere)
    bool bAllowCameraInput;
    
    UPROPERTY(EditAnywhere)
    FAlphaBlend CameraInputEaseIn;
    
    UPROPERTY(EditAnywhere)
    bool bLimitYawByPitch;
    
    UPROPERTY(EditAnywhere)
    float LimitYawByPitchStartDeg;
    
    UPROPERTY(EditAnywhere)
    FSDIBlendOption LimitYawByPitchBlend;
    
    UPROPERTY(EditAnywhere)
    bool bEnablePitch;
    
    UPROPERTY(EditAnywhere)
    bool bEnableYaw;
    
    UPROPERTY(EditAnywhere)
    bool bEnableRoll;
    
    UPROPERTY(EditAnywhere)
    bool bUseAbsolutePitch;
    
    UPROPERTY(EditAnywhere)
    bool bUseAbsoluteYaw;
    
    UPROPERTY(EditAnywhere)
    bool bUseAbsoluteRoll;
    
    UPROPERTY(EditAnywhere)
    float AbsoluteRotationBlendTime;
    
    UPROPERTY(EditAnywhere)
    ESDIAxis AbsoluteYawMeshForwardAxis;
    
public:
    USDIAnimNotifyState_CameraControl();
};

