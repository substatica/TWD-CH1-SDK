#pragma once
#include "CoreMinimal.h"
#include "NetworkManagerBackendVersionsUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNetworkManagerBackendVersionsUpdated, bool, success, const TArray<FString>&, Versions);

