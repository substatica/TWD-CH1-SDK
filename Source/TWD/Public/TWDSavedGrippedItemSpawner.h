#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "GameFramework/Actor.h"
#include "TWDSavedGrippedItemSpawner.generated.h"

class ASDIInventoryActor;

UCLASS(Blueprintable)
class TWD_API ATWDSavedGrippedItemSpawner : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControllerHand GripHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ASDIInventoryActor>> ProhibitedItems;
    
public:
    ATWDSavedGrippedItemSpawner();
protected:
    UFUNCTION(BlueprintCallable)
    void SpawnSavedItem();
    
};

