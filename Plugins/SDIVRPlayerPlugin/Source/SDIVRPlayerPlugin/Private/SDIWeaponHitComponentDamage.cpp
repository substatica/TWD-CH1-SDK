#include "SDIWeaponHitComponentDamage.h"

FSDIWeaponHitComponentDamage::FSDIWeaponHitComponentDamage() {
    this->VelocityAxis = ESDIAxis::Any;
    this->bEnableTwoHandVelocityRange = false;
    this->MinContinuousVelocity = 0.00f;
    this->MinContinuousVelocityTime = 0.00f;
    this->bScaleDamageOnVelocity = false;
    this->TwoHandMultiplier = 0.00f;
    this->DamageFeedback = NULL;
}

