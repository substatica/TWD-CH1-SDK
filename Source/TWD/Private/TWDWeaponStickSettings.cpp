#include "TWDWeaponStickSettings.h"

FTWDWeaponStickSettings::FTWDWeaponStickSettings() {
    this->bHeldStick = false;
    this->bThrownStick = false;
    this->bLaunchedStick = false;
    this->StickAngleDeg = 0.00f;
    this->ThrownStickAngleDeg = 0.00f;
    this->LaunchedStickAngleDeg = 0.00f;
    this->HeldStickMinVelocity = 0.00f;
    this->ThrownStickMinVelocity = 0.00f;
    this->LaunchedStickMinVelocity = 0.00f;
    this->bStickOrientToNormal = false;
    this->bThrownStickOrientToNormal = false;
    this->bLaunchedStickOrientToNormal = false;
    this->PullStaminaCost = 0.00f;
    this->bDurabilityCanBreakOnStick = false;
    this->bDurabilityCanBreakOnPull = false;
}

