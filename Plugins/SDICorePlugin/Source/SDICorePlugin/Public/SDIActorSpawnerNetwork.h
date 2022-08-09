#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnerTriggerEvent.h"
#include "ActorSpawner_OnEventTriggerDelegate.h"
#include "UObject/NoExportTypes.h"
#include "SDIActorSpawnerNetwork.generated.h"

class ASDIActorSpawner;
class UCapsuleComponent;

UCLASS()
class SDICOREPLUGIN_API ASDIActorSpawnerNetwork : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<ASDIActorSpawner*> ConnectedSpawners;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<ASDIActorSpawner*> ActiveConnectedSpawners;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bSingleUseSpawnpoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSpawnerTriggerEvent OnBeginPlayEvent;
    
    UPROPERTY(BlueprintAssignable)
    FActorSpawner_OnEventTrigger OnActorSpawned_BeginPlay;
    
    UPROPERTY(BlueprintAssignable)
    FActorSpawner_OnEventTrigger OnActorSpawned_OverlapBegin;
    
    UPROPERTY(BlueprintAssignable)
    FActorSpawner_OnEventTrigger OnActorSpawned_OverlapEnd;
    
    UPROPERTY(EditAnywhere)
    FColor ConnectionColor;
    
    UPROPERTY(EditAnywhere)
    bool bUseConnectionReroutePoint;
    
protected:
    UPROPERTY()
    TArray<AActor*> AllSpawnedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UCapsuleComponent* SpacialComponent;
    
public:
    ASDIActorSpawnerNetwork();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    TArray<AActor*> SpawnSeveralOfTier(int32 Count, int32 Tier);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    TArray<AActor*> SpawnSeveralInTierRange(int32 Count, int32 TierMin, int32 TierMax);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    TArray<AActor*> SpawnSeveral(int32 Count, int32 Index);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AActor* SpawnOneOfTier(int32 Tier);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AActor* SpawnOne();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    TArray<AActor*> SpawnAllInTierRange(int32 TierMin, int32 TierMax);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    TArray<AActor*> SpawnAll(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetCurrentSpawnedActors();
    
    UFUNCTION(BlueprintCallable)
    ASDIActorSpawner* FindAvailableSpawner(bool bRemoveWhenFound);
    
};

