#pragma once
#include "CoreMinimal.h"
#include "TWDWorldEvent.h"
#include "TWDHordeEvent.generated.h"

UCLASS()
class TWD_API UTWDHordeEvent : public UTWDWorldEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HordeTimerMultiplier;
    
    UTWDHordeEvent();
};

