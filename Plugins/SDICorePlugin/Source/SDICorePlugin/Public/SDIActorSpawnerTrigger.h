#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/TriggerVolume.h"
#include "SpawnerTriggerEvent.h"
#include "SDIActorSpawnerTrigger.generated.h"

class ASDIActorSpawnerNetwork;
class AActor;

UCLASS()
class SDICOREPLUGIN_API ASDIActorSpawnerTrigger : public ATriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ASDIActorSpawnerNetwork* SpawnNetwork;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<AActor>> ActorsThatCanTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSpawnerTriggerEvent OnOverlapBeginEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSpawnerTriggerEvent OnOverlapEndEvent;
    
    ASDIActorSpawnerTrigger();
protected:
    UFUNCTION()
    void OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActors);
    
    UFUNCTION()
    void OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActors);
    
};

