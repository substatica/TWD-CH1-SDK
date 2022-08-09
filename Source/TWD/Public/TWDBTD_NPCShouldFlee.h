#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TWDBTD_Base.h"
#include "TWDBTD_NPCShouldFlee.generated.h"

UCLASS(BlueprintType)
class TWD_API UTWDBTD_NPCShouldFlee : public UTWDBTD_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlackboardKeySelector CharacterReactionKey;
    
    UTWDBTD_NPCShouldFlee();
};

