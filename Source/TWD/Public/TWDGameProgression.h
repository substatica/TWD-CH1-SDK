#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SavedLookatNotebookData.h"
#include "UObject/Object.h"
#include "TWDSavedInventoryItemData.h"
#include "TWDPersistentLevelSaveData.h"
#include "EMapTerritoryNodeType.h"
#include "UObject/NoExportTypes.h"
#include "EProgressionMode.h"
#include "TWDPlayerSicknessInfo.h"
#include "TWDGameProgression_OnPlayerGainedSicknessDelegateDelegate.h"
#include "TWDGameProgression_SuspendedLoadDelegate.h"
#include "ETWDDifficultyMode.h"
#include "TWDDifficultyMods.h"
#include "TWDAchievementData.h"
#include "TWDPlayerCustomizationInfo.h"
#include "EQuestLine.h"
#include "UObject/NoExportTypes.h"
#include "TWDUniqueEntitlementItemID.h"
#include "ESicknessSourceType.h"
#include "TWDGameProgression.generated.h"

class UTWDMapManager;
class UTWDSaveGame;
class UTWDFavorManager;
class UTWDTask;
class UTWDScenarioManager;
class UTWDPlayerBuffManager;
class ATWDPersistentLevel;
class ATWDSuspendableLevel;
class UTWDCraftingTableProgression;
class UTWDWorldEvent;
class UTWDRecipe;
class ATWDPlayerState;
class ASDIInventoryActor;
class AActor;

