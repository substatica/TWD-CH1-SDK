#pragma once
#include "CoreMinimal.h"
#include "InventoryReceivedDelegate.generated.h"

class ASDIInventoryActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FInventoryReceived, ASDIInventoryActor*, Inventory);

