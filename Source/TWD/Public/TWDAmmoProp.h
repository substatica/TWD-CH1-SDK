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

UCLASS(Blueprintable)
class TWD_API ATWDAmmoProp : public ATWDWeaponActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* AmmoMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USDIPointGripComponent* GripLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USDIPointGripComponent* GripRight;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ASDIInventoryActor> LastReturnedCurrencyInstance;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* InsertDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASDIInventoryActor> AmmoCurrencyClass;
    
    ATWDAmmoProp();
    UFUNCTION(BlueprintCallable)
    ASDIInventoryActor* GetCurrencyInstance(UObject* InventoryHolder, TSubclassOf<ASDIInventoryActor> CurrencyClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DropAmmoProp();
    
};

