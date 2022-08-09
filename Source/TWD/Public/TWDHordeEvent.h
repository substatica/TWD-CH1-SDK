#pragma once
#include "CoreMinimal.h"
#include "TWDWorldEvent.h"
#include "TWDHordeEvent.generated.h"

UCLASS(Blueprintable)
class TWD_API UTWDHordeEvent : public UTWDWorldEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HordeTimerMultiplier;
    
    UTWDHordeEvent();
};

