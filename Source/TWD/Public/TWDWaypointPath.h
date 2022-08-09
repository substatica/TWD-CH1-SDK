#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TWDWaypointSettings.h"
#include "ETWDWaypointTriggerEvent.h"
#include "TWDWaypointPath.generated.h"

class UTWDWaypointPatrolComponent;
class ATWDWaypoint;
class USplineComponent;

UCLASS()
class TWD_API ATWDWaypointPath : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTWDWaypointSettings DefaultWaypointSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FTWDWaypointSettings> Waypoints;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<ATWDWaypoint*> WaypointList;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsLooping;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShowDebugWapointConnections;
    
    UPROPERTY(Export)
    USplineComponent* EditorPathSpline;
    
    ATWDWaypointPath();
    UFUNCTION(BlueprintImplementableEvent)
    void OnUnassigned(UTWDWaypointPatrolComponent* PatrolComponent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAssigned(UTWDWaypointPatrolComponent* PatrolComponent);
    
    UFUNCTION(BlueprintPure)
    FTWDWaypointSettings GetWaypointSettingsAtIndex(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetWaypointIndex(ATWDWaypoint* Waypoint) const;
    
    UFUNCTION(BlueprintPure)
    ATWDWaypoint* GetWaypointAtIndex(int32 Index) const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool CanActorSendWaypointEvent(const AActor* Actor, ATWDWaypoint* Waypoint, ETWDWaypointTriggerEvent Event) const;
    
};

