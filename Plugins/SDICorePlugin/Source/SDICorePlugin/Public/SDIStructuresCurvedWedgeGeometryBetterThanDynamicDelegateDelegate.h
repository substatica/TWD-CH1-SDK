#pragma once
#include "CoreMinimal.h"
#include "SDITargetSearchEntry.h"
#include "UObject/NoExportTypes.h"
#include "SDICurvedWedgeGeometry.h"
#include "SDIStructuresCurvedWedgeGeometryBetterThanDynamicDelegateDelegate.generated.h"

class AActor;
class UObject;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_SevenParams(FSDIStructuresCurvedWedgeGeometryBetterThanDynamicDelegate, const FSDITargetSearchEntry&, Entry, const FSDITargetSearchEntry&, Other, const AActor*, Searcher, const UObject*, SearchData, const FTransform&, SearchTransform, const FSDICurvedWedgeGeometry&, SearchWedge, bool&, bRetVal);

