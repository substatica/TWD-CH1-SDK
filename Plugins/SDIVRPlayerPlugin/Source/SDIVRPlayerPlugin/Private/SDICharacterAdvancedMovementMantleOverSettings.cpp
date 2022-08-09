#include "SDICharacterAdvancedMovementMantleOverSettings.h"

FSDICharacterAdvancedMovementMantleOverSettings::FSDICharacterAdvancedMovementMantleOverSettings() {
    this->bRequireBothHands = false;
    this->ForwardDistance = 0.00f;
    this->MinHeight = 0.00f;
    this->VerticalClearance = 0.00f;
    this->HorizontalClearance = 0.00f;
    this->Velocity = 0.00f;
    this->bAdjustEyeHeight = false;
    this->MaxTime = 0.00f;
    this->bEnableAutoMantle = false;
    this->AutoMantleMinVerticalHandDistance = 0.00f;
}

