#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TWDSerializedWorldEvent.generated.h"

class UTWDWorldEvent;

USTRUCT(BlueprintType)
struct FTWDSerializedWorldEvent {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSubclassOf<UTWDWorldEvent> WorldEventClass;
    
    UPROPERTY()
    int32 CurrentDuration;
    
    UPROPERTY()
    bool bPendingNotification;
    
    TWD_API FTWDSerializedWorldEvent();
};

