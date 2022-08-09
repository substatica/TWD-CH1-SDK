#pragma once
#include "CoreMinimal.h"
#include "TWDProp.h"
#include "TWDFlashlight.generated.h"

UCLASS()
class TWD_API ATWDFlashlight : public ATWDProp {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    bool bInsideOnRep_bRepInsideInventory;
    
public:
    ATWDFlashlight();
};

