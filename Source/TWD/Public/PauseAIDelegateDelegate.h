#pragma once
#include "CoreMinimal.h"
#include "PauseAIDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPauseAIDelegate, bool, bPause);

