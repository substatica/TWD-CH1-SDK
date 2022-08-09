#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SpawnTagCommandTimed.h"
#include "GameFramework/Actor.h"
#include "EMapTerritoryNodeType.h"
#include "UObject/NoExportTypes.h"
#include "SublevelPlatformOverride.h"
#include "SpawnTagArray.h"
#include "SpawnClassLimit.h"
#include "Engine/EngineTypes.h"
#include "RFloat.h"
#include "SpawnerQueueNode.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TWDSpawnManager.generated.h"

class UCurveFloat;
class UDataTable;
class UTWDWorldEvent;
class ASDIObjectPool;
class ATWDGameDirector;
class ATWDCharacterSpawner;
class ATWDCharacter;
class ATWDWeaponGun;

UCLASS(Config=Game)
class TWD_API ATWDSpawnManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMapTerritoryNodeType MapEnum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* DefaultSpawnCurve;
    
    UPROPERTY()
    FRandomStream MapInitStream;
    
    UPROPERTY(Config)
    bool bForceScenarioSeed;
    
    UPROPERTY(Config)
    int32 ForceScenarioSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* SpawnCommandTable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    TMap<FString, TSubclassOf<UTWDWorldEvent>> CVarTriggeredEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSpawnTagCommandTimed> TimerCommands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* ProjectTagTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSpawnClassLimit> SpawnLimits;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSpawnClassLimit> CommonSpawnLimits;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float PlayerProximityRange;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float PlayerProximityNoSpawnRange;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float DirectionMod;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool BackfaceCullSpawnersFromVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShowPlayerProximityRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseWasRecentlyRenderedForSpawning;
    
    UPROPERTY(EditAnywhere)
    TMap<TSubclassOf<AActor>, int32> ActorPoolSizes;
    
    UPROPERTY(Transient)
    TMap<TSubclassOf<AActor>, ASDIObjectPool*> ActorPools;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, FSublevelPlatformOverride> PlatformSublevelOverrides;
    
    UPROPERTY(Transient)
    int32 StreamingLevelsLoading;
    
    UPROPERTY(Transient)
    TMap<FName, FSpawnTagArray> SpawnTagMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReviveKillRadiusAroundPlayerStart;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bIsReviveDuringBells;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float CurrentPlayerWeaponFireValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxPlayerWeaponFireValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ValuePerPlayerWeaponFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ValuePerPlayerExplosion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ValuePerPlayerWeaponFireDecayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* PlayerWeaponFireToWalkerCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float UpdateSpawnManagerInterval;
    
    UPROPERTY(Transient)
    FTimerHandle UpdateSpawnManagerHandle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxSignificanceHuman;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxSignificanceAICharacters;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxSignificanceHumanTier0;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxSignificanceAICharactersTier0;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxSignificanceHumanDelMar;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxSignificanceAICharactersDelMar;
    
    UPROPERTY(Transient)
    int32 MaxSignificanceHumanOverride;
    
    UPROPERTY(Transient)
    int32 MaxSignificanceAICharactersOverride;
    
    UPROPERTY(Transient)
    TArray<FSpawnerQueueNode> SpawnerQueue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AActor> SpawnClassOverride;
    
    UPROPERTY(Transient)
    int32 CurrentRegionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShowTimedSpawnerDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShowSpawnLimitDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShowLineOfSightCheckDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeLineOfSightCheckDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool bShowFoundSpawnerTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FName FindSpawnerTag;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient)
    bool bIgnoreNetworkedSpawners;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient)
    FVector FindSpawnerDebugExtent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient)
    FColor FindSpawnerDebugColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool bRefreshPossibleSpawnCounts;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    TMap<FName, int32> PossibleSpawnCounts;
    
    UPROPERTY(Config)
    bool bMapCheckAllPossibleSpawns;
    
    UPROPERTY(Transient)
    bool bWaveMode;
    
private:
    UPROPERTY(Transient)
    ATWDGameDirector* GameDirector;
    
    UPROPERTY(Transient)
    TArray<ATWDCharacterSpawner*> CharacterSpawners;
    
    UPROPERTY(Transient)
    bool bInfested;
    
public:
    ATWDSpawnManager();
protected:
    UFUNCTION(BlueprintNativeEvent)
    void UpdateSpawnManager();
    
public:
    UFUNCTION(BlueprintCallable)
    void StreamingLevelLoaded();
    
    UFUNCTION(BlueprintCallable)
    void StopSpawnTimer(int32 TimerCommandIndex);
    
    UFUNCTION(BlueprintCallable)
    void StartSpawnTimer(int32 TimerCommandIndex);
    
    UFUNCTION()
    void SpawnTimerComplete(int32 TimerCommandIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetSignificanceLimits(int32 MaxHumans, int32 MaxTotalAI);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSignificanceAICountOverride(int32 MaxHumans, int32 MaxAIs);
    
    UFUNCTION(BlueprintCallable)
    void SetInfested(bool bIsInfested);
    
    UFUNCTION(BlueprintNativeEvent)
    void Revive(FVector RespawnLocation);
    
    UFUNCTION(BlueprintCallable)
    AActor* RequestActor(TSubclassOf<AActor> SpawnClass, FTransform SpawnTransform);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PopulateSpawnTagMap(bool bIncludeClaimedSpawners);
    
public:
    UFUNCTION()
    void OnPlayerWeaponFired(ATWDCharacter* PlayerCharacter, ATWDWeaponGun* Weapon);
    
    UFUNCTION()
    void OnPlayerDestroyed(AActor* PlayerActor);
    
    UFUNCTION(BlueprintCallable)
    bool ModifyTimerTag(int32 TimerCommandIndex, FName NewTag, bool bFinishCurrentTimer);
    
    UFUNCTION(BlueprintCallable)
    bool ModifyTimerCommand(int32 TimerCommandIndex, FRFloat NewTimerLengthInSeconds, int32 NewSpawnCount, float NewPlayerProximityRange, bool bFinishCurrentTimer);
    
    UFUNCTION(BlueprintCallable)
    bool ModifySpawnLimit(int32 SpawnLimitIndex, int32 NewSpawnLimit);
    
    UFUNCTION(BlueprintCallable)
    bool IsInsideSpawnableArea(FVector Location);
    
    UFUNCTION(BlueprintPure)
    bool IsInfested() const;
    
    UFUNCTION(BlueprintCallable)
    void GetSignificanceAICounts(int32& MaxHumans, int32& MaxAIs, bool& bHasLimit);
    
    UFUNCTION()
    FVector GetPredictedSpawnAreaLocation(const ATWDCharacter* Character);
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 GetPlayerWeaponFireToWalkerCount();
    
    UFUNCTION()
    FRandomStream GetActiveStream();
    
public:
    UFUNCTION(BlueprintCallable)
    void ExplosionCausedByPlayer();
    
    UFUNCTION(BlueprintCallable)
    void ClearSignificanceAICountOverride();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BeginWalkerHerd();
    
};

