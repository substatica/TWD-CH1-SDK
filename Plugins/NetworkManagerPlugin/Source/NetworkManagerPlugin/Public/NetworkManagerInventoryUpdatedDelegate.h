#pragma once
#include "CoreMinimal.h"
#include "InventoryItemSDI.h"
#include "NetworkManagerInventoryUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNetworkManagerInventoryUpdated, const TArray<FInventoryItemSDI>&, items);

