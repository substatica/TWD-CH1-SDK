#include "SDIAnimNode_FingerIK_Finger.h"

FSDIAnimNode_FingerIK_Finger::FSDIAnimNode_FingerIK_Finger() {
    this->Finger = ESDIHandFinger::Unknown;
    this->EndFingerLength = 0.00f;
    this->CollisionStep = 0.00f;
    this->FingerRadius = 0.00f;
    this->BlendWeightSpeed = 0.00f;
    this->BlendWeightMul = 0.00f;
    this->BlendWeightMulDir = 0.00f;
}

