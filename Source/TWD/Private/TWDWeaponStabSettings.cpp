#include "TWDWeaponStabSettings.h"

FTWDWeaponStabSettings::FTWDWeaponStabSettings() {
    this->bCanStab = false;
    this->StabPushMotionMultiplier = 0.00f;
    this->StabPullMotionMultiplier = 0.00f;
    this->StabHeadHeldPullOutStrengthFactorMultiplier = 0.00f;
    this->StabAngleDeg = 0.00f;
    this->ThrownStabAngleDeg = 0.00f;
    this->LaunchedStabAngleDeg = 0.00f;
    this->StabBrainMaxAngleDeg = 0.00f;
    this->StabWiggleAngleDeg = 0.00f;
    this->bStabAllowWiggleAfterStart = false;
    this->StabWiggleSpeedDeg = 0.00f;
    this->StabPushMovementMaxOffsetAngleDeg = 0.00f;
    this->bStabOrientToNormal = false;
    this->bThrownStabOrientToNormal = false;
    this->bLaunchedStabOrientToNormal = false;
    this->StabCompleteHoldTime = 0.00f;
    this->RestabDelay = 0.00f;
    this->StabRangedGrabDelay = 0.00f;
    this->StabActiveRagdollStrengthMultiplyer = 0.00f;
    this->StabPullOutStrengthFactor = 0.00f;
    this->StabStartStaminaCost = 0.00f;
    this->StabCompleteStaminaCost = 0.00f;
    this->StabPullStaminaCost = 0.00f;
    this->bDurabilityCanBreakOnStabStart = false;
    this->bDurabilityCanBreakOnStabComplete = false;
    this->bDurabilityCanBreakOnStabPull = false;
    this->bCanStabOffscreen = false;
    this->OnscreenHorizontalAngleDeg = 0.00f;
    this->OnscreenVerticalAngleDeg = 0.00f;
    this->bStabUseTimeDilation = false;
    this->bThrownStabUseTimeDilation = false;
    this->bLaunchedStabUseTimeDilation = false;
    this->bNonVRStabUseTimeDilation = false;
    this->bNonVRStabWeakpointUseTimeDilation = false;
    this->bNonVRThrownStabUseTimeDilation = false;
    this->bNonVRLaunchedStabUseTimeDilation = false;
}

