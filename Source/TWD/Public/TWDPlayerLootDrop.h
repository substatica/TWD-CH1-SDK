#pragma once
#include "CoreMinimal.h"
#include "TWDInventoryHolderActor.h"
#include "TWDPlayerLootDrop.generated.h"

class AActor;

UCLASS(Blueprintable)
class ATWDPlayerLootDrop : public ATWDInventoryHolderActor {
    GENERATED_BODY()
public:
    ATWDPlayerLootDrop();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GiveContentsTo(AActor* NewOwner);
    
};

