#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TWDWaypointEventHistoryEventMap.h"
#include "ETWDWaypointTriggerEvent.h"
#include "UObject/NoExportTypes.h"
#include "TWDWaypointSettings.h"
#include "ETWDWaypointTriggerAction.h"
#include "TWDWaypointPatrolComponent.generated.h"

class ATWDWaypoint;
class ATWDWaypointPath;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWD_API UTWDWaypointPatrolComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastIndexChange;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATWDWaypointPath* WaypointPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ATWDWaypoint*, FTWDWaypointEventHistoryEventMap> EventHistory;
    
public:
    UTWDWaypointPatrolComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasEventSeenForActor(AActor* Actor, ATWDWaypoint* Waypoint, ETWDWaypointTriggerEvent Event) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasWaypointPath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCurrentWaypoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTWDWaypointSettings GetWaypointSettingsAtIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATWDWaypointPath* GetWaypointPath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCurrentWaypointPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentWaypointIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATWDWaypoint* GetCurrentWaypoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETWDWaypointTriggerAction GetCurrentTriggerAction() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearWaypointPath();
    
    UFUNCTION(BlueprintCallable)
    void ClearWaypointHistory(ATWDWaypoint* Waypoint);
    
};

