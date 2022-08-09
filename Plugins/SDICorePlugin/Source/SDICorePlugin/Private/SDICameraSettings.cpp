#include "SDICameraSettings.h"

FSDICameraSettings::FSDICameraSettings() {
    this->Priority = 0;
    this->BlendInTime = 0.00f;
    this->BlendOutTime = 0.00f;
    this->ID = 0;
    this->LastID = 0;
    this->Timestamp = 0.00f;
    this->Weight = 0.00f;
    this->BlendSpeed = 0.00f;
    this->InterpolatedAlpha = 0.00f;
    this->InterpolatedFinalAlpha = 0.00f;
    this->bInterpolatedInitialized = false;
}

