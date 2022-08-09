#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TWDInteractiveHighlightActorPool.generated.h"

class ATWDInteractiveHighlightActor;

USTRUCT(BlueprintType)
struct FTWDInteractiveHighlightActorPool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATWDInteractiveHighlightActor> HighlightActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialPoolSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ATWDInteractiveHighlightActor*> Pool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ATWDInteractiveHighlightActor*> InUse;
    
    TWD_API FTWDInteractiveHighlightActorPool();
};

