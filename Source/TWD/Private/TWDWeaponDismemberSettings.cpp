#include "TWDWeaponDismemberSettings.h"

FTWDWeaponDismemberSettings::FTWDWeaponDismemberSettings() {
    this->bHeldDismember = false;
    this->bThrownDismember = false;
    this->bLaunchedDismember = false;
    this->MinImpactVelocity = 0.00f;
    this->LimbSocketAxis = EAxis::None;
    this->bLimbSocketAxisZIsWorld = false;
    this->MaxDistanceAlongLimb = 0.00f;
    this->MaxFlatAngleDeg = 0.00f;
    this->DismemberHoldTime = 0.00f;
    this->DismemberInterpTime = 0.00f;
    this->DismemberInterpBlend = EAlphaBlendOption::Linear;
    this->DismemberInterpBlendCustomCurve = NULL;
    this->DismemberFollowThroughForceMultiplier = 0.00f;
    this->StaminaCost = 0.00f;
    this->bDurabilityCanBreakOnDismember = false;
    this->bCanDismemberOffscreen = false;
    this->OnscreenHorizontalAngleDeg = 0.00f;
    this->OnscreenVerticalAngleDeg = 0.00f;
    this->bHeldDismemberUseTimeDilation = false;
    this->bThrownDismemberUseTimeDilation = false;
    this->bLaunchedDismemberUseTimeDilation = false;
    this->bNonVRHeldDismemberUseTimeDilation = false;
    this->bNonVRHeldDismemberWeakpointUseTimeDilation = false;
    this->bNonVRThrownDismemberUseTimeDilation = false;
    this->bNonVRLaunchedDismemberUseTimeDilation = false;
    this->bAdvancedDismemberOnly = false;
    this->NonVRHeldDismemberDelay = 0.00f;
    this->NonVRThrownDismemberDelay = 0.00f;
    this->NonVRLaunchedDismemberDelay = 0.00f;
    this->NonVRHeldDismemberSplayDuration = 0.00f;
    this->PreSeverWoundDistanceForward = 0.00f;
}

