#include "SDISpreadSettings.h"

FSDISpreadSettings::FSDISpreadSettings() {
    this->SpreadPattern = ESDISpreadPattern::Random;
    this->SpreadIncPerRoundFired = 0.00f;
    this->SpreadIncPerShot = 0.00f;
    this->MaxShotSpread = 0.00f;
    this->FixedSpreadMultiplier = 0.00f;
    this->bReverse = false;
}

