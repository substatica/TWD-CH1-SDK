#include "NetworkManagerGameInstance.h"

class UNetworkManager;

void UNetworkManagerGameInstance::ShowBuildVersion() {
}

UNetworkManager* UNetworkManagerGameInstance::GetNetworkManager() const {
    return NULL;
}

UNetworkManagerGameInstance::UNetworkManagerGameInstance() {
    this->NetworkManagerInst = NULL;
}

