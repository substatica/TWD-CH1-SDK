#pragma once
#include "CoreMinimal.h"
#include "SDIInputButtonReleasedSignatureDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FSDIInputButtonReleasedSignature, UObject*, Owner, float, PressedTime);

