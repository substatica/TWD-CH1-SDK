#pragma once
#include "CoreMinimal.h"
#include "NetworkManagerBackendVersionsUpdatedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNetworkManagerBackendVersionsUpdated, bool, success, const TArray<FString>&, Versions);

