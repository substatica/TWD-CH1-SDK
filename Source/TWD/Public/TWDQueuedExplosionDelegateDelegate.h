#pragma once
#include "CoreMinimal.h"
#include "TWDQueuedExplosionDelegateDelegate.generated.h"

class AController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FTWDQueuedExplosionDelegate, AController*, EventInstigator);

