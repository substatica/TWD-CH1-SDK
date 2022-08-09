#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TWDInteractiveHighlightActorPool.generated.h"

class ATWDInteractiveHighlightActor;

USTRUCT(BlueprintType)
struct FTWDInteractiveHighlightActorPool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATWDInteractiveHighlightActor> HighlightActorClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 InitialPoolSize;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<ATWDInteractiveHighlightActor*> Pool;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<ATWDInteractiveHighlightActor*> InUse;
    
    TWD_API FTWDInteractiveHighlightActorPool();
};

