#include "SDIDamageData.h"

FSDIDamageData::FSDIDamageData() {
    this->DamageTypeClass = NULL;
    this->DirectDamageDOTClass = NULL;
    this->DirectDamageMultiplier = 0.00f;
    this->bRadialDamage = false;
    this->bRadialIgnoreDamageCauser = false;
    this->bRadialIgnoreDirectHit = false;
    this->bRadialIgnoreInstigator = false;
    this->RadialDamageTypeClass = NULL;
    this->RadialDamageDOTClass = NULL;
    this->RadialDamageMultiplier = 0.00f;
    this->RadialDamageLOSTraceChannel = ECC_WorldStatic;
    this->DebugRenderDuration = 0.00f;
}

