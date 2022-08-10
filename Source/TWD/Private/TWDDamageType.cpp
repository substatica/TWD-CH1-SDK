#include "TWDDamageType.h"

class UTWDDamageType;

EWoundType UTWDDamageType::GetWoundType() const {
    return EWoundType::None;
}

FRVector UTWDDamageType::GetWoundDiameter() const {
    return FRVector{};
}

bool UTWDDamageType::GetUseDeathBlowWounds() const {
    return false;
}

// UTWDDamageType* UTWDDamageType::GetTWDDamageType(UClass* DamageTypeClass, bool& bValid) const {
//    return NULL;
// }

FVector UTWDDamageType::GetSplashSize() const {
    return FVector{};
}

FVector2D UTWDDamageType::GetSplashRatio() const {
    return FVector2D{};
}

float UTWDDamageType::GetMinWoundSize() const {
    return 0.0f;
}

float UTWDDamageType::GetMaxDentForSmallBodyParts() const {
    return 0.0f;
}

float UTWDDamageType::GetGrappleHandStruggleDamageFraction() const {
    return 0.0f;
}

float UTWDDamageType::GetDistanceForward() const {
    return 0.0f;
}

EWoundType UTWDDamageType::GetDeathBlowWoundType() const {
    return EWoundType::None;
}

FRVector UTWDDamageType::GetDeathBlowWoundDiameter() const {
    return FRVector{};
}

FVector2D UTWDDamageType::GetDeathBlowSplashRatio() const {
    return FVector2D{};
}

float UTWDDamageType::GetDeathBlowMinWoundSize() const {
    return 0.0f;
}

float UTWDDamageType::GetDeathBlowDistanceForward() const {
    return 0.0f;
}

float UTWDDamageType::GetDeathblowDamageImpulse() const {
    return 0.0f;
}

bool UTWDDamageType::CausesHitReactionOnZeroDamage() const {
    return false;
}

UTWDDamageType::UTWDDamageType() {
    this->bUseDeathBlowWounds = false;
    this->DistanceForward = 10.00f;
    this->MinWoundSize = 1.00f;
    this->MaxDentForSmallBodyParts = 1.00f;
    this->DeathBlowDistanceForward = 10.00f;
    this->DeathBlowMinWoundSize = 1.00f;
    this->GrappleHandStruggleDamageFraction = 1.00f;
    this->PushBackDistance = 0.00f;
    this->PushBackTime = 0.25f;
    this->PushBackThreshold = 0.00f;
    this->HitReactType = EHitReactType::Light;
    this->bCauseHitReactionOnZeroDamage = false;
    this->WoundType = EWoundType::None;
    this->DeathBlowWoundType = EWoundType::None;
    this->DeathblowDamageImpulse = 0.00f;
    this->DeathblowDamageImpulseNonVRScale = 1.00f;
}

