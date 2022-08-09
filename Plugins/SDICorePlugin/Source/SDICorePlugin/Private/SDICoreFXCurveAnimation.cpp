#include "SDICoreFXCurveAnimation.h"

FSDICoreFXCurveAnimation::FSDICoreFXCurveAnimation() {
    this->Curve = NULL;
    this->bLooping = false;
    this->MinTime = 0.00f;
    this->MaxTime = 0.00f;
    this->Time = 0.00f;
}

