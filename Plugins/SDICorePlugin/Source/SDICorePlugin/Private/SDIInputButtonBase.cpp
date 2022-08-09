#include "SDIInputButtonBase.h"

FSDIInputButtonBase::FSDIInputButtonBase() {
    this->DoubleTapPressTime = 0.00f;
    this->DoubleTapReleaseTime = 0.00f;
    this->LongHoldTime = 0.00f;
    this->bHeld = false;
    this->bDoubleTap = false;
    this->DoubleTapPressedTimer = 0.00f;
}

