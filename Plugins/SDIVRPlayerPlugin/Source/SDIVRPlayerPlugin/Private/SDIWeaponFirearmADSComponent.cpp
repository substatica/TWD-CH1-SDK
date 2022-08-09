#include "SDIWeaponFirearmADSComponent.h"

class USceneComponent;

void USDIWeaponFirearmADSComponent::UpdateAttachmentInfo(USceneComponent* OldParent, USceneComponent* NewParent, const FName& NewParentSocketName) {
}

bool USDIWeaponFirearmADSComponent::IsADS() const {
    return false;
}

FTransform USDIWeaponFirearmADSComponent::GetADSTransform() const {
    return FTransform{};
}

USDIWeaponFirearmADSComponent::USDIWeaponFirearmADSComponent() {
    this->bAllowAssistance = true;
    this->EngageEyeDeltaDegrees = 5.00f;
    this->DisengageEyeDeltaDegrees = 10.00f;
    this->MaxHMDDeltaDegrees = 60.00f;
    this->MinTime = 0.25f;
    this->MaxEngageSpeed = 16.00f;
    this->MaxDisengageSpeed = 48.00f;
    this->MovementSmoothMinSpeed = 2.00f;
    this->MovementSmoothMaxSpeed = 12.00f;
    this->CorrectionMinOffset = 1.00f;
    this->CorrectionMaxOffset = 6.00f;
    this->CorrectionMinSpeed = 1.00f;
    this->CorrectionMaxSpeed = 4.00f;
}

