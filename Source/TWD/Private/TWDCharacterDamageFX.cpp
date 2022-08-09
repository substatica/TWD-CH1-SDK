#include "TWDCharacterDamageFX.h"

FTWDCharacterDamageFX::FTWDCharacterDamageFX() {
    this->PhysicalMaterial = NULL;
    this->DamageType = NULL;
    this->ParticleSystem = NULL;
    this->MinImpactVelocity = 0.00f;
    this->bAttach = false;
    this->bOrientUsingImpactVelocity = false;
    this->OrientationAxis = ESDIAxis::Any;
}

