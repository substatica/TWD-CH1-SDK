#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/TriggerVolume.h"
#include "SpawnerTriggerEvent.h"
#include "SDIActorSpawnerTrigger.generated.h"

class ASDIActorSpawnerNetwork;
class AActor;

UCLASS(Blueprintable)
class SDICOREPLUGIN_API ASDIActorSpawnerTrigger : public ATriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASDIActorSpawnerNetwork* SpawnNetwork;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> ActorsThatCanTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnerTriggerEvent OnOverlapBeginEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnerTriggerEvent OnOverlapEndEvent;
    
    ASDIActorSpawnerTrigger();
protected:
    UFUNCTION(BlueprintCallable)
    void OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActors);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActors);
    
};

