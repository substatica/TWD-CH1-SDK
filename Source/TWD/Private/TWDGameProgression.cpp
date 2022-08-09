#include "TWDGameProgression.h"
#include "Templates/SubclassOf.h"

class UTWDRecipe;
class ATWDPlayerState;
class UTWDTask;
class ASDIInventoryActor;
class UTWDSaveGame;
class UTWDMapManager;
class AActor;
class UTWDScenarioManager;
class UTWDPlayerBuffManager;
class UTWDFavorManager;
class UTWDCraftingTableProgression;
class UTWDWorldEvent;


void UTWDGameProgression::UpdatePlayerSicknessContext() {
}

void UTWDGameProgression::UpdateInitialSaveGamePlayTime() {
}

bool UTWDGameProgression::UntrackRecipe(TSoftClassPtr<UTWDRecipe> RecipeClass) {
    return false;
}

void UTWDGameProgression::UnlockStoryAchievementRepairFirstPump() {
}

void UTWDGameProgression::UnlockStoryAchievementMeetMay() {
}

void UTWDGameProgression::UnlockStoryAchievementMeetJB() {
}

void UTWDGameProgression::UnlockStoryAchievementMeetGeorgia() {
}

void UTWDGameProgression::UnlockStoryAchievementMayFate() {
}

void UTWDGameProgression::UnlockStoryAchievementGetReserveKey() {
}

void UTWDGameProgression::UnlockStoryAchievementFindAmbreDrawing() {
}

void UTWDGameProgression::UnlockStoryAchievementContactCasey() {
}

void UTWDGameProgression::UnlockStoryAchievementCaseyFate() {
}

bool UTWDGameProgression::TryAwardMasterOfTheCraftAchievement() {
    return false;
}

void UTWDGameProgression::TrackRecipe(TSoftClassPtr<UTWDRecipe> RecipeClass) {
}

void UTWDGameProgression::SetWaveModeRulesIndex(const int32 NewIndex) {
}

void UTWDGameProgression::SetStoryProgressionValue(int32 ProgressionValue) {
}

void UTWDGameProgression::SetSaveGameInvalidForAchievements() {
}

void UTWDGameProgression::SetSavedNightMode(bool bNight, bool bUpdateMapManager) {
}

void UTWDGameProgression::SetRandomSeed(int32 InitialSeed) {
}

void UTWDGameProgression::SetProgressionMode(EProgressionMode Mode) {
}

void UTWDGameProgression::SetPlayerHasTraveledToday(bool bHasTraveled) {
}

void UTWDGameProgression::SetPlayerHasCompletedTutorial(bool bCompleted) {
}

void UTWDGameProgression::SetPlayerCustomizationInfo(const FTWDPlayerCustomizationInfo PlayerInfo) {
}

void UTWDGameProgression::SetPersistentLevelData(const FString& SaveKey, FTWDPersistentLevelSaveData& LevelData) {
}

void UTWDGameProgression::SetNumberOfPillowsInBus(int32 NumPillows) {
}

void UTWDGameProgression::SetNumberOfAngelStatuesInBus(int32 NumAngels) {
}

void UTWDGameProgression::SetNotebookSection(uint8 CurrentSection) {
}

void UTWDGameProgression::SetNightTravelEnabled(bool bEnable) {
}

void UTWDGameProgression::SetMapLocationIdentifier(FName NewIdentifier) {
}

void UTWDGameProgression::SetDifficultyMode(const ETWDDifficultyMode NewMode) {
}

void UTWDGameProgression::SetCurrentMapName(FName NewMapName, bool bResetIdentifier) const {
}

void UTWDGameProgression::SetCurrentDay(int32 Day) {
}

void UTWDGameProgression::SetConversationProgress(EQuestLine Questline, int32 NewValue) {
}

void UTWDGameProgression::SetContextString(const FString& ContextKey, const FString& StringValue) {
}

void UTWDGameProgression::SetContextInt(const FString& ContextKey, int32 IntValue) {
}

void UTWDGameProgression::SetContextFloat(const FString& ContextKey, float FloatValue) {
}

