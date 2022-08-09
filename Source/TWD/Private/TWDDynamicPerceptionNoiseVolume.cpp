#include "TWDDynamicPerceptionNoiseVolume.h"

ADEPRECATED_TWDDynamicPerceptionNoiseVolume::ADEPRECATED_TWDDynamicPerceptionNoiseVolume() {
    this->BaseNoiseRadiusMultiplier = 0.50f;
    this->BaseNoiseRadiusAdjustment = 0.00f;
    this->NoiseRadiusCurve = NULL;
    this->bFalloffIsRelative = false;
    this->FalloffStartRadius = -1.00f;
    this->FalloffExp = 1.00f;
    this->FalloffCurve = NULL;
}

