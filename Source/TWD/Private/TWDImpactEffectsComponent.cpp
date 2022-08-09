#include "TWDImpactEffectsComponent.h"

UTWDImpactEffectsComponent::UTWDImpactEffectsComponent() {
    this->ImpactNoiseRadiusScale = 1.00f;
    this->ImpactNoiseVolumeScale = 1.00f;
    this->ImpactNoiseVelocityResolution = 500.00f;
    this->HeldActorMinImpactVelocityScale = 2.00f;
    this->HeldActorMinImpactIntervalScale = 5.00f;
    this->CooldownTimer = 3.00f;
    this->IgnoreImpactsAtLevelStartup = 7.00f;
    this->LastReportNoiseEventTimestamp = 0.00f;
    this->NoiseEventAllowance = 3;
    this->NoiseEventCount = 0;
}

