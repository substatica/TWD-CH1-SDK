#pragma once
#include "CoreMinimal.h"
#include "SDIActorSpawnerNetwork.h"
#include "SpawnerTriggerEvent.h"
#include "RFloat.h"
#include "SDIActorSpawnerNetworkTimed.generated.h"

class AActor;

UCLASS()
class SDICOREPLUGIN_API ASDIActorSpawnerNetworkTimed : public ASDIActorSpawnerNetwork {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSpawnerTriggerEvent TimedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLooping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRFloat TimerLengthInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSpawnFirstBeforeTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxLoopCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxSpawnsActiveAtOnce;
    
    ASDIActorSpawnerNetworkTimed();
    UFUNCTION(BlueprintCallable)
    bool WillSpawnAgain();
    
    UFUNCTION()
    void StartSpawnTimer();
    
    UFUNCTION()
    void SpawnTimerComplete();
    
    UFUNCTION(BlueprintCallable)
    int32 GetRemainingSpawnCount();
    
    UFUNCTION()
    TArray<AActor*> ActivateTimedEvent();
    
};

