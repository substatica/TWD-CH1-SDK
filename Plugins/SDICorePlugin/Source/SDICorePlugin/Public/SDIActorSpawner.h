#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "SDIActorSpawner.generated.h"

class ASDIActorSpawnerNetwork;
class ULevel;
class ASDIObjectPool;

UCLASS()
class SDICOREPLUGIN_API ASDIActorSpawner : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bHasSpawned;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> SpawnTags;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<AActor>> SpawnClasses;
    
    UPROPERTY(EditAnywhere)
    ASDIActorSpawnerNetwork* SpawnNetwork;
    
    UPROPERTY(EditAnywhere)
    bool bMultiUseSpawner;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    ESpawnActorCollisionHandlingMethod SpawnHandlingMethod;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    ULevel* SpawnLevel;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float CullDistanceFallback;
    
protected:
    UPROPERTY()
    bool bLimitBPAccessToSpawnClasses;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bIsEnabled;
    
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bDeferredSpawn;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bUsesNineRotationAdjustments;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bSimulateGravityOnSpawn;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float SimulateGravityCheckDistance;
    
    ASDIActorSpawner();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AActor* SpawnSpecificClass(TSubclassOf<AActor> ClassType, ASDIObjectPool* Pool);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AActor* SpawnOne();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AActor* SpawnIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnerEnabled(bool bEnable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PreActorSpawn(AActor* NewActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActorSpawned(AActor* NewActor);
    
    UFUNCTION(BlueprintPure)
    bool IsSpawnerEnabled() const;
    
};

