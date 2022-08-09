#pragma once
#include "CoreMinimal.h"
#include "HordeTimerChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHordeTimerChanged, float, TimerLength);

