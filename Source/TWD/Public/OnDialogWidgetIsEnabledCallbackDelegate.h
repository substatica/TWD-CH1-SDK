#pragma once
#include "CoreMinimal.h"
#include "OnDialogWidgetIsEnabledCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDialogWidgetIsEnabledCallback, bool, bEnabled);

