#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TWDWeaponActor.h"
#include "TWDAmmoProp.generated.h"

class UStaticMeshComponent;
class UObject;
class USDIPointGripComponent;
class ASDIInventoryActor;
class UArrowComponent;

UCLASS()
class TWD_API ATWDAmmoProp : public ATWDWeaponActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* AmmoMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USDIPointGripComponent* GripLeft;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USDIPointGripComponent* GripRight;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ASDIInventoryActor> LastReturnedCurrencyInstance;
    
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UArrowComponent* InsertDirection;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ASDIInventoryActor> AmmoCurrencyClass;
    
    ATWDAmmoProp();
    UFUNCTION(BlueprintCallable)
    ASDIInventoryActor* GetCurrencyInstance(UObject* InventoryHolder, TSubclassOf<ASDIInventoryActor> CurrencyClass);
    
    UFUNCTION(BlueprintNativeEvent)
    void DropAmmoProp();
    
};

