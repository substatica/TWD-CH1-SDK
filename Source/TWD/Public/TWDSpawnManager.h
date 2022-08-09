#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SpawnTagCommandTimed.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "EMapTerritoryNodeType.h"
#include "SpawnerQueueNode.h"
#include "SpawnTagArray.h"
#include "SpawnClassLimit.h"
#include "SublevelPlatformOverride.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "RFloat.h"
#include "TWDSpawnManager.generated.h"

class ATWDCharacterSpawner;
class UCurveFloat;
class UDataTable;
class UTWDWorldEvent;
class ASDIObjectPool;
class ATWDGameDirector;
class ATWDCharacter;
class ATWDWeaponGun;

UCLASS(Blueprintable, Config=Game)
class TWD_API ATWDSpawnManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapTerritoryNodeType MapEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DefaultSpawnCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandomStream MapInitStream;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceScenarioSeed;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ForceScenarioSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SpawnCommandTable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, TSubclassOf<UTWDWorldEvent>> CVarTriggeredEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnTagCommandTimed> TimerCommands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ProjectTagTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnClassLimit> SpawnLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnClassLimit> CommonSpawnLimits;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerProximityRange;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerProximityNoSpawnRange;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectionMod;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BackfaceCullSpawnersFromVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowPlayerProximityRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseWasRecentlyRenderedForSpawning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AActor>, int32> ActorPoolSizes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AActor>, ASDIObjectPool*> ActorPools;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FSublevelPlatformOverride> PlatformSublevelOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 StreamingLevelsLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FSpawnTagArray> SpawnTagMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReviveKillRadiusAroundPlayerStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsReviveDuringBells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentPlayerWeaponFireValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPlayerWeaponFireValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValuePerPlayerWeaponFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValuePerPlayerExplosion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValuePerPlayerWeaponFireDecayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PlayerWeaponFireToWalkerCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateSpawnManagerInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle UpdateSpawnManagerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSignificanceHuman;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSignificanceAICharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSignificanceHumanTier0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSignificanceAICharactersTier0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSignificanceHumanDelMar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSignificanceAICharactersDelMar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxSignificanceHumanOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxSignificanceAICharactersOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSpawnerQueueNode> SpawnerQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> SpawnClassOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentRegionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowTimedSpawnerDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowSpawnLimitDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowLineOfSightCheckDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeLineOfSightCheckDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShowFoundSpawnerTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName FindSpawnerTag;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIgnoreNetworkedSpawners;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector FindSpawnerDebugExtent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FColor FindSpawnerDebugColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRefreshPossibleSpawnCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> PossibleSpawnCounts;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMapCheckAllPossibleSpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWaveMode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATWDGameDirector* GameDirector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ATWDCharacterSpawner*> CharacterSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInfested;
    
public:
    ATWDSpawnManager();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateSpawnManager();
    
public:
    UFUNCTION(BlueprintCallable)
    void StreamingLevelLoaded();
    
    UFUNCTION(BlueprintCallable)
    void StopSpawnTimer(int32 TimerCommandIndex);
    
    UFUNCTION(BlueprintCallable)
    void StartSpawnTimer(int32 TimerCommandIndex);
    
    UFUNCTION(BlueprintCallable)
    void SpawnTimerComplete(int32 TimerCommandIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetSignificanceLimits(int32 MaxHumans, int32 MaxTotalAI);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSignificanceAICountOverride(int32 MaxHumans, int32 MaxAIs);
    
    UFUNCTION(BlueprintCallable)
    void SetInfested(bool bIsInfested);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Revive(FVector RespawnLocation);
    
    UFUNCTION(BlueprintCallable)
    AActor* RequestActor(TSubclassOf<AActor> SpawnClass, FTransform SpawnTransform);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PopulateSpawnTagMap(bool bIncludeClaimedSpawners);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPlayerWeaponFired(ATWDCharacter* PlayerCharacter, ATWDWeaponGun* Weapon);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerDestroyed(AActor* PlayerActor);
    
    UFUNCTION(BlueprintCallable)
    bool ModifyTimerTag(int32 TimerCommandIndex, FName NewTag, bool bFinishCurrentTimer);
    
    UFUNCTION(BlueprintCallable)
    bool ModifyTimerCommand(int32 TimerCommandIndex, FRFloat NewTimerLengthInSeconds, int32 NewSpawnCount, float NewPlayerProximityRange, bool bFinishCurrentTimer);
    
    UFUNCTION(BlueprintCallable)
    bool ModifySpawnLimit(int32 SpawnLimitIndex, int32 NewSpawnLimit);
    
    UFUNCTION(BlueprintCallable)
    bool IsInsideSpawnableArea(FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInfested() const;
    
    UFUNCTION(BlueprintCallable)
    void GetSignificanceAICounts(int32& MaxHumans, int32& MaxAIs, bool& bHasLimit);
    
    UFUNCTION(BlueprintCallable)
    FVector GetPredictedSpawnAreaLocation(const ATWDCharacter* Character);
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 GetPlayerWeaponFireToWalkerCount();
    
    UFUNCTION(BlueprintCallable)
    FRandomStream GetActiveStream();
    
public:
    UFUNCTION(BlueprintCallable)
    void ExplosionCausedByPlayer();
    
    UFUNCTION(BlueprintCallable)
    void ClearSignificanceAICountOverride();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginWalkerHerd();
    
};

