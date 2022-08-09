#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InputCoreTypes.h"
#include "TWDSavedGrippedItemSpawner.generated.h"

class ASDIInventoryActor;

UCLASS()
class TWD_API ATWDSavedGrippedItemSpawner : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EControllerHand GripHand;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDisableGravity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSoftClassPtr<ASDIInventoryActor>> ProhibitedItems;
    
public:
    ATWDSavedGrippedItemSpawner();
protected:
    UFUNCTION()
    void SpawnSavedItem();
    
};

