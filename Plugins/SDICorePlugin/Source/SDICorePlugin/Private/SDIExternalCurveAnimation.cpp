#include "SDIExternalCurveAnimation.h"

FSDIExternalCurveAnimation::FSDIExternalCurveAnimation() {
    this->CurveEngageSpeed = 0.00f;
    this->CurveDisengageSpeed = 0.00f;
    this->CurveTime = 0.00f;
    this->CachedCurveMinTime = 0.00f;
    this->CachedCurveMaxTime = 0.00f;
    this->bCachedCurveValid = false;
}

