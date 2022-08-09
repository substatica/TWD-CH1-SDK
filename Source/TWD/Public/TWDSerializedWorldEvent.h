#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TWDSerializedWorldEvent.generated.h"

class UTWDWorldEvent;

USTRUCT(BlueprintType)
struct FTWDSerializedWorldEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTWDWorldEvent> WorldEventClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPendingNotification;
    
    TWD_API FTWDSerializedWorldEvent();
};

