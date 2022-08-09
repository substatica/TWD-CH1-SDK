#pragma once
#include "CoreMinimal.h"
#include "InteractiveViewTickDelegate.generated.h"

class UInteractiveViewComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInteractiveViewTick, UInteractiveViewComponent*, TWDInteractiveViewComponent, const float, ViewQuantity);

