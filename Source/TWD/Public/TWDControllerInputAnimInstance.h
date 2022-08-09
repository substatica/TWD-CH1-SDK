#pragma once
#include "CoreMinimal.h"
#include "SDIControllerInputAnimInstance.h"
#include "TWDControllerInputAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class TWD_API UTWDControllerInputAnimInstance : public USDIControllerInputAnimInstance {
    GENERATED_BODY()
public:
    UTWDControllerInputAnimInstance();
};

