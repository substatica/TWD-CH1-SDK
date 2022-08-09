#pragma once
#include "CoreMinimal.h"
#include "InventoryGivenDelegate.generated.h"

class ASDIInventoryActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FInventoryGiven, ASDIInventoryActor*, Inventory);

