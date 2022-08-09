#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "EMapTerritoryNodeType.h"
#include "TWDSerializedWorldEvent.h"
#include "LevelScenerioData.h"
#include "EventDeckContentsEntry.h"
#include "Curves/CurveFloat.h"
#include "ETWDWorldEventType.h"
#include "TWDScenarioManager.generated.h"

class UTWDMapManager;
class UTWDWorldEvent;
class UDataTable;
class UTWDSaveGame;

UCLASS(Blueprintable)
class TWD_API UTWDScenarioManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTWDMapManager* MapManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMapTerritoryNodeType, FLevelScenerioData> MapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTWDWorldEvent*> ActiveEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTWDSerializedWorldEvent> ExpendedEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEventDeckContentsEntry> EventDeck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* EventDeckContents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEventDeckUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumEventsPerMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve MinEventsPerDayCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve MaxEventsPerDayCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETWDWorldEventType, FRuntimeFloatCurve> EventTypeValueIncrement;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> ScenarioTagsToForceLoad;
    
    UTWDScenarioManager();
    UFUNCTION(BlueprintCallable)
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
    
    UFUNCTION(BlueprintCallable)
    void SaveToSaveData(UTWDSaveGame* SaveGame);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCompletedActiveEvents();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllActiveEvents();
    
    UFUNCTION(BlueprintCallable)
    void RemoveActiveEventByClass(TSubclassOf<UTWDWorldEvent> EventToRemove);
    
    UFUNCTION(BlueprintCallable)
    void RemoveActiveEvent(UTWDWorldEvent* EventToRemove);
    
    UFUNCTION(BlueprintCallable)
    void LoadFromSaveData(UTWDSaveGame* SaveGame);
    
    UFUNCTION(BlueprintCallable)
    bool HandleNewWorldEvent(TSubclassOf<UTWDWorldEvent> NewEventClass);
    
    UFUNCTION(BlueprintCallable)
    void HandleNewDay();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetScenarioCommands(EMapTerritoryNodeType MapSpecifier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentHerdTimerMultiplier() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UTWDWorldEvent*> GetConflictingEvents(const UTWDWorldEvent* TestEvent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UTWDWorldEvent*> GetActiveEventsPendingNotification() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UTWDWorldEvent*> GetActiveEventsOfType(const ETWDWorldEventType EventType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UTWDWorldEvent*> GetActiveEventsForMap(const EMapTerritoryNodeType Map, const bool bNightEvents) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UTWDWorldEvent*> GetActiveEventsDetailed(const EMapTerritoryNodeType Map, const ETWDWorldEventType EventType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UTWDWorldEvent*> GetActiveEvents() const;
    
    UFUNCTION(BlueprintCallable)
    UTWDWorldEvent* AddActiveEventFromClass(TSubclassOf<UTWDWorldEvent> NewEvent, bool bNotifyMapManager, bool bRemoveConflictingEvents, bool bForceAdd);
    
    UFUNCTION(BlueprintCallable)
    bool AddActiveEvent(UTWDWorldEvent* EventClass, bool bNotifyMapManager, bool bRemoveConflictingEvents, bool bForceAdd);
    
};

