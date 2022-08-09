#include "TWDAmmoProp.h"
#include "Templates/SubclassOf.h"
#include "SDIPointGripComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/ArrowComponent.h"

class UObject;
class ASDIInventoryActor;

ASDIInventoryActor* ATWDAmmoProp::GetCurrencyInstance(UObject* InventoryHolder, TSubclassOf<ASDIInventoryActor> CurrencyClass) {
    return NULL;
}

void ATWDAmmoProp::DropAmmoProp_Implementation() {
}

ATWDAmmoProp::ATWDAmmoProp() {
    this->AmmoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AmmoMesh"));
    this->GripLeft = CreateDefaultSubobject<USDIPointGripComponent>(TEXT("GripLeft"));
    this->GripRight = CreateDefaultSubobject<USDIPointGripComponent>(TEXT("GripRight"));
    this->InsertDirection = CreateDefaultSubobject<UArrowComponent>(TEXT("InsertDirection"));
    this->AmmoCurrencyClass = NULL;
}

