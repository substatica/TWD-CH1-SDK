#pragma once
#include "CoreMinimal.h"
#include "TWDBTD_Base.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TWDBTD_NPCShouldFleeBell.generated.h"

UCLASS(Blueprintable)
class TWD_API UTWDBTD_NPCShouldFleeBell : public UTWDBTD_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ShouldFleeKey;
    
    UTWDBTD_NPCShouldFleeBell();
};

