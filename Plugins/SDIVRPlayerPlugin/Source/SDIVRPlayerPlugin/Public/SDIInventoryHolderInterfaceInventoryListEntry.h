#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RIntExp.h"
#include "SDIInventoryHolderInterfaceInventoryListEntry.generated.h"

class ASDIInventoryActor;

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIInventoryHolderInterfaceInventoryListEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ASDIInventoryActor> InventoryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRIntExp Count;
    
    FSDIInventoryHolderInterfaceInventoryListEntry();
};

