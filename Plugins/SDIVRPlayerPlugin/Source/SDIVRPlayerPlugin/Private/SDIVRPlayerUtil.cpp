#include "SDIVRPlayerUtil.h"

class UObject;
class ASDIPlayerHand;
class ASDIPlayerHandBase;

bool USDIVRPlayerUtil::IsEnableOculusOnSteamVR() {
    return false;
}

ESDIVRControllerType USDIVRPlayerUtil::GetVRControllerTypeTemp_RealOculusTypes() {
    return ESDIVRControllerType::VRController_Any;
}

ESDIVRControllerType USDIVRPlayerUtil::GetVRControllerType() {
    return ESDIVRControllerType::VRController_Any;
}

ASDIPlayerHandBase* USDIVRPlayerUtil::GetPlayerHandBase(const UObject* WorldContextObject, EControllerHand hand) {
    return NULL;
}

ASDIPlayerHand* USDIVRPlayerUtil::GetPlayerHand(const UObject* WorldContextObject, EControllerHand hand) {
    return NULL;
}

FString USDIVRPlayerUtil::GetHMDDeviceName() {
    return TEXT("");
}

USDIVRPlayerUtil::USDIVRPlayerUtil() {
}

