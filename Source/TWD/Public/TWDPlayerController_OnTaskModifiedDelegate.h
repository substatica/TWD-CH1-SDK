#pragma once
#include "CoreMinimal.h"
#include "TWDPlayerController_OnTaskModifiedDelegate.generated.h"

class UTWDTask;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTWDPlayerController_OnTaskModified, UTWDTask*, Task);

