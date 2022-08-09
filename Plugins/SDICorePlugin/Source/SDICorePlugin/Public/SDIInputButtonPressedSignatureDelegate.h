#pragma once
#include "CoreMinimal.h"
#include "SDIInputButtonPressedSignatureDelegate.generated.h"

class UObject;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_ThreeParams(FSDIInputButtonPressedSignature, UObject*, Owner, float, ReleasedTime, bool, bDoubleTap);

