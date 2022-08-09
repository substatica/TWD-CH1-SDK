#pragma once
#include "CoreMinimal.h"
#include "SDIInventoryHolderActor.h"
#include "TWDInteractiveHighlightInterface.h"
#include "TWDInventoryHolderActor.generated.h"

UCLASS()
class ATWDInventoryHolderActor : public ASDIInventoryHolderActor, public ITWDInteractiveHighlightInterface {
    GENERATED_BODY()
public:
    ATWDInventoryHolderActor();
    
    // Fix for true pure virtual functions not being implemented
};

