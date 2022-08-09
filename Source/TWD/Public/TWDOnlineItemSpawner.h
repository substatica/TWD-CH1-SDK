#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TWDUniqueEntitlementItemID.h"
#include "SDIActorSpawner.h"
#include "TWDOnlineItemSpawner.generated.h"

class AActor;

UCLASS(Blueprintable)
class TWD_API ATWDOnlineItemSpawner : public ASDIActorSpawner {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDUniqueEntitlementItemID OnlineItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ItemToSpawn;
    
public:
    ATWDOnlineItemSpawner();
protected:
    UFUNCTION(BlueprintCallable)
    void SpawnActor();
    
};

