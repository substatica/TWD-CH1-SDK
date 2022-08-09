#include "TWDNonVRMeleeAttackDetails.h"

FTWDNonVRMeleeAttackDetails::FTWDNonVRMeleeAttackDetails() {
    this->HeldActor = NULL;
    this->HeldActorClass = NULL;
    this->Angle = 0.00f;
    this->Charge = 0.00f;
    this->bIsCharged = false;
    this->AttackType = ETWDNonVRMeleeAttackType::None;
}

