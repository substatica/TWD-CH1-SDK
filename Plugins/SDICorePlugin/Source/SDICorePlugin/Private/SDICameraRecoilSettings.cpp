#include "SDICameraRecoilSettings.h"

FSDICameraRecoilSettings::FSDICameraRecoilSettings() {
    this->RecoilBlend = EAlphaBlendOption::Linear;
    this->RecoilBlendCustomCurve = NULL;
    this->RecoverBlend = EAlphaBlendOption::Linear;
    this->RecoverBlendCustomCurve = NULL;
    this->DurationScaleCurve = NULL;
}

