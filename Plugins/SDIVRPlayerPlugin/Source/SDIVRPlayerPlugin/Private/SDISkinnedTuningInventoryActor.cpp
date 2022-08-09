#include "SDISkinnedTuningInventoryActor.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class USDISkinObject;
class USceneComponent;

void ASDISkinnedTuningInventoryActor::ServerSetSkin_IFC_Implementation(TSubclassOf<USDISkinObject> SkinClass, bool bForceUpdate, bool bForceReInit) {
}
bool ASDISkinnedTuningInventoryActor::ServerSetSkin_IFC_Validate(TSubclassOf<USDISkinObject> SkinClass, bool bForceUpdate, bool bForceReInit) {
    return true;
}

void ASDISkinnedTuningInventoryActor::OnRep_ReplicatedSkinData(const FSDISkinReplicationData& OldReplicatedSkinData) {
}

USceneComponent* ASDISkinnedTuningInventoryActor::GetSkinComponentBP_Implementation() const {
    return NULL;
}

void ASDISkinnedTuningInventoryActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASDISkinnedTuningInventoryActor, ReplicatedSkinData);
}

ASDISkinnedTuningInventoryActor::ASDISkinnedTuningInventoryActor() {
}

