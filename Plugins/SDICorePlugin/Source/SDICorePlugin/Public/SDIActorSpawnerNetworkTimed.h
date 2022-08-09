#pragma once
#include "CoreMinimal.h"
#include "RFloat.h"
#include "SDIActorSpawnerNetwork.h"
#include "SpawnerTriggerEvent.h"
#include "SDIActorSpawnerNetworkTimed.generated.h"

class AActor;

UCLASS(Blueprintable)
class SDICOREPLUGIN_API ASDIActorSpawnerNetworkTimed : public ASDIActorSpawnerNetwork {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnerTriggerEvent TimedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLooping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRFloat TimerLengthInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnFirstBeforeTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLoopCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSpawnsActiveAtOnce;
    
    ASDIActorSpawnerNetworkTimed();
    UFUNCTION(BlueprintCallable)
    bool WillSpawnAgain();
    
    UFUNCTION(BlueprintCallable)
    void StartSpawnTimer();
    
    UFUNCTION(BlueprintCallable)
    void SpawnTimerComplete();
    
    UFUNCTION(BlueprintCallable)
    int32 GetRemainingSpawnCount();
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> ActivateTimedEvent();
    
};

