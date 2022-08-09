#include "TWDWeaponFirearmAmmoTrace.h"

class ATWDWeaponFirearmAmmoTrace;

ATWDWeaponFirearmAmmoTrace* ATWDWeaponFirearmAmmoTrace::TuneTWDWeaponFirearmAmmoTrace(FSDITuningAttribute_TWDWeaponFirearmAmmoTrace Attr, float PreModifier, float Add, float PostModifier) {
    return NULL;
}

float ATWDWeaponFirearmAmmoTrace::GetImpactNoiseRadius() const {
    return 0.0f;
}

ATWDWeaponFirearmAmmoTrace::ATWDWeaponFirearmAmmoTrace() {
    this->ImpactNoiseRadius = 0.00f;
    this->PassThroughMax = -1;
    this->ImpactAkEvent = NULL;
    this->ImpactAkEventSurfaceSwitchGroup = TEXT("BulletImpacts");
    this->bCanPenetrateHelmet = false;
    this->AimAssistMaxDistance = 0.00f;
    this->AimAssistRadius = 0.00f;
    this->AimAssistAngleDeg = 0.00f;
    this->bAimAssistUseSpreadTransform = false;
    this->AimAssistAsyncTracePlatformLevel = 2;
}

