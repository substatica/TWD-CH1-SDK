#include "SDIAnimNotifyState_CameraControl.h"

USDIAnimNotifyState_CameraControl::USDIAnimNotifyState_CameraControl() {
    this->Priority = 0;
    this->SocketTransformSpace = RTS_ParentBoneSpace;
    this->bAllowCameraInput = false;
    this->bLimitYawByPitch = true;
    this->LimitYawByPitchStartDeg = 45.00f;
    this->bEnablePitch = true;
    this->bEnableYaw = true;
    this->bEnableRoll = false;
    this->bUseAbsolutePitch = false;
    this->bUseAbsoluteYaw = false;
    this->bUseAbsoluteRoll = true;
    this->AbsoluteRotationBlendTime = 0.15f;
    this->AbsoluteYawMeshForwardAxis = ESDIAxis::PosY;
}

