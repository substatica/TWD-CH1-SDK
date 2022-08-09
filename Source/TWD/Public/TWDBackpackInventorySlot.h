#pragma once
#include "CoreMinimal.h"
#include "TWDPlayerInventorySlot.h"
#include "TWDBackpackInventorySlot.generated.h"

UCLASS(Blueprintable)
class ATWDBackpackInventorySlot : public ATWDPlayerInventorySlot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MeshElementIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AuxMeshElementIndex;
    
public:
    ATWDBackpackInventorySlot();
};