void UTWDGameProgression::SetContextBool(const FString& ContextKey, bool BoolValue) {
}

void UTWDGameProgression::SaveStashItems(const TArray<FTWDSavedInventoryItemData> inStashItems) {
}

void UTWDGameProgression::SavePlayerState(ATWDPlayerState* PlayerState) {
}

void UTWDGameProgression::SaveInventoryItems(const TArray<FTWDSavedInventoryItemData> inInventoryItems) {
}

void UTWDGameProgression::RemoveTask(TSubclassOf<UTWDTask> Task) {
}

void UTWDGameProgression::RemoveSuspendedLevelSaveContext(const FString& SaveContext) {
}

void UTWDGameProgression::RemoveNoteFromNotebook(const TSubclassOf<ASDIInventoryActor> Note) {
}

void UTWDGameProgression::PrintValidationLog(const TArray<FString>& StringsToPrint) {
}

UTWDSaveGame* UTWDGameProgression::PrepareSaveGame(bool bCreateUniqueSaveObject) {
    return NULL;
}

void UTWDGameProgression::NativeValidateGameProgression() {
}

void UTWDGameProgression::LogStacks(const FString& DescriptionMessage) const {
}

TArray<FTWDSavedInventoryItemData> UTWDGameProgression::LoadStashItems() const {
    return TArray<FTWDSavedInventoryItemData>();
}

TArray<FTWDSavedInventoryItemData> UTWDGameProgression::LoadInventoryItems() const {
    return TArray<FTWDSavedInventoryItemData>();
}

void UTWDGameProgression::LoadFromSaveGame(UTWDSaveGame* NewSaveGame) {
}

bool UTWDGameProgression::IsTrackingMaterial(FGuid MaterialGuid, TSubclassOf<UTWDRecipe>& OutWhichRecipe) const {
    return false;
}

bool UTWDGameProgression::IsTrackingInventory(const ASDIInventoryActor* InvActor, TSubclassOf<UTWDRecipe>& OutWhichRecipe) const {
    return false;
}

bool UTWDGameProgression::IsSaveGameValidForAchievements() const {
    return false;
}

bool UTWDGameProgression::IsNightTravelEnabled() const {
    return false;
}

void UTWDGameProgression::InitializePlayerState(ATWDPlayerState* PlayerState) {
}

void UTWDGameProgression::IncrementNumberOfTwinkiesEaten() {
}

void UTWDGameProgression::IncrementNumberOfTimesUsedGutsMode() {
}

void UTWDGameProgression::IncrementNumberOfTimesGivenItemToBeggar() {
}

void UTWDGameProgression::IncrementNumberOfSurvivalTableItemsCrafted(TSubclassOf<AActor> ItemType) {
}

void UTWDGameProgression::IncrementNumberOfMedicineItemsCrafted(TSubclassOf<AActor> ItemType) {
}

void UTWDGameProgression::IncrementNumberOfLowQualityFoodEaten() {
}

void UTWDGameProgression::IncrementNumberOfKillsWithPropaneTankExplosion() {
}

void UTWDGameProgression::IncrementNumberOfKillsOfUnawareEnemy() {
}

void UTWDGameProgression::IncrementNumberOfKilledHumans() {
}

void UTWDGameProgression::IncrementNumberOfGunTableItemsCrafted(TSubclassOf<AActor> ItemType) {
}

void UTWDGameProgression::IncrementNumberOfGrapplesStarted() {
}

void UTWDGameProgression::IncrementNumberOfGearTableItemsCrafted(TSubclassOf<AActor> ItemType) {
}

void UTWDGameProgression::IncrementNumberOfFoodItemsCrafted(TSubclassOf<AActor> FoodType) {
}

void UTWDGameProgression::IncrementNumberOfFoodItemsConsumed(TSubclassOf<AActor> FoodType) {
}

void UTWDGameProgression::IncrementNumberOfBrainedWalkerWithSpikedBat() {
}

void UTWDGameProgression::IncrementNumberOfBrainedWalkerWithScrewDriver() {
}

