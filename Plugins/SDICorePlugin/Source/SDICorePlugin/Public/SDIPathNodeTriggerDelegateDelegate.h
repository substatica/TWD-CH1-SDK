#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SDIPathNodeTriggerDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSDIPathNodeTriggerDelegate, const FString&, PathNodeName, FVector, PathNodeLoc, AActor*, AIActor);

