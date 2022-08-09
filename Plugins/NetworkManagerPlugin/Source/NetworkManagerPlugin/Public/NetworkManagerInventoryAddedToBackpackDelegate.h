#pragma once
#include "CoreMinimal.h"
#include "NetworkManagerInventoryAddedToBackpackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNetworkManagerInventoryAddedToBackpack, bool, success);

