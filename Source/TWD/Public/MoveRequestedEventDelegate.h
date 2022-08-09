#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MoveRequestedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FMoveRequestedEvent, FVector, Destination, bool, bUsePathfinding, bool, bAllowPartialPath, bool, bProjectGoalOnNavigation, float, AcceptanceRadius);

