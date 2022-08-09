#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TWDBTD_Base.h"
#include "TWDBTD_NPCShouldFleeBell.generated.h"

UCLASS(BlueprintType)
class TWD_API UTWDBTD_NPCShouldFleeBell : public UTWDBTD_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlackboardKeySelector ShouldFleeKey;
    
    UTWDBTD_NPCShouldFleeBell();
};

