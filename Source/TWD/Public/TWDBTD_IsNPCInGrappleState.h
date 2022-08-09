#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TWDBTD_Base.h"
#include "TWDBTD_IsNPCInGrappleState.generated.h"

UCLASS(Blueprintable)
class TWD_API UTWDBTD_IsNPCInGrappleState : public UTWDBTD_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlackboardKeySelector GrappleStateKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlackboardKeySelector GrappleAttackerKey;
    
    UTWDBTD_IsNPCInGrappleState();
    UFUNCTION(BlueprintImplementableEvent)
    TArray<uint8> GetGrappleStateEnumValues() const;
    
};

