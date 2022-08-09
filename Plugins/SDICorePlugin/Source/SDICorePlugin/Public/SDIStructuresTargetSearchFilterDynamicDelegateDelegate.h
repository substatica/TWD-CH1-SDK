#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SDITransformCollisionShape.h"
#include "SDIStructuresTargetSearchFilterDynamicDelegateDelegate.generated.h"

class AActor;
class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_SevenParams(FSDIStructuresTargetSearchFilterDynamicDelegate, const AActor*, Actor, const AActor*, Searcher, const UObject*, SearchData, const FTransform&, SearchTransform, const FSDITransformCollisionShape&, InnerShape, const FSDITransformCollisionShape&, OuterShape, bool&, bRetVal);

