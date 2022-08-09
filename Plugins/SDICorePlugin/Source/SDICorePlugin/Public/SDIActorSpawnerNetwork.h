#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "SpawnerTriggerEvent.h"
#include "ActorSpawner_OnEventTriggerDelegate.h"
#include "SDIActorSpawnerNetwork.generated.h"

class ASDIActorSpawner;
class UCapsuleComponent;

UCLASS(Blueprintable)
class SDICOREPLUGIN_API ASDIActorSpawnerNetwork : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASDIActorSpawner*> ConnectedSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASDIActorSpawner*> ActiveConnectedSpawners;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSingleUseSpawnpoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnerTriggerEvent OnBeginPlayEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorSpawner_OnEventTrigger OnActorSpawned_BeginPlay;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorSpawner_OnEventTrigger OnActorSpawned_OverlapBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorSpawner_OnEventTrigger OnActorSpawned_OverlapEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor ConnectionColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseConnectionReroutePoint;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AllSpawnedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
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

