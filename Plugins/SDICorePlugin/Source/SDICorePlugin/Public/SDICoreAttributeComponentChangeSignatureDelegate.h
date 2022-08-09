#pragma once
#include "CoreMinimal.h"
#include "SDICoreAttributeComponentChangeSignatureDelegate.generated.h"

class USDICoreAttributeComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSDICoreAttributeComponentChangeSignature, USDICoreAttributeComponent*, Attr, int32, Previous, int32, Current);

