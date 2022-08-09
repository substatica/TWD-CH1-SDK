#pragma once
#include "CoreMinimal.h"
#include "TWDPlayerInventorySlot.h"
#include "TWDBackpackInventorySlot.generated.h"

UCLASS()
class ATWDBackpackInventorySlot : public ATWDPlayerInventorySlot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MeshElementIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 AuxMeshElementIndex;
    
public:
    ATWDBackpackInventorySlot();
};

