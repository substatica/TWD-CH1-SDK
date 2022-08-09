#include "SDISkinnedActorStaticMesh.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class USDISkinObject;

void ASDISkinnedActorStaticMesh::ServerSetSkin_IFC_Implementation(TSubclassOf<USDISkinObject> SkinClass, bool bForceUpdate, bool bForceReInit) {
}
bool ASDISkinnedActorStaticMesh::ServerSetSkin_IFC_Validate(TSubclassOf<USDISkinObject> SkinClass, bool bForceUpdate, bool bForceReInit) {
    return true;
}

void ASDISkinnedActorStaticMesh::OnRep_ReplicatedSkinData(const FSDISkinReplicationData& OldReplicatedSkinData) {
}

void ASDISkinnedActorStaticMesh::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASDISkinnedActorStaticMesh, ReplicatedSkinData);
}

ASDISkinnedActorStaticMesh::ASDISkinnedActorStaticMesh() {
    this->SkinComponent = NULL;
}

