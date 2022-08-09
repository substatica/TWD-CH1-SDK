#pragma once
#include "CoreMinimal.h"
#include "NetworkManagerInventoryRemovedFromBackpackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNetworkManagerInventoryRemovedFromBackpack, bool, success);

