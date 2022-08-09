#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TWDWorldEvent.h"
#include "SpawnTagCommand.h"
#include "TWDSpawnEvent.generated.h"

class ASDIInventoryActor;

UCLASS()
class TWD_API UTWDSpawnEvent : public UTWDWorldEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bOverrideSingleCommands;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bOverrideAllCommands;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCheckInventoryToAutoComplete;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSubclassOf<ASDIInventoryActor>> InventoryToCheck;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSpawnTagCommand> SpawnCommands;
    
    UTWDSpawnEvent();
};

