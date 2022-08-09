#include "SDITimestampInputButton.h"

FSDITimestampInputButton::FSDITimestampInputButton() {
    this->bAllowTimeDilation = false;
    this->PressedTimestamp = 0.00f;
    this->ReleasedTimestamp = 0.00f;
}

