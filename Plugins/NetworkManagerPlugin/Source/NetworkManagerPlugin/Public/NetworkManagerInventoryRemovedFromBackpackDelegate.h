#pragma once
#include "CoreMinimal.h"
#include "NetworkManagerInventoryRemovedFromBackpackDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNetworkManagerInventoryRemovedFromBackpack, bool, success);

