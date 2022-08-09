#pragma once
#include "CoreMinimal.h"
#include "TWDWorldEvent.h"
#include "SpawnScenarioCommand.h"
#include "TWDScenarioEvent.generated.h"

UCLASS()
class TWD_API UTWDScenarioEvent : public UTWDWorldEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSpawnScenarioCommand ScenarioCommand;
    
    UTWDScenarioEvent();
};

