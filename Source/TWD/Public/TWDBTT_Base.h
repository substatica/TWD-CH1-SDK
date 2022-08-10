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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowPropertyDetails: 1;
    
    UTWDBTT_Base();
    UFUNCTION(BlueprintNativeEvent)
    TEnumAsByte<EBTNodeResult::Type> OnTick(AAIController* Controller, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDeactivate(AAIController* Controller);
    
    UFUNCTION(BlueprintNativeEvent)
    TEnumAsByte<EBTNodeResult::Type> OnActivate(AAIController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAbort(AAIController* Controller);
    
};
