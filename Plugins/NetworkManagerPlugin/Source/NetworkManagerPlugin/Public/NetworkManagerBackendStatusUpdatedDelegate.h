#pragma once
#include "CoreMinimal.h"
#include "NetworkManagerBackendStatusUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNetworkManagerBackendStatusUpdated, bool, success, const FString&, Status);

