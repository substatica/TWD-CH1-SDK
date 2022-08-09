#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ReadyForPlayDelegate.h"
#include "SDICoreGameInstance.h"
#include "TWDVRPlatformInfo.h"
#include "TWDEstimatedLevelLoadingTime.h"
#include "TWDLoadingScreenSettings.h"
#include "PreReadyForPlayDelegate.h"
#include "ETWDDifficultyMode.h"
#include "EDemoModeType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TWDWarningErrorMessageCache.h"
#include "TWDSaveGameProfileData.h"
#include "TWDPlayerCustomizationInfo.h"
#include "UObject/NoExportTypes.h"
#include "TWDGameInstance.generated.h"

class UObject;
class UDataTable;
class UTWDGameEntitlements;
class UTWDGameProgression;
class UTWDGameAchievements;
class UTexture;
class UTWDGeneralSaveData;
class UTWDSerializedProfile;
class UTWDSaveGame;
class UWorld;

UCLASS(NonTransient)
class TWD_API UTWDGameInstance : public USDICoreGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    uint32 GameSaveDataVersion;
    
    UPROPERTY(Config)
    bool bAllowAutoSaving;
    
    UPROPERTY(BlueprintReadOnly)
    int32 CurrentUserProfileIndex;
    
    UPROPERTY(BlueprintReadOnly)
    int32 CurrentSaveProfileIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinimumPlayerWalkerDistanceToAutoSave;
    
    UPROPERTY(BlueprintReadOnly)
    bool bRevivePlayer;
    
    UPROPERTY(BlueprintReadOnly, Config)
    TArray<FTWDVRPlatformInfo> VRPlatformInfoList;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bPerformedInitialVRReset;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleDefaultsOnly)
    TArray<FTWDEstimatedLevelLoadingTime> EstimatedLevelLoadingTimes;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleDefaultsOnly)
    float DefaultLevelLoadingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBootSequenceShown;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PreReadyForPlayTimerDefault;
    
    UPROPERTY(Transient)
    float PreReadyForPlayTimer;
    
    UPROPERTY(Transient)
    int32 LastLoadingBarSize;
    
protected:
    UPROPERTY(BlueprintAssignable)
    FPreReadyForPlay PreReadyForPlay;
    
    UPROPERTY(BlueprintAssignable)
    FReadyForPlay ReadyForPlay;
    
    UPROPERTY(Config)
    EDemoModeType DemoModeType;
    
    UPROPERTY(Config)
    float DemoTimerDuration;
    
    UPROPERTY(Config, NoClear)
    FSoftClassPath GameSaveClass;
    
    UPROPERTY(Config, VisibleAnywhere)
    float FramerateStabilizationMilliseconds;
    
    UPROPERTY(Config, VisibleAnywhere)
    double MaxFramerateStabilizationTime;
    
    UPROPERTY(EditAnywhere)
    FTWDLoadingScreenSettings LoadingScreenSettings;
    
    UPROPERTY(EditAnywhere)
    float MapTransitionFadeOutDuration;
    
    UPROPERTY(EditAnywhere)
    float MapTransitionFadeInDuration;
    
    UPROPERTY(EditAnywhere)
    float MapTransitionFadeInDelay;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UDataTable*> PlatformAssetOverrideTables;
    
    UPROPERTY(Transient)
    TMap<FSoftObjectPath, UObject*> PlatformAssetOverrideCache;
    
    UPROPERTY(Transient)
    bool bHasCachedPlatformAssetOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> ValidTipTagRoots;
    
    UPROPERTY(Transient)
    FName MapTransitionTargetMap;
    
    UPROPERTY(Transient)
    TArray<FTWDWarningErrorMessageCache> WarningCache;
    
    UPROPERTY(Transient)
    TArray<FTWDWarningErrorMessageCache> ErrorCache;
    
    UPROPERTY(Transient)
    UTWDGameProgression* GameProgression;
    
    UPROPERTY(Transient)
    UTWDGameAchievements* GameAchievements;
    
    UPROPERTY(Transient)
    UTWDGameEntitlements* GameEntitlements;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTWDGameProgression> GameProgressionClass;
    
    UPROPERTY(EditAnywhere)
    bool bFlushStreamingDuringLoadingScreen;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FString> PS4_LowGoreCoutryCodes;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UObject* IntentRecognizer;
    
    UPROPERTY(Transient)
    FTWDSaveGameProfileData LocalUserProfileData[3];
    
    UPROPERTY(Transient)
    UTWDGeneralSaveData* GeneralSaveData;
    
    UPROPERTY(Transient)
    TArray<UTWDSerializedProfile*> LocalUserProfileSerialized;
    
    UPROPERTY(Transient)
    TArray<bool> UserProfileCorruptStatus;
    
    UPROPERTY(Transient)
    UTWDSaveGame* LocalRecentAutoSave;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    float LocalAutoSaveFrequency;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    float AutoSaveFrequency;
    
    UPROPERTY(Config)
    float TelemetryHeartbeatFrequency;
    
    UPROPERTY(Transient)
    double SkinCacheLoadingDelayStart;
    
    UPROPERTY(Transient)
    double FramerateStabilizationDelayStart;
    
    UPROPERTY(Transient)
    bool bFlushStreaming;
    
    UPROPERTY(Transient)
    bool bPreReadyForPlaySent;
    
    UPROPERTY(Transient)
    UTexture* SplashTexture;
    
    UPROPERTY(Transient)
    double LevelLoadingTime;
    
    UPROPERTY(Transient)
    float EstimatedLevelLoadingTime;
    
