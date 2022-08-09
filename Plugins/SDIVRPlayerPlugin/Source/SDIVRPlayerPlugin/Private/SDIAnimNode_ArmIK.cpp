#include "SDIAnimNode_ArmIK.h"

FSDIAnimNode_ArmIK::FSDIAnimNode_ArmIK() {
    this->Alpha = 0.00f;
    this->bHasArmsRootBone = false;
    this->bIgnoreTimeDilation = false;
    this->ForeArmTwistSwapThreshold = 0.00f;
    this->ElbowSideRotationDefaultDeg = 0.00f;
    this->ElbowSideRotationMaxDeg = 0.00f;
    this->ElbowSideRotationSideContribution = 0.00f;
    this->ElbowSideRotationSideExp = 0.00f;
    this->ElbowSideRotationUpContribution = 0.00f;
    this->ElbowSideRotationUpExp = 0.00f;
    this->ElbowSideRotationForwardContribution = 0.00f;
    this->ElbowSideRotationForwardExp = 0.00f;
    this->ElbowSideRotationForwardDownExp = 0.00f;
    this->ElbowSideRotationPalmUpExp = 0.00f;
    this->MaxExtensionPct = 0.00f;
    this->ActualAlpha = 0.00f;
    this->SideMultiplier = 0.00f;
    this->ActorCustomTimeDilation = 0.00f;
    this->RootIndex = 0;
    this->bInputsValid = false;
}

