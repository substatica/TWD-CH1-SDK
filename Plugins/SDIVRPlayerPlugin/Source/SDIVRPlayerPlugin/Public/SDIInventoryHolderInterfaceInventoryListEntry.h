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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASDIInventoryActor> InventoryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRIntExp Count;
    
    FSDIInventoryHolderInterfaceInventoryListEntry();
};

