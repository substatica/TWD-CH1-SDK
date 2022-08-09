#include "DebugTransformThreshold.h"

FDebugTransformThreshold::FDebugTransformThreshold() {
    this->Threshold = 0.00f;
    this->VelocityThreshold = 0.00f;
    this->Axis = ESDIAxis::Any;
    this->bCheckOnEveryUpdate = false;
    this->bAutoBreak = false;
    this->MaxDelta = 0.00f;
    this->MaxVelocity = 0.00f;
    this->ThresholdTriggers = 0;
    this->VelocityThresholdTriggers = 0;
}

