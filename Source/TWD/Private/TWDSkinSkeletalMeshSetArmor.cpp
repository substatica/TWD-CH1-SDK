#include "TWDSkinSkeletalMeshSetArmor.h"

FTWDSkinSkeletalMeshSetArmor::FTWDSkinSkeletalMeshSetArmor() {
    this->ArmorAmount = 0;
    this->BreakFXDestructibleMeshLifespan = 0.00f;
    this->BreakFXDestructibleMeshImpulse = 0.00f;
    this->BreakFXSound = NULL;
    this->PreloadedBreakFXParticle = NULL;
    this->PreloadedBreakFXDestructibleMesh = NULL;
    this->DestroyedTimestamp = 0.00f;
}

