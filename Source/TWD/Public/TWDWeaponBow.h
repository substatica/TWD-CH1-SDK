#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TWDWeaponActor.h"
#include "TWDWeaponBow.generated.h"

class ASDIInventoryActor;
class ATWDAmmoProp;

UCLASS()
class TWD_API ATWDWeaponBow : public ATWDWeaponActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATWDAmmoProp> ArrowPropClass;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUseArrowProps;
    
public:
    ATWDWeaponBow();
    UFUNCTION(BlueprintPure)
    bool ShouldUseArrowProps() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<ASDIInventoryActor> GetArrowPropCurrencyClass() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<ATWDAmmoProp> GetArrowPropClass() const;
    
};

