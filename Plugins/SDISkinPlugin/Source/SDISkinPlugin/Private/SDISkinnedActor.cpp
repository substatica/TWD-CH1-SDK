#include "SDISkinnedActor.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class USDISkinObject;

void ASDISkinnedActor::ServerSetSkin_IFC_Implementation(TSubclassOf<USDISkinObject> SkinClass, bool bForceUpdate, bool bForceReInit) {
}
bool ASDISkinnedActor::ServerSetSkin_IFC_Validate(TSubclassOf<USDISkinObject> SkinClass, bool bForceUpdate, bool bForceReInit) {
    return true;
}

void ASDISkinnedActor::OnRep_ReplicatedSkinData(const FSDISkinReplicationData& OldReplicatedSkinData) {
}

void ASDISkinnedActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASDISkinnedActor, ReplicatedSkinData);
}

ASDISkinnedActor::ASDISkinnedActor() {
    this->SkinComponent = NULL;
}

