#pragma once
#include "CoreMinimal.h"
#include "TWDProp.h"
#include "TWDFlashlight.generated.h"

UCLASS(Blueprintable)
class TWD_API ATWDFlashlight : public ATWDProp {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInsideOnRep_bRepInsideInventory;
    
public:
    ATWDFlashlight(const FObjectInitializer& ObjectInitializer);
};

