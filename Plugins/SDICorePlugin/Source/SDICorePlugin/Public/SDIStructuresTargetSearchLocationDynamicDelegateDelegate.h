#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDITransformCollisionShape.h"
#include "SDIStructuresTargetSearchLocationDynamicDelegateDelegate.generated.h"

class AActor;
class UPrimitiveComponent;
class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_NineParams(FSDIStructuresTargetSearchLocationDynamicDelegate, const AActor*, Actor, const UPrimitiveComponent*, PrimComp, const AActor*, Searcher, const UObject*, SearchData, const FTransform&, SearchTransform, const FSDITransformCollisionShape&, InnerShape, const FSDITransformCollisionShape&, OuterShape, bool, bUseClosestLocation, FVector&, RetVal);

