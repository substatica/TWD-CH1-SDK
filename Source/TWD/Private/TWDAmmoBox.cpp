#include "TWDAmmoBox.h"
#include "Net/UnrealNetwork.h"

void ATWDAmmoBox::OnRep_RepTWDDurabilityData(const FTWDReplicatedDurabilityInterfaceData& OldRepTWDDurabilityData) {
}

void ATWDAmmoBox::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATWDAmmoBox, RepTWDDurabilityData);
}

ATWDAmmoBox::ATWDAmmoBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMergeBasedOnDurability = false;
}

