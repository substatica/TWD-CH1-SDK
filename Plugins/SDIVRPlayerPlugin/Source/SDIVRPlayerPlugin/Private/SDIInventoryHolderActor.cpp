#include "SDIInventoryHolderActor.h"
#include "Net/UnrealNetwork.h"

class ASDIInventoryActor;

void ASDIInventoryHolderActor::OnRep_RepInventoryList(const TArray<ASDIInventoryActor*>& OldRepInventoryList) {
}

void ASDIInventoryHolderActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASDIInventoryHolderActor, RepInventoryList);
}

ASDIInventoryHolderActor::ASDIInventoryHolderActor() {
}

