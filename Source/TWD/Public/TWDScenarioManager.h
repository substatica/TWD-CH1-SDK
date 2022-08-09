#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EventDeckContentsEntry.h"
#include "UObject/Object.h"
#include "EMapTerritoryNodeType.h"
#include "TWDSerializedWorldEvent.h"
#include "LevelScenerioData.h"
#include "Curves/CurveFloat.h"
#include "ETWDWorldEventType.h"
#include "TWDScenarioManager.generated.h"

class UTWDMapManager;
class UTWDWorldEvent;
class UDataTable;
class UTWDSaveGame;

UCLASS(BlueprintType)
class TWD_API UTWDScenarioManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UTWDMapManager* MapManager;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EMapTerritoryNodeType, FLevelScenerioData> MapData;
    
    UPROPERTY(Transient)
    TArray<UTWDWorldEvent*> ActiveEvents;
    
    UPROPERTY(Transient)
    TArray<FTWDSerializedWorldEvent> ExpendedEvents;
    
    UPROPERTY(Transient)
    TArray<FEventDeckContentsEntry> EventDeck;
    
    UPROPERTY(EditDefaultsOnly, Transient)
    UDataTable* EventDeckContents;
    
    UPROPERTY(BlueprintReadOnly)
    bool bEventDeckUnlocked;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaximumEventsPerMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve MinEventsPerDayCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve MaxEventsPerDayCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<ETWDWorldEventType, FRuntimeFloatCurve> EventTypeValueIncrement;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    TArray<FName> ScenarioTagsToForceLoad;
    
    UTWDScenarioManager();
    UFUNCTION()
    void ValidateScenarioProgression();
    
    UFUNCTION(BlueprintCallable)
    void UnlockEventDeck(bool bImmediatelyDraw);
    
    UFUNCTION(BlueprintCallable)
    void SimulateEventDeckPercentages(int32 Days, int32 NumberSimulations, bool bLogNumberOfEvents, bool bLogNumberOfEventTypes, bool bLogActiveEventTypes);
    
    UFUNCTION(BlueprintCallable)
    void SimulateEventDeck(int32 Days, bool bLogDailyEvents, bool bLogEventDeckValues);
    
    UFUNCTION(BlueprintCallable)
    void SetEventNotificationState(UTWDWorldEvent* WorldEvent, bool bPlayerHasBeenNotified);
    
    UFUNCTION(BlueprintCallable)
    void SetEventDeckTypeEnabled(ETWDWorldEventType EventType, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetEventDeckEntryEnabled(TSubclassOf<UTWDWorldEvent> EventClass, bool bEnabled);
    
    UFUNCTION()
    void SaveToSaveData(UTWDSaveGame* SaveGame);
    
    UFUNCTION()
    void RemoveCompletedActiveEvents();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllActiveEvents();
    
    UFUNCTION(BlueprintCallable)
    void RemoveActiveEventByClass(TSubclassOf<UTWDWorldEvent> EventToRemove);
    
    UFUNCTION(BlueprintCallable)
    void RemoveActiveEvent(UTWDWorldEvent* EventToRemove);
    
    UFUNCTION()
    void LoadFromSaveData(UTWDSaveGame* SaveGame);
    
    UFUNCTION()
    bool HandleNewWorldEvent(TSubclassOf<UTWDWorldEvent> NewEventClass);
    
    UFUNCTION()
    void HandleNewDay();
    
    UFUNCTION()
    UDataTable* GetScenarioCommands(EMapTerritoryNodeType MapSpecifier) const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentHerdTimerMultiplier() const;
    
    UFUNCTION()
    TArray<UTWDWorldEvent*> GetConflictingEvents(const UTWDWorldEvent* TestEvent) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UTWDWorldEvent*> GetActiveEventsPendingNotification() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UTWDWorldEvent*> GetActiveEventsOfType(const ETWDWorldEventType EventType) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UTWDWorldEvent*> GetActiveEventsForMap(const EMapTerritoryNodeType Map, const bool bNightEvents) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UTWDWorldEvent*> GetActiveEventsDetailed(const EMapTerritoryNodeType Map, const ETWDWorldEventType EventType) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UTWDWorldEvent*> GetActiveEvents() const;
    
    UFUNCTION(BlueprintCallable)
    UTWDWorldEvent* AddActiveEventFromClass(TSubclassOf<UTWDWorldEvent> NewEvent, bool bNotifyMapManager, bool bRemoveConflictingEvents, bool bForceAdd);
    
    UFUNCTION(BlueprintCallable)
    bool AddActiveEvent(UTWDWorldEvent* EventClass, bool bNotifyMapManager, bool bRemoveConflictingEvents, bool bForceAdd);
    
};