public:
    UTWDGameInstance();
protected:
    UFUNCTION()
    void TurnOnSplashScreen();
    
    UFUNCTION()
    void TravelForMapTransition();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartDemoTimer();
    
    UFUNCTION(Exec)
    void ShowLocalPlayerPosition();
    
    UFUNCTION(Exec)
    void ShowBuildVersion();
    
    UFUNCTION(BlueprintCallable)
    void SetUserProfileIndex(int32 NewProfileIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetupHMDSettings();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetSDIMobileGamma(float G);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPreReadyForPlayTimer(float Timer);
    
    UFUNCTION(BlueprintCallable)
    void SetDemoMode(EDemoModeType DemoType);
    
    UFUNCTION(BlueprintPure)
    bool SaveGameExistsAtIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    bool SaveGameAtIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool SaveCustomGame(const FString& CustomGameName);
    
    UFUNCTION(BlueprintCallable)
    bool SaveAtOldestIndex();
    
    UFUNCTION(BlueprintCallable)
    bool SaveAtCurrentIndex();
    
    UFUNCTION(BlueprintCallable)
    void RefreshSaveGames();
    
protected:
    UFUNCTION()
    void PreLoadMapCallback(const FString& MapName);
    
    UFUNCTION()
    void PostLoadMapCallback(UWorld* LoadedWorld);
    
    UFUNCTION()
    void PerformMapReadyTransition();
    
public:
    UFUNCTION()
    void OnTelemetryHeartbeatTimerComplete();
    
    UFUNCTION()
    void OnLocalAutoSaveTimerComplete();
    
protected:
    UFUNCTION()
    void OnDemoTimerExpired();
    
public:
    UFUNCTION()
    void OnAutoSavingDisabledTimerComplete();
    
    UFUNCTION()
    void OnAutoSaveTimerComplete();
    
    UFUNCTION(BlueprintCallable)
    bool NewGameFromExistingSave(UTWDSaveGame* SaveGame, FTWDPlayerCustomizationInfo PlayerCustomizationInfo, ETWDDifficultyMode DifficultyMode, bool bLoadNewGame);
    
    UFUNCTION(BlueprintCallable)
    bool NewGameAtIndex(int32 Index, FTWDPlayerCustomizationInfo PlayerCustomizationInfo, ETWDDifficultyMode DifficultyMode, bool bLoadNewGame, FName StartingMapName);
    
    UFUNCTION(BlueprintCallable)
    bool LoadSaveGame(UTWDSaveGame* SaveGame, bool bLoadIntoLevel);
    
protected:
    UFUNCTION()
    void LoadLightScenario();
    
public:
    UFUNCTION(BlueprintCallable)
    bool LoadGameAtIndex(int32 Index, bool bLoadIntoLevel);
    
    UFUNCTION(BlueprintCallable)
    bool LoadCustomGame(const FString& CustomGameName);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> K2_GetSortedSaveGameIndices();
    
    UFUNCTION(BlueprintPure)
    bool IsUserProfileCorrupt(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsTransitioningMapTimerActive();
    
    UFUNCTION(BlueprintCallable)
    bool IsTipValid(const FString& Tag);
    
    UFUNCTION(BlueprintPure)
    bool IsInMainMenuMap() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDemoMode(EDemoModeType DemoType) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTotalSaveIndices() const;
    
    UFUNCTION()
    TArray<int32> GetSortedSaveGameIndices(const TArray<UTWDSaveGame*>& SaveGames);
    
protected:
    UFUNCTION(BlueprintCallable)
    float GetSDIMobileGamma();
    
public:
    UFUNCTION(BlueprintCallable)
    void GetSaveGameDisplayData(int32 Index, FText& LevelText, int32& Day, FDateTime& SaveTime, float& TimePlayedInSeconds, ETWDDifficultyMode& DiffultyMode);
    
    UFUNCTION(BlueprintCallable)
    int32 GetOldestSaveIndex();
    
    UFUNCTION(BlueprintPure)
    int32 GetMostRecentSaveIndex() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetLoadingScreenIndex(TArray<float> MinPercentages, TArray<float> MaxPercentages) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetLevelStartSaveIndex() const;
    
    UFUNCTION(BlueprintPure)
    UTWDGeneralSaveData* GetGeneralSaveData() const;
    
    UFUNCTION(BlueprintPure)
    UTWDGameProgression* GetGameProgression() const;
    
    UFUNCTION(BlueprintPure)
    UTWDGameEntitlements* GetGameEntitlements() const;
    
    UFUNCTION(BlueprintPure)
    UTWDGameAchievements* GetGameAchievements() const;
    
    UFUNCTION(BlueprintCallable)
    EDemoModeType GetDemoMode();
    
    UFUNCTION(BlueprintPure)
    FString GetDefaultMap() const;
    
    UFUNCTION(BlueprintCallable)
    float GetColorMid();
    
protected:
    UFUNCTION()
    void EndLoadingScreen();
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableAutoSaving(bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void DisableAutoSavingForDuration(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void DisableAutoSaving();
    
    UFUNCTION(BlueprintCallable)
    bool DeleteGameAtIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool CanAutoSave();
    
    UFUNCTION(BlueprintCallable)
    void BeginMapTransition(FName TargetMapName);
    
protected:
    UFUNCTION()
    void BeginLoadingScreen(const FString& MapName);
    
public:
    UFUNCTION(BlueprintCallable)
    bool AutoSaveCurrentGame();
    
    UFUNCTION()
    void AddPlayerContextTelemetryData(TMap<FString, FString>& TelemetryData);
    
};

