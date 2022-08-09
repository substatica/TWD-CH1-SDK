#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SDICurvedWedgeGeometry.h"
#include "SDIStructuresCurvedWedgeGeometryFilterDynamicDelegateDelegate.generated.h"

class AActor;
class UObject;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_SixParams(FSDIStructuresCurvedWedgeGeometryFilterDynamicDelegate, const AActor*, Actor, const AActor*, Searcher, const UObject*, SearchData, const FTransform&, SearchTransform, const FSDICurvedWedgeGeometry&, SearchWedge, bool&, bRetVal);

