#include "SDIReplicatedDamageData.h"

FSDIReplicatedDamageData::FSDIReplicatedDamageData() {
    this->DamageTypeClass = NULL;
    this->DamagedActor = NULL;
    this->DamagedPS = NULL;
    this->InstigatorPawn = NULL;
    this->InstigatorPS = NULL;
    this->DamageCauser = NULL;
    this->DamageID = 0;
    this->ImpactMass = 0.00f;
    this->HitReactImpulseMultiplier = 0.00f;
    this->HitReactMinSpeed = 0.00f;
    this->DamageIntended = 0.00f;
    this->DamageTaken = 0.00f;
    this->bRadialDamage = false;
    this->Timestamp = 0.00f;
}

