#pragma once
#include "CoreMinimal.h"
#include "TWDQueuedExplosionDelegateDelegate.h"
#include "TWDQueuedExplosion.generated.h"

class AController;

USTRUCT(BlueprintType)
struct FTWDQueuedExplosion {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AController> EventInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTWDQueuedExplosionDelegate Delegate;
    
    TWD_API FTWDQueuedExplosion();
};

