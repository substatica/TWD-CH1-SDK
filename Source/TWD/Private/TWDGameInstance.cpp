#include "TWDGameInstance.h"

class UWorld;
class UTWDSaveGame;
class UTWDGameAchievements;
class UTWDGameProgression;
class UTWDGeneralSaveData;
class UTWDGameEntitlements;

void UTWDGameInstance::TurnOnSplashScreen() {
}

void UTWDGameInstance::TravelForMapTransition() {
}

void UTWDGameInstance::StartDemoTimer() {
}

void UTWDGameInstance::ShowLocalPlayerPosition() {
}

void UTWDGameInstance::ShowBuildVersion() {
}

void UTWDGameInstance::SetUserProfileIndex(int32 NewProfileIndex) {
}

void UTWDGameInstance::SetupHMDSettings() {
}

void UTWDGameInstance::SetSDIMobileGamma(float G) {
}

void UTWDGameInstance::SetPreReadyForPlayTimer(float Timer) {
}

void UTWDGameInstance::SetDemoMode(EDemoModeType DemoType) {
}

bool UTWDGameInstance::SaveGameExistsAtIndex(int32 Index) const {
    return false;
}

bool UTWDGameInstance::SaveGameAtIndex(int32 Index) {
    return false;
}

bool UTWDGameInstance::SaveCustomGame(const FString& CustomGameName) {
    return false;
}

bool UTWDGameInstance::SaveAtOldestIndex() {
    return false;
}

bool UTWDGameInstance::SaveAtCurrentIndex() {
    return false;
}

void UTWDGameInstance::RefreshSaveGames() {
}

void UTWDGameInstance::PreLoadMapCallback(const FString& MapName) {
}

void UTWDGameInstance::PostLoadMapCallback(UWorld* LoadedWorld) {
}

void UTWDGameInstance::PerformMapReadyTransition() {
}

void UTWDGameInstance::OnTelemetryHeartbeatTimerComplete() {
}

void UTWDGameInstance::OnLocalAutoSaveTimerComplete() {
}

void UTWDGameInstance::OnDemoTimerExpired() {
}

void UTWDGameInstance::OnAutoSavingDisabledTimerComplete() {
}

void UTWDGameInstance::OnAutoSaveTimerComplete() {
}

bool UTWDGameInstance::NewGameFromExistingSave(UTWDSaveGame* SaveGame, FTWDPlayerCustomizationInfo PlayerCustomizationInfo, ETWDDifficultyMode DifficultyMode, bool bLoadNewGame) {
    return false;
}

bool UTWDGameInstance::NewGameAtIndex(int32 Index, FTWDPlayerCustomizationInfo PlayerCustomizationInfo, ETWDDifficultyMode DifficultyMode, bool bLoadNewGame, FName StartingMapName) {
    return false;
}

bool UTWDGameInstance::LoadSaveGame(UTWDSaveGame* SaveGame, bool bLoadIntoLevel) {
    return false;
}

void UTWDGameInstance::LoadLightScenario() {
}

bool UTWDGameInstance::LoadGameAtIndex(int32 Index, bool bLoadIntoLevel) {
    return false;
}

bool UTWDGameInstance::LoadCustomGame(const FString& CustomGameName) {
    return false;
}

TArray<int32> UTWDGameInstance::K2_GetSortedSaveGameIndices() {
    return TArray<int32>();
}

bool UTWDGameInstance::IsUserProfileCorrupt(int32 Index) const {
    return false;
}

bool UTWDGameInstance::IsTransitioningMapTimerActive() {
    return false;
}

bool UTWDGameInstance::IsTipValid(const FString& Tag) {
    return false;
}

bool UTWDGameInstance::IsInMainMenuMap() const {
    return false;
}

bool UTWDGameInstance::IsDemoMode(EDemoModeType DemoType) const {
    return false;
}

int32 UTWDGameInstance::GetTotalSaveIndices() const {
    return 0;
}

TArray<int32> UTWDGameInstance::GetSortedSaveGameIndices(const TArray<UTWDSaveGame*>& SaveGames) {
    return TArray<int32>();
}

float UTWDGameInstance::GetSDIMobileGamma() {
    return 0.0f;
}

