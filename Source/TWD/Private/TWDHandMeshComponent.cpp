#include "TWDHandMeshComponent.h"

UTWDHandMeshComponent::UTWDHandMeshComponent() {
    this->StabDragLocationPIDScalar = 2.00f;
    this->WindedLocationPIDScalar = 1.00f;
    this->WindedRotationPIDScalar = 1.00f;
    this->HoldingDraggedRagdollMinMass = 10.00f;
    this->HoldingDraggedRagdollAngularDamping = 30.00f;
    this->HoldingDraggedRagdollLinearDamping = 10.00f;
    this->bLastHoldingDraggedRagdollState = false;
    this->CachedPreHoldingDraggedRagdollMass = -1.00f;
    this->CachedPreHoldingDraggedRagdollAngularDamping = -1.00f;
    this->CachedPreHoldingDraggedRagdollLinearDamping = -1.00f;
}