void UTWDGameProgression::IncrementNumberOfBrainedWalkers() {
}

void UTWDGameProgression::IncrementNumberOfBrainedEliteWalkerWithAxe() {
}

void UTWDGameProgression::IncrementDistanceClimbed(float Delta) {
}

int32 UTWDGameProgression::IncrementConversationProgress(EQuestLine Questline, int32 Increment) {
    return 0;
}

bool UTWDGameProgression::HasTask(TSubclassOf<UTWDTask> Task) {
    return false;
}

bool UTWDGameProgression::HasPlayerTraveledToday() const {
    return false;
}

bool UTWDGameProgression::HasPlayerResolvedTask(TSubclassOf<UTWDTask> TaskToCheck) {
    return false;
}

bool UTWDGameProgression::HasPlayerCompletedTutorial() const {
    return false;
}

bool UTWDGameProgression::HasNoteInNotebook(const TSubclassOf<ASDIInventoryActor> Note) const {
    return false;
}

int32 UTWDGameProgression::GetWaveModeRulesIndex() const {
    return 0;
}

TArray<TSoftClassPtr<UTWDRecipe>> UTWDGameProgression::GetTrackedRecipes() const {
    return TArray<TSoftClassPtr<UTWDRecipe>>();
}

TArray<UTWDTask*> UTWDGameProgression::GetTasks() const {
    return TArray<UTWDTask*>();
}

UTWDTask* UTWDGameProgression::GetTask(TSubclassOf<UTWDTask> Task) {
    return NULL;
}

int32 UTWDGameProgression::GetStoryProgressionValue() const {
    return 0;
}

UTWDScenarioManager* UTWDGameProgression::GetScenarioManager() const {
    return NULL;
}

UTWDSaveGame* UTWDGameProgression::GetSaveGame() {
    return NULL;
}

EProgressionMode UTWDGameProgression::GetProgressionMode() {
    return EProgressionMode::EPM_Story;
}

float UTWDGameProgression::GetPlayerSicknessStaminaMultiplier() const {
    return 0.0f;
}

float UTWDGameProgression::GetPlayerSickness() const {
    return 0.0f;
}

FTWDPlayerCustomizationInfo UTWDGameProgression::GetPlayerCustomizationInfo() const {
    return FTWDPlayerCustomizationInfo{};
}

UTWDPlayerBuffManager* UTWDGameProgression::GetPlayerBuffManager() const {
    return NULL;
}

bool UTWDGameProgression::GetPersistentLevelData(const FString& SaveKey, FTWDPersistentLevelSaveData& LevelData) {
    return false;
}

uint8 UTWDGameProgression::GetNotebookSection() {
    return 0;
}

UTWDMapManager* UTWDGameProgression::GetMapManager() const {
    return NULL;
}

FName UTWDGameProgression::GetMapLocationIdentifier() const {
    return NAME_None;
}

FRandomStream UTWDGameProgression::GetMapInitStream(EMapTerritoryNodeType MapEnum) {
    return FRandomStream{};
}

UTWDFavorManager* UTWDGameProgression::GetFavorManager() const {
    return NULL;
}

ETWDDifficultyMode UTWDGameProgression::GetDifficultyMode() const {
    return ETWDDifficultyMode::ETWDDifficulty_Low;
}

FName UTWDGameProgression::GetCurrentMapName() const {
    return NAME_None;
}

float UTWDGameProgression::GetCurrentDayPercentage() const {
    return 0.0f;
}

int32 UTWDGameProgression::GetCurrentDay() const {
    return 0;
}

UTWDCraftingTableProgression* UTWDGameProgression::GetCraftingTableProgression(TSoftClassPtr<AActor> CraftingTableBlueprint) const {
    return NULL;
}

int32 UTWDGameProgression::GetConversationProgress(EQuestLine Questline) const {
    return 0;
}

FString UTWDGameProgression::GetContextString(const FString& ContextKey) const {
    return TEXT("");
}

int32 UTWDGameProgression::GetContextInt(const FString& ContextKey) const {
    return 0;
}

