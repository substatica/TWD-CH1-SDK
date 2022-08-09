#include "SDICameraShakeSettings.h"

FSDICameraShakeSettings::FSDICameraShakeSettings() {
    this->ShakeClass = NULL;
    this->Scale = 0.00f;
    this->PlaySpace = ECameraShakePlaySpace::CameraLocal;
    this->Delay = 0.00f;
}

