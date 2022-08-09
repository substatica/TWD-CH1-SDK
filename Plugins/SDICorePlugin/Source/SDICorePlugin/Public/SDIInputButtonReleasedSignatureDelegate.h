#pragma once
#include "CoreMinimal.h"
#include "SDIInputButtonReleasedSignatureDelegate.generated.h"

class UObject;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FSDIInputButtonReleasedSignature, UObject*, Owner, float, PressedTime);

