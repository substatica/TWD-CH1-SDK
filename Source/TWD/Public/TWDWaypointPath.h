#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TWDWaypointSettings.h"
#include "ETWDWaypointTriggerEvent.h"
#include "TWDWaypointPath.generated.h"

class UTWDWaypointPatrolComponent;
class ATWDWaypoint;
class USplineComponent;

UCLASS(Blueprintable)
class TWD_API ATWDWaypointPath : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDWaypointSettings DefaultWaypointSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTWDWaypointSettings> Waypoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATWDWaypoint*> WaypointList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLooping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDebugWapointConnections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* EditorPathSpline;
    
    ATWDWaypointPath();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnassigned(UTWDWaypointPatrolComponent* PatrolComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAssigned(UTWDWaypointPatrolComponent* PatrolComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTWDWaypointSettings GetWaypointSettingsAtIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWaypointIndex(ATWDWaypoint* Waypoint) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATWDWaypoint* GetWaypointAtIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanActorSendWaypointEvent(const AActor* Actor, ATWDWaypoint* Waypoint, ETWDWaypointTriggerEvent Event) const;
    
};