float UTWDGameProgression::GetContextFloat(const FString& ContextKey) const {
    return 0.0f;
}

bool UTWDGameProgression::GetContextBool(const FString& ContextKey) const {
    return false;
}

TArray<TSoftClassPtr<UTWDWorldEvent>> UTWDGameProgression::GetCompletedStoryEvents() const {
    return TArray<TSoftClassPtr<UTWDWorldEvent>>();
}

TArray<FSavedLookatNotebookData> UTWDGameProgression::GetAllSavedNotebookNoteData() const {
    return TArray<FSavedLookatNotebookData>();
}

FRandomStream UTWDGameProgression::GetActiveStream() {
    return FRandomStream{};
}

UTWDSaveGame* UTWDGameProgression::CreateNewSaveGameObject() {
    return NULL;
}

void UTWDGameProgression::ClearProgressionData() {
}

void UTWDGameProgression::CheckPoint(bool bBeforeThisMoment) {
}

bool UTWDGameProgression::CheckOnlineItemAlreadyAwarded(const FTWDUniqueEntitlementItemID& ItemId) const {
    return false;
}

void UTWDGameProgression::AwardOnlineItem(const FTWDUniqueEntitlementItemID& ItemId) {
}

bool UTWDGameProgression::AreTaskDependenciesCleared(TSubclassOf<UTWDTask> Task) {
    return false;
}

float UTWDGameProgression::AlterPlayerSickness(float Delta, ESicknessSourceType SourceType) {
    return 0.0f;
}

void UTWDGameProgression::AdvanceStoryProgressionValue(TSoftClassPtr<UTWDWorldEvent> CompletedEventClass) {
}

int32 UTWDGameProgression::AdvanceDay() {
    return 0;
}

void UTWDGameProgression::AddVisitedMap(FName MapName) {
}

void UTWDGameProgression::AddTask(UTWDTask* Task) {
}

void UTWDGameProgression::AddSuspendedLevelSaveContext(const FString& SaveContext) {
}

void UTWDGameProgression::AddStashItem(const TSubclassOf<ASDIInventoryActor> ItemClass, int32 quantity, uint8 SlotIndex) {
}

void UTWDGameProgression::AddResolvedTask(TSubclassOf<UTWDTask> ResolvedTask) {
}

void UTWDGameProgression::AddNoteToNotebook(FSavedLookatNotebookData& SavedNoteData) {
}

void UTWDGameProgression::AddInventoryItem(const TSubclassOf<ASDIInventoryActor> ItemClass, int32 quantity, uint8 SlotIndex) {
}

void UTWDGameProgression::AddExcludedActorToSuspendedLevel(AActor* ActorToExclude) {
}

void UTWDGameProgression::AddCompletedStoryEvent(TSoftClassPtr<UTWDWorldEvent> EventClass) {
}

UTWDGameProgression::UTWDGameProgression() {
    this->SaveGame = NULL;
    this->WaveModeRulesIndex = -1;
    this->MapManager = NULL;
    this->MapManagerClass = NULL;
    this->FavorManager = NULL;
    this->FavorManagerClass = NULL;
    this->ScenarioManager = NULL;
    this->ScenarioManagerClass = NULL;
    this->MapInitStreamLastMap = EMapTerritoryNodeType::None;
    this->ProgressionMode = EProgressionMode::EPM_Story;
    this->InitialSaveGamePlayTime = 0.00f;
    this->PlayerBuffManager = NULL;
    this->PlayerBuffManagerClass = NULL;
    this->ActivePersistentLevel = NULL;
    this->ActiveSuspendableLevel = NULL;
    this->BalancedGameLength = 16;
    this->TotalStoryEvents = 10;
    this->StoryEventWeight = 5.00f;
    this->QuestLineContextKeys[0] = TEXT("MayConvValue");
    this->QuestLineContextKeys[1] = TEXT("MayConvValue");
    this->QuestLineContextKeys[2] = TEXT("MayConvValue");
    this->QuestLineContextKeys[3] = TEXT("MayConvValue");
}

