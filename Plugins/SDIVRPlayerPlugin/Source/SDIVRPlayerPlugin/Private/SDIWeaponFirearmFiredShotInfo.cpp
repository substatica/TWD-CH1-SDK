#include "SDIWeaponFirearmFiredShotInfo.h"

FSDIWeaponFirearmFiredShotInfo::FSDIWeaponFirearmFiredShotInfo() {
    this->EventInstigator = NULL;
    this->Firearm = NULL;
    this->Firemode = NULL;
    this->FiredAmmo = NULL;
    this->bIsPlayer = false;
    this->bIsADS = false;
    this->Accuracy = 0.00f;
    this->NumRoundsFired = 0;
    this->Burst = 0;
    this->BurstCount = 0;
}

