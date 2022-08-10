#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TWDBTT_Base.generated.h"

class AAIController;

UCLASS(Blueprintable)
class TWD_API UTWDBTT_Base : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    uint8 bShowPropertyDetails: 1;
    
    UTWDBTT_Base();
    
    UFUNCTION(BlueprintNativeEvent)
    EBTNodeResult::Type OnTick(AAIController* Controller, float DeltaSeconds);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnDeactivate(AAIController* Controller);
    
    UFUNCTION(BlueprintNativeEvent)
    EBTNodeResult::Type OnActivate(AAIController* Controller);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnAbort(AAIController* Controller);
    
};
