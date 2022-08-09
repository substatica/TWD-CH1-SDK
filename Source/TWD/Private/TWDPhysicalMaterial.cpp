#include "TWDPhysicalMaterial.h"
#include "Templates/SubclassOf.h"

class UObject;
class UParticleSystem;
class AActor;

float UTWDPhysicalMaterial::GetObjectNoiseMultiplier() const {
    return 0.0f;
}

UObject* UTWDPhysicalMaterial::GetDefaultGripSound() const {
    return NULL;
}

UObject* UTWDPhysicalMaterial::GetDefaultFootstepSound() const {
    return NULL;
}

float UTWDPhysicalMaterial::GetCharacterNoiseMultiplier() const {
    return 0.0f;
}

UObject* UTWDPhysicalMaterial::GetBulletSound(UClass* BulletClass) const {
    return NULL;
}

UParticleSystem* UTWDPhysicalMaterial::GetBulletParticle(bool& bOrientUsingImpactVelocity, UClass* BulletClass) const {
    return NULL;
}

TSubclassOf<AActor> UTWDPhysicalMaterial::GetBulletDecal(UClass* BulletClass) const {
    return NULL;
}

UTWDPhysicalMaterial::UTWDPhysicalMaterial() {
    this->DefaultBulletParticle = NULL;
    this->DefaultBulletSound = NULL;
    this->DefaultBulletDecal = NULL;
    this->bBulletOrientUsingImpactVelocity = false;
    this->DefaultFootstepSound = NULL;
    this->DefaultGripSound = NULL;
    this->CharacterNoiseMultiplier = 1.00f;
    this->ObjectNoiseMultiplier = 1.00f;
}

