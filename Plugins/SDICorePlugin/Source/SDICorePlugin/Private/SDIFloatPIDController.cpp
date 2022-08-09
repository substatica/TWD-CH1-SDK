#include "SDIFloatPIDController.h"

FSDIFloatPIDController::FSDIFloatPIDController() {
    this->Integral = 0.00f;
    this->PreviousError = 0.00f;
}

