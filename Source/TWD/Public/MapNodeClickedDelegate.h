#pragma once
#include "CoreMinimal.h"
#include "MapNodeClickedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapNodeClicked, int32, NodeClicked);

