#include "SDIPlayerHandMove.h"

FSDIPlayerHandMove::FSDIPlayerHandMove() {
    this->MinVal = 0.00f;
    this->MaxVal = 0.00f;
    this->Factor = 0.00f;
    this->FactorExp = 0.00f;
    this->AvgTime = 0.00f;
    this->MinOffsetDistance = 0.00f;
    this->BlendLerp = 0.00f;
    this->bUseAcc = false;
    this->bCheckAgainstOffsetDirection = false;
    this->NonVRInputButtonTime = 0.00f;
}

