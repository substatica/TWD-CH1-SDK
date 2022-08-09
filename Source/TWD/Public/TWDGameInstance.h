#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EDemoModeType.h"
#include "SDICoreGameInstance.h"
#include "TWDVRPlatformInfo.h"
#include "TWDEstimatedLevelLoadingTime.h"
#include "TWDLoadingScreenSettings.h"
#include "PreReadyForPlayDelegate.h"
#include "ReadyForPlayDelegate.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TWDWarningErrorMessageCache.h"
#include "ETWDDifficultyMode.h"
#include "TWDSaveGameProfileData.h"
#include "TWDPlayerCustomizationInfo.h"
#include "UObject/NoExportTypes.h"
#include "TWDGameInstance.generated.h"

class UTexture;
class UDataTable;
class UObject;
class UTWDGameProgression;
class UTWDGameAchievements;
class UTWDGameEntitlements;
class UTWDGeneralSaveData;
class UTWDSerializedProfile;
class UTWDSaveGame;
class UWorld;

UCLASS(Blueprintable, NonTransient)
class TWD_API UTWDGameInstance : public USDICoreGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    uint32 GameSaveDataVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowAutoSaving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentUserProfileIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentSaveProfileIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumPlayerWalkerDistanceToAutoSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRevivePlayer;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTWDVRPlatformInfo> VRPlatformInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPerformedInitialVRReset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTWDEstimatedLevelLoadingTime> EstimatedLevelLoadingTimes;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultLevelLoadingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBootSequenceShown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreReadyForPlayTimerDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PreReadyForPlayTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LastLoadingBarSize;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPreReadyForPlay PreReadyForPlay;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReadyForPlay ReadyForPlay;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDemoModeType DemoModeType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DemoTimerDuration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    FSoftClassPath GameSaveClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FramerateStabilizationMilliseconds;
    
    UPROPERTY(Config, EditAnywhere)
    double MaxFramerateStabilizationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDLoadingScreenSettings LoadingScreenSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapTransitionFadeOutDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapTransitionFadeInDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapTransitionFadeInDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> PlatformAssetOverrideTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FSoftObjectPath, UObject*> PlatformAssetOverrideCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasCachedPlatformAssetOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ValidTipTagRoots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName MapTransitionTargetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTWDWarningErrorMessageCache> WarningCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTWDWarningErrorMessageCache> ErrorCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTWDGameProgression* GameProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTWDGameAchievements* GameAchievements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTWDGameEntitlements* GameEntitlements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTWDGameProgression> GameProgressionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlushStreamingDuringLoadingScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PS4_LowGoreCoutryCodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* IntentRecognizer;
    
    UPROPERTY(EditAnywhere, Transient)
    FTWDSaveGameProfileData LocalUserProfileData[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTWDGeneralSaveData* GeneralSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTWDSerializedProfile*> LocalUserProfileSerialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<bool> UserProfileCorruptStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTWDSaveGame* LocalRecentAutoSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LocalAutoSaveFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AutoSaveFrequency;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelemetryHeartbeatFrequency;
    
    UPROPERTY(EditAnywhere, Transient)
    double SkinCacheLoadingDelayStart;
    
    UPROPERTY(EditAnywhere, Transient)
    double FramerateStabilizationDelayStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFlushStreaming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPreReadyForPlaySent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture* SplashTexture;
    
    UPROPERTY(EditAnywhere, Transient)
    double LevelLoadingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float EstimatedLevelLoadingTime;
    
public:
    UTWDGameInstance();
protected:
    UFUNCTION(BlueprintCallable)
    void TurnOnSplashScreen();
    
    UFUNCTION(BlueprintCallable)
    void TravelForMapTransition();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartDemoTimer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowLocalPlayerPosition();
    
    UFUNCTION(BlueprintCallable, Exec)
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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
    UFUNCTION(BlueprintCallable)
    void PreLoadMapCallback(const FString& MapName);
    
    UFUNCTION(BlueprintCallable)
    void PostLoadMapCallback(UWorld* LoadedWorld);
    
    UFUNCTION(BlueprintCallable)
    void PerformMapReadyTransition();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnTelemetryHeartbeatTimerComplete();
    
    UFUNCTION(BlueprintCallable)
    void OnLocalAutoSaveTimerComplete();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDemoTimerExpired();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAutoSavingDisabledTimerComplete();
    
    UFUNCTION(BlueprintCallable)
    void OnAutoSaveTimerComplete();
    
    UFUNCTION(BlueprintCallable)
    bool NewGameFromExistingSave(UTWDSaveGame* SaveGame, FTWDPlayerCustomizationInfo PlayerCustomizationInfo, ETWDDifficultyMode DifficultyMode, bool bLoadNewGame);
    
    UFUNCTION(BlueprintCallable)
    bool NewGameAtIndex(int32 Index, FTWDPlayerCustomizationInfo PlayerCustomizationInfo, ETWDDifficultyMode DifficultyMode, bool bLoadNewGame, FName StartingMapName);
    
    UFUNCTION(BlueprintCallable)
    bool LoadSaveGame(UTWDSaveGame* SaveGame, bool bLoadIntoLevel);
    
protected:
    UFUNCTION(BlueprintCallable)
    void LoadLightScenario();
    
public:
    UFUNCTION(BlueprintCallable)
    bool LoadGameAtIndex(int32 Index, bool bLoadIntoLevel);
    
    UFUNCTION(BlueprintCallable)
    bool LoadCustomGame(const FString& CustomGameName);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> K2_GetSortedSaveGameIndices();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUserProfileCorrupt(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsTransitioningMapTimerActive();
    
    UFUNCTION(BlueprintCallable)
    bool IsTipValid(const FString& Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInMainMenuMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDemoMode(EDemoModeType DemoType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalSaveIndices() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetSortedSaveGameIndices(const TArray<UTWDSaveGame*>& SaveGames);
    
protected:
    UFUNCTION(BlueprintCallable)
    float GetSDIMobileGamma();
    
public:
    UFUNCTION(BlueprintCallable)
    void GetSaveGameDisplayData(int32 Index, FText& LevelText, int32& Day, FDateTime& SaveTime, float& TimePlayedInSeconds, ETWDDifficultyMode& DiffultyMode);
    
    UFUNCTION(BlueprintCallable)
    int32 GetOldestSaveIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMostRecentSaveIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLoadingScreenIndex(TArray<float> MinPercentages, TArray<float> MaxPercentages) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLevelStartSaveIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTWDGeneralSaveData* GetGeneralSaveData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTWDGameProgression* GetGameProgression() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTWDGameEntitlements* GetGameEntitlements() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTWDGameAchievements* GetGameAchievements() const;
    
    UFUNCTION(BlueprintCallable)
    EDemoModeType GetDemoMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDefaultMap() const;
    
    UFUNCTION(BlueprintCallable)
    float GetColorMid();
    
protected:
    UFUNCTION(BlueprintCallable)
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
    UFUNCTION(BlueprintCallable)
    void BeginLoadingScreen(const FString& MapName);
    
public:
    UFUNCTION(BlueprintCallable)
    bool AutoSaveCurrentGame();
    
    UFUNCTION(BlueprintCallable)
    void AddPlayerContextTelemetryData(TMap<FString, FString>& TelemetryData);
    
};

