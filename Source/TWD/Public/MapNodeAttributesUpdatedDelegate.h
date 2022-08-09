#pragma once
#include "CoreMinimal.h"
#include "MapNodeAttributesUpdatedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapNodeAttributesUpdated, int32, NodeIndex);

