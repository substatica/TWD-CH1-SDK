#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SDICurvedWedgeGeometry.h"
#include "UObject/NoExportTypes.h"
#include "SDIStructuresCurvedWedgeGeometryLocationDynamicDelegateDelegate.generated.h"

class AActor;
class UPrimitiveComponent;
class UObject;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_EightParams(FSDIStructuresCurvedWedgeGeometryLocationDynamicDelegate, const AActor*, Actor, const UPrimitiveComponent*, PrimComp, const AActor*, Searcher, const UObject*, SearchData, const FTransform&, SearchTransform, const FSDICurvedWedgeGeometry&, SearchWedge, bool, bUseClosestLocation, FVector&, RetVal);

