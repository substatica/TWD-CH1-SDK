#pragma once
#include "CoreMinimal.h"
#include "TWDQueuedExplosionDelegateDelegate.h"
#include "TWDQueuedExplosion.generated.h"

class AController;

USTRUCT(BlueprintType)
struct FTWDQueuedExplosion {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TWeakObjectPtr<AController> EventInstigator;
    
    UPROPERTY(Transient)
    FTWDQueuedExplosionDelegate Delegate;
    
    TWD_API FTWDQueuedExplosion();
};

