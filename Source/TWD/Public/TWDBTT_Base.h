#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TWDBTT_Base.generated.h"

class AAIController;

UCLASS()
class TWD_API UTWDBTT_Base : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 bShowPropertyDetails: 1;
    
    UTWDBTT_Base();
    UFUNCTION()
    TEnumAsByte<EBTNodeResult::Type> OnTick(AAIController* Controller, float DeltaSeconds);
    
    UFUNCTION()
    void OnDeactivate(AAIController* Controller);
    
    UFUNCTION()
    TEnumAsByte<EBTNodeResult::Type> OnActivate(AAIController* Controller);
    
    UFUNCTION()
    void OnAbort(AAIController* Controller);

};
