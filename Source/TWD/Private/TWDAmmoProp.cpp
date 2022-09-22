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

ATWDAmmoProp::ATWDAmmoProp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AmmoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AmmoMesh"));
    this->AmmoMesh->AttachTo(GetRootComponent());
    
    this->GripLeft = CreateDefaultSubobject<USDIPointGripComponent>(TEXT("GripLeft"));
    this->GripLeft->AttachTo(GetRootComponent());

    this->GripRight = CreateDefaultSubobject<USDIPointGripComponent>(TEXT("GripRight"));
    this->GripRight->AttachTo(GetRootComponent());

    this->InsertDirection = CreateDefaultSubobject<UArrowComponent>(TEXT("InsertDirection"));
    this->InsertDirection->AttachTo(GetRootComponent());

    this->AmmoCurrencyClass = NULL;
}

