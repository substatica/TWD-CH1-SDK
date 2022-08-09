#include "NetworkManagerGameMode.h"

ANetworkManagerGameMode::ANetworkManagerGameMode() {
    this->bSDICallbackSucceeded = false;
    this->PendingGameServerUpdate = false;
    this->PendingGameServerStatus = 1;
    this->PendingGameServerPort = -1;
    this->bIsRunningOnAWS = false;
}

