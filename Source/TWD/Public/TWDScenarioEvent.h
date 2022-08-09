#pragma once
#include "CoreMinimal.h"
#include "TWDWorldEvent.h"
#include "SpawnScenarioCommand.h"
#include "TWDScenarioEvent.generated.h"

UCLASS(Blueprintable)
class TWD_API UTWDScenarioEvent : public UTWDWorldEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnScenarioCommand ScenarioCommand;
    
    UTWDScenarioEvent();
};