void UTWDGameInstance::GetSaveGameDisplayData(int32 Index, FText& LevelText, int32& Day, FDateTime& SaveTime, float& TimePlayedInSeconds, ETWDDifficultyMode& DiffultyMode) {
}

int32 UTWDGameInstance::GetOldestSaveIndex() {
    return 0;
}

int32 UTWDGameInstance::GetMostRecentSaveIndex() const {
    return 0;
}

int32 UTWDGameInstance::GetLoadingScreenIndex(TArray<float> MinPercentages, TArray<float> MaxPercentages) const {
    return 0;
}

int32 UTWDGameInstance::GetLevelStartSaveIndex() const {
    return 0;
}

UTWDGeneralSaveData* UTWDGameInstance::GetGeneralSaveData() const {
    return NULL;
}

UTWDGameProgression* UTWDGameInstance::GetGameProgression() const {
    return NULL;
}

UTWDGameEntitlements* UTWDGameInstance::GetGameEntitlements() const {
    return NULL;
}

UTWDGameAchievements* UTWDGameInstance::GetGameAchievements() const {
    return NULL;
}

EDemoModeType UTWDGameInstance::GetDemoMode() {
    return EDemoModeType::DemoMode_None;
}

FString UTWDGameInstance::GetDefaultMap() const {
    return TEXT("");
}

float UTWDGameInstance::GetColorMid() {
    return 0.0f;
}

void UTWDGameInstance::EndLoadingScreen() {
}

void UTWDGameInstance::EnableAutoSaving(bool bForce) {
}

void UTWDGameInstance::DisableAutoSavingForDuration(float Duration) {
}

void UTWDGameInstance::DisableAutoSaving() {
}

bool UTWDGameInstance::DeleteGameAtIndex(int32 Index) {
    return false;
}

bool UTWDGameInstance::CanAutoSave() {
    return false;
}

void UTWDGameInstance::BeginMapTransition(FName TargetMapName) {
}

void UTWDGameInstance::BeginLoadingScreen(const FString& MapName) {
}

bool UTWDGameInstance::AutoSaveCurrentGame() {
    return false;
}

void UTWDGameInstance::AddPlayerContextTelemetryData(TMap<FString, FString>& TelemetryData) {
}

UTWDGameInstance::UTWDGameInstance() {
    this->GameSaveDataVersion = 3;
    this->bAllowAutoSaving = false;
    this->CurrentUserProfileIndex = 0;
    this->CurrentSaveProfileIndex = 0;
    this->MinimumPlayerWalkerDistanceToAutoSave = 500.00f;
    this->bRevivePlayer = false;
    this->VRPlatformInfoList.AddDefaulted(6);
    this->bPerformedInitialVRReset = false;
    this->DefaultLevelLoadingTime = 20.00f;
    this->bBootSequenceShown = false;
    this->PreReadyForPlayTimerDefault = 1.00f;
    this->PreReadyForPlayTimer = 1.00f;
    this->LastLoadingBarSize = 0;
    this->DemoModeType = EDemoModeType::DemoMode_None;
    this->DemoTimerDuration = 1200.00f;
    this->FramerateStabilizationMilliseconds = 35.00f;
    this->MaxFramerateStabilizationTime = 5.00f;
    this->MapTransitionFadeOutDuration = 1.00f;
    this->MapTransitionFadeInDuration = 3.00f;
    this->MapTransitionFadeInDelay = 1.00f;
    this->bHasCachedPlatformAssetOverrides = false;
    this->GameProgression = NULL;
    this->GameAchievements = NULL;
    this->GameEntitlements = NULL;
    this->GameProgressionClass = NULL;
    this->bFlushStreamingDuringLoadingScreen = true;
    this->IntentRecognizer = NULL;
    this->GeneralSaveData = NULL;
    this->LocalRecentAutoSave = NULL;
    this->LocalAutoSaveFrequency = 5.00f;
    this->AutoSaveFrequency = 240.00f;
    this->TelemetryHeartbeatFrequency = 300.00f;
    this->SkinCacheLoadingDelayStart = 0.00f;
    this->FramerateStabilizationDelayStart = 0.00f;
    this->bFlushStreaming = false;
    this->bPreReadyForPlaySent = false;
    this->SplashTexture = NULL;
    this->LevelLoadingTime = 0.00f;
    this->EstimatedLevelLoadingTime = 0.00f;
}

