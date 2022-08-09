#pragma once
#include "CoreMinimal.h"
#include "SDITransformCollisionShape.h"
#include "SDITargetSearchEntry.h"
#include "UObject/NoExportTypes.h"
#include "SDIStructuresTargetSearchBetterThanDynamicDelegateDelegate.generated.h"

class AActor;
class UObject;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_EightParams(FSDIStructuresTargetSearchBetterThanDynamicDelegate, const FSDITargetSearchEntry&, Entry, const FSDITargetSearchEntry&, Other, const AActor*, Searcher, const UObject*, SearchData, const FTransform&, SearchTransform, const FSDITransformCollisionShape&, InnerShape, const FSDITransformCollisionShape&, OuterShape, bool&, bRetVal);

