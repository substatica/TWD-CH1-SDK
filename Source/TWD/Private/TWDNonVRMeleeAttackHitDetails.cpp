#include "TWDNonVRMeleeAttackHitDetails.h"

FTWDNonVRMeleeAttackHitDetails::FTWDNonVRMeleeAttackHitDetails() {
    this->bWeakpoint = false;
    this->bWeakpointIsDiseased = false;
    this->bArmored = false;
    this->bArmorBroken = false;
    this->bStab = false;
    this->bDismember = false;
    this->HitRegion = ETWDCharacterHitRegion::None;
}

