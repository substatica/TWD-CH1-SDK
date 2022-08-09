#pragma once
#include "CoreMinimal.h"
#include "SDIAnimNode_ThirdPersonArmIK.h"
#include "TWDAnimNode_ThirdPersonArmIK.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FTWDAnimNode_ThirdPersonArmIK : public FSDIAnimNode_ThirdPersonArmIK {
    GENERATED_BODY()
public:
    FTWDAnimNode_ThirdPersonArmIK();
};

