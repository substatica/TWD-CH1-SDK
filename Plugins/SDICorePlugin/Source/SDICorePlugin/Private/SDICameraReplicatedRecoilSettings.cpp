#include "SDICameraReplicatedRecoilSettings.h"

FSDICameraReplicatedRecoilSettings::FSDICameraReplicatedRecoilSettings() {
    this->RecoilPitch = 0.00f;
    this->RecoilYaw = 0.00f;
    this->RecoilRoll = 0.00f;
    this->RecoilDuration = 0.00f;
    this->RecoilBlend = EAlphaBlendOption::Linear;
    this->RecoilBlendCustomCurve = NULL;
    this->RecoverDuration = 0.00f;
    this->RecoverBlend = EAlphaBlendOption::Linear;
    this->RecoverBlendCustomCurve = NULL;
    this->RecoverPercentagePitch = 0.00f;
    this->RecoverPercentageYaw = 0.00f;
    this->RecoverPercentageRoll = 0.00f;
}

