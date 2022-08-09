#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "UObject/NoExportTypes.h"
#include "MoveRequestedEventDelegate.h"
#include "TWDPathFollowingComponent.generated.h"

class UNavigationQueryFilter;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWD_API UTWDPathFollowingComponent : public UCrowdFollowingComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMoveRequestedEvent MoveRequestedEvent;
    
    UTWDPathFollowingComponent();
    UFUNCTION(BlueprintCallable)
    void SetSlowdownAtGoalBlueprint(bool bDoSlowDown);
    
    UFUNCTION(BlueprintPure)
    bool GetSlowdownAtGoal() const;
    
    UFUNCTION(BlueprintPure)
    float CalculatePathComplexity(FVector StartingLocation, FVector EndingLocation, TSubclassOf<UNavigationQueryFilter> FilterClass, float MaxDistanceRatio, float MaxHeightDifference) const;
    
};