UCLASS(Blueprintable)
class TWD_API UTWDGameProgression : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTWDSaveGame* SaveGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 WaveModeRulesIndex;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTWDMapManager* MapManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTWDMapManager> MapManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTWDFavorManager* FavorManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTWDFavorManager> FavorManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTWDScenarioManager* ScenarioManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTWDScenarioManager> ScenarioManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UTWDTask>, TSubclassOf<UTWDTask>> TaskDependencies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandomStream RandomStream;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandomStream MapInitStream;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapTerritoryNodeType MapInitStreamLastMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EProgressionMode ProgressionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float InitialSaveGamePlayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTWDPlayerBuffManager* PlayerBuffManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTWDPlayerBuffManager> PlayerBuffManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTWDPlayerSicknessInfo PlayerSicknessInfo;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDGameProgression_OnPlayerGainedSicknessDelegate OnPlayerGainedSickness;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATWDPersistentLevel* ActivePersistentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATWDSuspendableLevel* ActiveSuspendableLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDGameProgression_SuspendedLoad SuspendedGameLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTWDCraftingTableProgression*> CraftingTableProgressions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UTWDWorldEvent>> NewGameWorldEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BalancedGameLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalStoryEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StoryEventWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETWDDifficultyMode, FTWDDifficultyMods> DifficultyMods;
    
    UPROPERTY(EditAnywhere)
    FString QuestLineContextKeys[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDAchievementData AchievementRequirements;
    
    UTWDGameProgression();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ValidateGameProgression();
    
    UFUNCTION(BlueprintCallable)
    void UpdatePlayerSicknessContext();
    
    UFUNCTION(BlueprintCallable)
    void UpdateInitialSaveGamePlayTime();
    
    UFUNCTION(BlueprintCallable)
    bool UntrackRecipe(TSoftClassPtr<UTWDRecipe> RecipeClass);
    
    UFUNCTION(BlueprintCallable)
    void UnlockStoryAchievementRepairFirstPump();
    
    UFUNCTION(BlueprintCallable)
    void UnlockStoryAchievementMeetMay();
    
    UFUNCTION(BlueprintCallable)
    void UnlockStoryAchievementMeetJB();
    
    UFUNCTION(BlueprintCallable)
    void UnlockStoryAchievementMeetGeorgia();
    
    UFUNCTION(BlueprintCallable)
    void UnlockStoryAchievementMayFate();
    
    UFUNCTION(BlueprintCallable)
    void UnlockStoryAchievementGetReserveKey();
    
    UFUNCTION(BlueprintCallable)
    void UnlockStoryAchievementFindAmbreDrawing();
    
    UFUNCTION(BlueprintCallable)
    void UnlockStoryAchievementContactCasey();
    
    UFUNCTION(BlueprintCallable)
    void UnlockStoryAchievementCaseyFate();
    
    UFUNCTION(BlueprintCallable)
    bool TryAwardMasterOfTheCraftAchievement();
    
    UFUNCTION(BlueprintCallable)
    void TrackRecipe(TSoftClassPtr<UTWDRecipe> RecipeClass);
    
    UFUNCTION(BlueprintCallable)
    void SetWaveModeRulesIndex(const int32 NewIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetStoryProgressionValue(int32 ProgressionValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSaveGameInvalidForAchievements();
    
    UFUNCTION(BlueprintCallable)
    void SetSavedNightMode(bool bNight, bool bUpdateMapManager);
    
    UFUNCTION(BlueprintCallable)
    void SetRandomSeed(int32 InitialSeed);
    
    UFUNCTION(BlueprintCallable)
    void SetProgressionMode(EProgressionMode Mode);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerHasTraveledToday(bool bHasTraveled);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerHasCompletedTutorial(bool bCompleted);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerCustomizationInfo(const FTWDPlayerCustomizationInfo PlayerInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetPersistentLevelData(const FString& SaveKey, FTWDPersistentLevelSaveData& LevelData);
    
    UFUNCTION(BlueprintCallable)
    void SetNumberOfPillowsInBus(int32 NumPillows);
    
    UFUNCTION(BlueprintCallable)
    void SetNumberOfAngelStatuesInBus(int32 NumAngels);
    
    UFUNCTION()
    void SetNotebookSection(uint8 CurrentSection);
    
    UFUNCTION(BlueprintCallable)
    void SetNightTravelEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetMapLocationIdentifier(FName NewIdentifier);
    
    UFUNCTION(BlueprintCallable)
    void SetDifficultyMode(const ETWDDifficultyMode NewMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetCurrentMapName(FName NewMapName, bool bResetIdentifier) const;
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentDay(int32 Day);
    
    UFUNCTION(BlueprintCallable)
    void SetConversationProgress(EQuestLine Questline, int32 NewValue);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetContextString(const FString& ContextKey, const FString& StringValue);
    
    UFUNCTION(BlueprintCallable)
    void SetContextInt(const FString& ContextKey, int32 IntValue);
    
    UFUNCTION(BlueprintCallable)
    void SetContextFloat(const FString& ContextKey, float FloatValue);
    
    UFUNCTION(BlueprintCallable)
    void SetContextBool(const FString& ContextKey, bool BoolValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void SaveStashItems(const TArray<FTWDSavedInventoryItemData> inStashItems);
    
    UFUNCTION(BlueprintCallable)
    void SavePlayerState(ATWDPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void SaveInventoryItems(const TArray<FTWDSavedInventoryItemData> inInventoryItems);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTask(TSubclassOf<UTWDTask> Task);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSuspendedLevelSaveContext(const FString& SaveContext);
    
    UFUNCTION(BlueprintCallable)
    void RemoveNoteFromNotebook(const TSubclassOf<ASDIInventoryActor> Note);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PrintValidationLog(const TArray<FString>& StringsToPrint);
    
public:
    UFUNCTION(BlueprintCallable)
    UTWDSaveGame* PrepareSaveGame(bool bCreateUniqueSaveObject);
    
    UFUNCTION(BlueprintCallable)
    void NativeValidateGameProgression();
    
    UFUNCTION(BlueprintCallable)
    void LogStacks(const FString& DescriptionMessage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FTWDSavedInventoryItemData> LoadStashItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FTWDSavedInventoryItemData> LoadInventoryItems() const;
    
    UFUNCTION(BlueprintCallable)
    void LoadFromSaveGame(UTWDSaveGame* NewSaveGame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrackingMaterial(FGuid MaterialGuid, TSubclassOf<UTWDRecipe>& OutWhichRecipe) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrackingInventory(const ASDIInventoryActor* InvActor, TSubclassOf<UTWDRecipe>& OutWhichRecipe) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSaveGameValidForAchievements() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNightTravelEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializePlayerState(ATWDPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void IncrementNumberOfTwinkiesEaten();
    
    UFUNCTION(BlueprintCallable)
    void IncrementNumberOfTimesUsedGutsMode();
    
    UFUNCTION(BlueprintCallable)
    void IncrementNumberOfTimesGivenItemToBeggar();
    
    UFUNCTION(BlueprintCallable)
    void IncrementNumberOfSurvivalTableItemsCrafted(TSubclassOf<AActor> ItemType);
    
    UFUNCTION(BlueprintCallable)
    void IncrementNumberOfMedicineItemsCrafted(TSubclassOf<AActor> ItemType);
    
    UFUNCTION(BlueprintCallable)
    void IncrementNumberOfLowQualityFoodEaten();
    
    UFUNCTION(BlueprintCallable)
    void IncrementNumberOfKillsWithPropaneTankExplosion();
    
    UFUNCTION(BlueprintCallable)
    void IncrementNumberOfKillsOfUnawareEnemy();
    
    UFUNCTION(BlueprintCallable)
    void IncrementNumberOfKilledHumans();
    
    UFUNCTION(BlueprintCallable)
    void IncrementNumberOfGunTableItemsCrafted(TSubclassOf<AActor> ItemType);
    
    UFUNCTION(BlueprintCallable)
    void IncrementNumberOfGrapplesStarted();
    
    UFUNCTION(BlueprintCallable)
    void IncrementNumberOfGearTableItemsCrafted(TSubclassOf<AActor> ItemType);
    
    UFUNCTION(BlueprintCallable)
    void IncrementNumberOfFoodItemsCrafted(TSubclassOf<AActor> FoodType);
    
    UFUNCTION(BlueprintCallable)
    void IncrementNumberOfFoodItemsConsumed(TSubclassOf<AActor> FoodType);
    
    UFUNCTION(BlueprintCallable)
    void IncrementNumberOfBrainedWalkerWithSpikedBat();
    
    UFUNCTION(BlueprintCallable)
    void IncrementNumberOfBrainedWalkerWithScrewDriver();
    
    UFUNCTION(BlueprintCallable)
    void IncrementNumberOfBrainedWalkers();
    
    UFUNCTION(BlueprintCallable)
    void IncrementNumberOfBrainedEliteWalkerWithAxe();
    
    UFUNCTION(BlueprintCallable)
    void IncrementDistanceClimbed(float Delta);
    
    UFUNCTION(BlueprintCallable)
    int32 IncrementConversationProgress(EQuestLine Questline, int32 Increment);
    
    UFUNCTION(BlueprintCallable)
    bool HasTask(TSubclassOf<UTWDTask> Task);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPlayerTraveledToday() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasPlayerResolvedTask(TSubclassOf<UTWDTask> TaskToCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPlayerCompletedTutorial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasNoteInNotebook(const TSubclassOf<ASDIInventoryActor> Note) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWaveModeRulesIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSoftClassPtr<UTWDRecipe>> GetTrackedRecipes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UTWDTask*> GetTasks() const;
    
    UFUNCTION(BlueprintCallable)
    UTWDTask* GetTask(TSubclassOf<UTWDTask> Task);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStoryProgressionValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTWDScenarioManager* GetScenarioManager() const;
    
    UFUNCTION(BlueprintCallable)
    UTWDSaveGame* GetSaveGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EProgressionMode GetProgressionMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayerSicknessStaminaMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayerSickness() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTWDPlayerCustomizationInfo GetPlayerCustomizationInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTWDPlayerBuffManager* GetPlayerBuffManager() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetPersistentLevelData(const FString& SaveKey, FTWDPersistentLevelSaveData& LevelData);
    
    UFUNCTION()
    uint8 GetNotebookSection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTWDMapManager* GetMapManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetMapLocationIdentifier() const;
    
    UFUNCTION(BlueprintCallable)
    FRandomStream GetMapInitStream(EMapTerritoryNodeType MapEnum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTWDFavorManager* GetFavorManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETWDDifficultyMode GetDifficultyMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentMapName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentDayPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentDay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTWDCraftingTableProgression* GetCraftingTableProgression(TSoftClassPtr<AActor> CraftingTableBlueprint) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetConversationProgress(EQuestLine Questline) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetContextString(const FString& ContextKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetContextInt(const FString& ContextKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetContextFloat(const FString& ContextKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetContextBool(const FString& ContextKey) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSoftClassPtr<UTWDWorldEvent>> GetCompletedStoryEvents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSavedLookatNotebookData> GetAllSavedNotebookNoteData() const;
    
    UFUNCTION(BlueprintCallable)
    FRandomStream GetActiveStream();
    
    UFUNCTION(BlueprintCallable)
    UTWDSaveGame* CreateNewSaveGameObject();
    
    UFUNCTION(BlueprintCallable)
    void ClearProgressionData();
    
    UFUNCTION(BlueprintCallable)
    void CheckPoint(bool bBeforeThisMoment);
    
    UFUNCTION(BlueprintCallable)
    bool CheckOnlineItemAlreadyAwarded(const FTWDUniqueEntitlementItemID& ItemId) const;
    
    UFUNCTION(BlueprintCallable)
    void AwardOnlineItem(const FTWDUniqueEntitlementItemID& ItemId);
    
    UFUNCTION(BlueprintCallable)
    bool AreTaskDependenciesCleared(TSubclassOf<UTWDTask> Task);
    
    UFUNCTION(BlueprintCallable)
    float AlterPlayerSickness(float Delta, ESicknessSourceType SourceType);
    
    UFUNCTION(BlueprintCallable)
    void AdvanceStoryProgressionValue(TSoftClassPtr<UTWDWorldEvent> CompletedEventClass);
    
    UFUNCTION(BlueprintCallable)
    int32 AdvanceDay();
    
    UFUNCTION(BlueprintCallable)
    void AddVisitedMap(FName MapName);
    
    UFUNCTION(BlueprintCallable)
    void AddTask(UTWDTask* Task);
    
    UFUNCTION(BlueprintCallable)
    void AddSuspendedLevelSaveContext(const FString& SaveContext);
    
    UFUNCTION(BlueprintCallable)
    void AddStashItem(const TSubclassOf<ASDIInventoryActor> ItemClass, int32 quantity, uint8 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void AddResolvedTask(TSubclassOf<UTWDTask> ResolvedTask);
    
    UFUNCTION(BlueprintCallable)
    void AddNoteToNotebook(FSavedLookatNotebookData& SavedNoteData);
    
    UFUNCTION(BlueprintCallable)
    void AddInventoryItem(const TSubclassOf<ASDIInventoryActor> ItemClass, int32 quantity, uint8 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void AddExcludedActorToSuspendedLevel(AActor* ActorToExclude);
    
    UFUNCTION(BlueprintCallable)
    void AddCompletedStoryEvent(TSoftClassPtr<UTWDWorldEvent> EventClass);
    
};

