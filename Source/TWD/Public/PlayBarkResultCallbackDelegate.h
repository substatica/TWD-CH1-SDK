#pragma once
#include "CoreMinimal.h"
#include "PlayBarkResultCallbackDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FPlayBarkResultCallback, bool, bSucceeded);

