#include "SDIAnimNode_TwoBoneIK.h"

FSDIAnimNode_TwoBoneIK::FSDIAnimNode_TwoBoneIK() {
    this->MaxExtensionPct = 0.00f;
    this->bAllowStretching = false;
    this->StartStretchRatio = 0.00f;
    this->MaxStretchScale = 0.00f;
    this->bTakeRotationFromEffectorSpace = false;
    this->bMaintainEffectorRelRot = false;
    this->EffectorLocationSpace = BCS_WorldSpace;
    this->JointTargetLocationSpace = BCS_WorldSpace;
    this->bAllowTwist = false;
}

