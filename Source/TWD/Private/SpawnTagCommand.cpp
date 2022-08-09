#include "SpawnTagCommand.h"

FSpawnTagCommand::FSpawnTagCommand() {
    this->SpawnCount = 0;
    this->bUseSpawnCurve = false;
    this->SpawnCurveOverride = NULL;
    this->bLimitToPlayerProximity = false;
    this->bDoNotSpawnInLineOfSight = false;
    this->bSpawnEvenlyAroundPlayer = false;
}

