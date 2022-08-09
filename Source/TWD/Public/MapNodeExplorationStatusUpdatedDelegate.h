#pragma once
#include "CoreMinimal.h"
#include "MapNodeExplorationStatusUpdatedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapNodeExplorationStatusUpdated, int32, NodeIndex);

