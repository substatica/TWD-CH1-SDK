#pragma once
#include "CoreMinimal.h"
#include "LookAtComponentActivatedDelegate.generated.h"

class ATWDPlayerController;
class UCameraComponent;
class UTWDLookAtComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FLookAtComponentActivated, const ATWDPlayerController*, PlayerController, const UCameraComponent*, Camera, const UTWDLookAtComponent*, LookAtComponent);

