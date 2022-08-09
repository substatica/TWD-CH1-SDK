#include "SDICoreAttributeComponentSettings.h"

FSDICoreAttributeComponentSettings::FSDICoreAttributeComponentSettings() {
    this->InitialValue = 0;
    this->MaxValue = 0;
    this->MaxBoost = 0;
    this->bRegenEnabled = false;
    this->bAllowRegenFromZero = false;
    this->RegenDelay = 0.00f;
    this->RegenRate = 0.00f;
    this->RegenPercent = 0.00f;
    this->RegenMinPerInterval = 0;
}

