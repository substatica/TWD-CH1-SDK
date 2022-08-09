#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "UObject/NoExportTypes.h"
#include "MoveRequestedEventDelegate.h"
#include "TWDPathFollowingComponent.generated.h"

class UNavigationQueryFilter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWD_API UTWDPathFollowingComponent : public UCrowdFollowingComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoveRequestedEvent MoveRequestedEvent;
    
    UTWDPathFollowingComponent();
    UFUNCTION(BlueprintCallable)
    void SetSlowdownAtGoalBlueprint(bool bDoSlowDown);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSlowdownAtGoal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalculatePathComplexity(FVector StartingLocation, FVector EndingLocation, TSubclassOf<UNavigationQueryFilter> FilterClass, float MaxDistanceRatio, float MaxHeightDifference) const;
    
};

