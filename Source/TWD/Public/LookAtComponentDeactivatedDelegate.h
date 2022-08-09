#pragma once
#include "CoreMinimal.h"
#include "LookAtComponentDeactivatedDelegate.generated.h"

class ATWDPlayerController;
class UCameraComponent;
class UTWDLookAtComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FLookAtComponentDeactivated, const ATWDPlayerController*, PlayerController, const UCameraComponent*, Camera, const UTWDLookAtComponent*, LookAtComponent);

