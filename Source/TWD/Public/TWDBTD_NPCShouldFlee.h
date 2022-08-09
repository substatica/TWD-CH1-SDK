#pragma once
#include "CoreMinimal.h"
#include "TWDBTD_Base.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TWDBTD_NPCShouldFlee.generated.h"

UCLASS(Blueprintable)
class TWD_API UTWDBTD_NPCShouldFlee : public UTWDBTD_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector CharacterReactionKey;
    
    UTWDBTD_NPCShouldFlee();
};

