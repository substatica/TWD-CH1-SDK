#pragma once
#include "CoreMinimal.h"
#include "TWDGameState_OnResetBellsDelegate.h"
#include "SDICoreGameState.h"
#include "Engine/EngineTypes.h"
#include "TWDGameState_OnRingBellsDelegate.h"
#include "TWDGameState_OnPreRingBellsDelegate.h"
#include "BellAlarmDelegate.h"
#include "HordeTimerChangedDelegate.h"
#include "TWDGameState.generated.h"

class ULevel;
class UWorld;

UCLASS()
class TWD_API ATWDGameState : public ASDICoreGameState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float DefaultTimeUntilBells;
    
    UPROPERTY(EditDefaultsOnly)
    float BellAlarmTime;
    
    UPROPERTY(EditDefaultsOnly)
    float PreHordeBellTime;
    
    UPROPERTY(EditDefaultsOnly)
    float PreHordeAutosaveCutoff;
    
    UPROPERTY(Transient)
    int32 ActiveSurvivorsMax;
    
    UPROPERTY(Transient)
    int32 ActiveTotalCharactersMax;
    
    UPROPERTY(Transient)
    int32 SurvivorMaxSeenSignifanceBucket[4];
    
    UPROPERTY(Transient)
    int32 WalkerMaxSeenSignifanceBucket[4];
    
    UPROPERTY(EditDefaultsOnly)
    float ReviveBeforeHordeTimerDelay;
    
    UPROPERTY(EditDefaultsOnly)
    float ReviveAfterHordeTimerDelay;
    
public:
    UPROPERTY()
    FTimerHandle HordeTimerHandle;
    
    UPROPERTY()
    FTimerHandle PreHordeTimerHandle;
    
    UPROPERTY()
    FTimerHandle BellAlarmTimerHandle;
    
    UPROPERTY()
    FTimerHandle HordeAchievementTimerHandle;
    
    UPROPERTY(BlueprintAssignable)
    FTWDGameState_OnResetBells OnResetBellsDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FTWDGameState_OnRingBells OnRingBellsDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FTWDGameState_OnPreRingBells OnPreRingBellsDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FBellAlarm BellAlarm;
    
    UPROPERTY(BlueprintAssignable)
    FHordeTimerChanged HordeTimerChanged;
    
    UPROPERTY(BlueprintAssignable)
    FHordeTimerChanged PreHordeTimerChanged;
    
    UPROPERTY(BlueprintAssignable)
    FHordeTimerChanged AlarmTimerChanged;
    
    UPROPERTY(Transient)
    float HordeTimerStartTimestamp;
    
    UPROPERTY(Transient)
    float LeastSignificance;
    
    UPROPERTY(Config)
    int32 MaxFullsignificanceAllowed;
    
    UPROPERTY(Config)
    int32 MaxCharactersSwitchAllowed;
    
    UPROPERTY(Transient)
    int32 CurrentCharactersSwitch;
    
    ATWDGameState();
    UFUNCTION(BlueprintNativeEvent)
    void StopMusic();
    
    UFUNCTION(BlueprintCallable)
    void StopHordeTimer();
    
    UFUNCTION(BlueprintCallable)
    void RushBells(float NewDelay);
    
    UFUNCTION(BlueprintCallable)
    void ReviveTimer();
    
    UFUNCTION()
    void OnPreHordeTimerComplete();
    
    UFUNCTION()
    void OnLevelChanged(ULevel* Level, UWorld* World);
    
    UFUNCTION()
    void OnHordeTimerComplete();
    
    UFUNCTION()
    void OnBellAlarmTimerComplete() const;
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastExecuteRingBellsDelegate();
    
public:
    UFUNCTION(BlueprintCallable)
    void K2_StartHordeTimer(float NewDelay);
    
    UFUNCTION(BlueprintPure)
    bool IsHordeTimerActive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAlarmTimerActive() const;
    
    UFUNCTION(BlueprintPure)
    float GetTimeUntilBells() const;
    
    UFUNCTION(BlueprintPure)
    float GetTimeUntilBellAlarm() const;
    
    UFUNCTION(BlueprintCallable)
    float GetStartTimeUntilBells();
    
    UFUNCTION(BlueprintPure)
    float GetPreHordeAutosaveCutoff() const;
    
    UFUNCTION()
    bool GetCharacterSwitchToken();
    
};

