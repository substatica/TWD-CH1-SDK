#pragma once
#include "CoreMinimal.h"
#include "SDICorePlayerControllerInputDeviceChangedSignatureDelegate.generated.h"

class ASDICorePlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSDICorePlayerControllerInputDeviceChangedSignature, ASDICorePlayerController*, PC, bool, bIsUsingGamePad);

