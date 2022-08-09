#include "SDIAnimInstance.h"

bool USDIAnimInstance::ResetInstance_Implementation() {
    return false;
}

bool USDIAnimInstance::GetAnimationTransform(FTransform& OutTransform, FName SocketName, TEnumAsByte<ERelativeTransformSpace> TransformSpace) const {
    return false;
}

bool USDIAnimInstance::CanGetAnimationTransform() const {
    return false;
}

USDIAnimInstance::USDIAnimInstance() {
    this->bSaveComponentSpaceTransforms = false;
}

