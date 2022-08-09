#include "TWDWaypointSettings.h"

FTWDWaypointSettings::FTWDWaypointSettings() {
    this->Waypoint = NULL;
    this->MovementMode = ETWDWaypointMovementMode::Direct;
    this->ThreatRadius = 0.00f;
    this->BaseGroundMovementSpeedType = EAIBaseGroundMovementSpeedType::Walk;
    this->MovementSpeed = 0.00f;
    this->Stance = ECharacterStance::Idle;
    this->bClearHistoryOnDeparture = false;
}

