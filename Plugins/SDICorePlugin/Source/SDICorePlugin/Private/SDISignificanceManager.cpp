#include "SDISignificanceManager.h"

USDISignificanceManager::USDISignificanceManager() {
    this->BinSizeConfigs.AddDefaulted(20);
    this->BinChangeRateLimitTime = 1.00f;
}

