#include "SDISkinnedInventoryActor.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class USDISkinObject;
class USceneComponent;

void ASDISkinnedInventoryActor::ServerSetSkin_IFC_Implementation(TSubclassOf<USDISkinObject> SkinClass, bool bForceUpdate, bool bForceReInit) {
}
bool ASDISkinnedInventoryActor::ServerSetSkin_IFC_Validate(TSubclassOf<USDISkinObject> SkinClass, bool bForceUpdate, bool bForceReInit) {
    return true;
}

void ASDISkinnedInventoryActor::OnRep_ReplicatedSkinData(const FSDISkinReplicationData& OldReplicatedSkinData) {
}

USceneComponent* ASDISkinnedInventoryActor::GetSkinComponentBP_Implementation() const {
    return NULL;
}

void ASDISkinnedInventoryActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASDISkinnedInventoryActor, ReplicatedSkinData);
}

ASDISkinnedInventoryActor::ASDISkinnedInventoryActor() {
}

