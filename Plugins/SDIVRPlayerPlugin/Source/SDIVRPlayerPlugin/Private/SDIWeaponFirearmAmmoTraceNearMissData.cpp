#include "SDIWeaponFirearmAmmoTraceNearMissData.h"

FSDIWeaponFirearmAmmoTraceNearMissData::FSDIWeaponFirearmAmmoTraceNearMissData() {
    this->NearMissedCharacter = NULL;
    this->Instigator = NULL;
    this->DistanceRayToCapsuleAxis = 0.00f;
    this->ShotTotalRange = 0.00f;
    this->bDamagedOtherCharacter = false;
}

