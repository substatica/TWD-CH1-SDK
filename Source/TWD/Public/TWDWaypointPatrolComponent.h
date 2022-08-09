#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ETWDWaypointTriggerEvent.h"
#include "TWDWaypointEventHistoryEventMap.h"
#include "TWDWaypointSettings.h"
#include "UObject/NoExportTypes.h"
#include "ETWDWaypointTriggerAction.h"
#include "TWDWaypointPatrolComponent.generated.h"

class ATWDWaypointPath;
class ATWDWaypoint;
class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWD_API UTWDWaypointPatrolComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 LastIndexChange;
    
private:
    UPROPERTY()
    ATWDWaypointPath* WaypointPath;
    
    UPROPERTY()
    TMap<ATWDWaypoint*, FTWDWaypointEventHistoryEventMap> EventHistory;
    
public:
    UTWDWaypointPatrolComponent();
    UFUNCTION(BlueprintPure)
    bool WasEventSeenForActor(AActor* Actor, ATWDWaypoint* Waypoint, ETWDWaypointTriggerEvent Event) const;
    
    UFUNCTION(BlueprintPure)
    bool WasEventSeen(ATWDWaypoint* Waypoint, ETWDWaypointTriggerEvent Event) const;
    
    UFUNCTION(BlueprintCallable)
    void SetWaypointPath(ATWDWaypointPath* NewWaypointPath);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentWaypointIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void ResetHistory();
    
    UFUNCTION(BlueprintCallable)
    void RecordEvent(AActor* Actor, ATWDWaypoint* Waypoint, ETWDWaypointTriggerEvent Event);
    
    UFUNCTION(BlueprintCallable)
    FVector PrevWaypointPosition();
    
    UFUNCTION(BlueprintCallable)
    FVector NextWaypointPosition();
    
    UFUNCTION(BlueprintPure)
    bool HasWaypointPath() const;
    
    UFUNCTION(BlueprintPure)
    bool HasCurrentWaypoint() const;
    
    UFUNCTION(BlueprintPure)
    FTWDWaypointSettings GetWaypointSettingsAtIndex(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    ATWDWaypointPath* GetWaypointPath() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetCurrentWaypointPosition() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentWaypointIndex() const;
    
    UFUNCTION(BlueprintPure)
    ATWDWaypoint* GetCurrentWaypoint() const;
    
    UFUNCTION(BlueprintPure)
    ETWDWaypointTriggerAction GetCurrentTriggerAction() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearWaypointPath();
    
    UFUNCTION(BlueprintCallable)
    void ClearWaypointHistory(ATWDWaypoint* Waypoint);
    
};

