#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TWDWeaponActor.h"
#include "TWDWeaponBow.generated.h"

class ASDIInventoryActor;
class ATWDAmmoProp;

UCLASS(Blueprintable)
class TWD_API ATWDWeaponBow : public ATWDWeaponActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATWDAmmoProp> ArrowPropClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseArrowProps;
    
public:
    ATWDWeaponBow(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUseArrowProps() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<ASDIInventoryActor> GetArrowPropCurrencyClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<ATWDAmmoProp> GetArrowPropClass() const;
    
};

