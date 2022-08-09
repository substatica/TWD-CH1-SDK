#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TWDUniqueEntitlementItemID.h"
#include "SDIActorSpawner.h"
#include "TWDOnlineItemSpawner.generated.h"

class AActor;

UCLASS()
class TWD_API ATWDOnlineItemSpawner : public ASDIActorSpawner {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTWDUniqueEntitlementItemID OnlineItemID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AActor> ItemToSpawn;
    
public:
    ATWDOnlineItemSpawner();
protected:
    UFUNCTION()
    void SpawnActor();
    
};

