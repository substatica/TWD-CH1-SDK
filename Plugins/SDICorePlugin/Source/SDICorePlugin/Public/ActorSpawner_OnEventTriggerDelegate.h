#pragma once
#include "CoreMinimal.h"
#include "SpawnerTriggerEvent.h"
#include "ActorSpawner_OnEventTriggerDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FActorSpawner_OnEventTrigger, FSpawnerTriggerEvent, EventInfo, TArray<AActor*>, SpawnedActors);

