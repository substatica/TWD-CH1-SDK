#include "TWDWeaponShoveComponent.h"

class AActor;

void UTWDWeaponShoveComponent::OnShoveActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& HitInfo) {
}

UTWDWeaponShoveComponent::UTWDWeaponShoveComponent() {
    this->bCanShove = false;
    this->bShoveRequireTwoHands = true;
    this->bCanShoveWhenWinded = false;
    this->ShoveMinPenetration = 8.00f;
    this->ShoveCooldown = 1.00f;
    this->ShoveStaminaCost = 0.00f;
    this->ShoveDurabilityCost = 0.00f;
    this->bDurabilityCanBreakOnShove = false;
}

