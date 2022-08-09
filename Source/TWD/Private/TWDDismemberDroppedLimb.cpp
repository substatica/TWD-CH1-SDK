#include "TWDDismemberDroppedLimb.h"
#include "Components/SkeletalMeshComponent.h"

void ATWDDismemberDroppedLimb::SelfDestructionCheck() {
}

void ATWDDismemberDroppedLimb::MeshOnPhysicsStateChange() {
}

bool ATWDDismemberDroppedLimb::CanBeDestroyed(bool bCheckStabStuckWeapons) const {
    return false;
}

ATWDDismemberDroppedLimb::ATWDDismemberDroppedLimb() {
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->bAllowDestructionInHub = true;
    this->DestructionMinDistanceFromPlayer = 1024.00f;
    this->DestructionMinTimeSinceLastRendered = 3.00f;
    this->AnimInstanceClass = NULL;
    this->SplashColorTexture = NULL;
    this->SplashNormalTexture = NULL;
    this->MeatColorTexture = NULL;
    this->MeatNormalTexture = NULL;
    this->CapColorTexture = NULL;
    this->CapNormalTexture = NULL;
    this->WoundSeverityScale = 1.00f;
    this->StabLoopParticleSystem = NULL;
    this->StabMovementParticleSystem = NULL;
    this->StabMeleeDurabilityModifier = 1.00f;
}

