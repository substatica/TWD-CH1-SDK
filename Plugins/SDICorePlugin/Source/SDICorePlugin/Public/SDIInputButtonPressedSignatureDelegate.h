#pragma once
#include "CoreMinimal.h"
#include "SDIInputButtonPressedSignatureDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FSDIInputButtonPressedSignature, UObject*, Owner, float, ReleasedTime, bool, bDoubleTap);

