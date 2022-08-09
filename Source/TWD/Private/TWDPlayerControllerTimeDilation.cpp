#include "TWDPlayerControllerTimeDilation.h"

FTWDPlayerControllerTimeDilation::FTWDPlayerControllerTimeDilation() {
    this->TimeDilation = 0.00f;
    this->Duration = 0.00f;
    this->TimeDilationOverrideCurve = NULL;
    this->BlendIn = EAlphaBlendOption::Linear;
    this->BlendInCurve = NULL;
    this->BlendInDuration = 0.00f;
    this->BlendOut = EAlphaBlendOption::Linear;
    this->BlendOutCurve = NULL;
    this->BlendOutDuration = 0.00f;
    this->Delay = 0.00f;
}

