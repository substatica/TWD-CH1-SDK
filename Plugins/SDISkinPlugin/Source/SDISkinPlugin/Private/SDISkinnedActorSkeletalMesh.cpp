#include "SDISkinnedActorSkeletalMesh.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class USDISkinObject;

void ASDISkinnedActorSkeletalMesh::ServerSetSkin_IFC_Implementation(TSubclassOf<USDISkinObject> SkinClass, bool bForceUpdate, bool bForceReInit) {
}
bool ASDISkinnedActorSkeletalMesh::ServerSetSkin_IFC_Validate(TSubclassOf<USDISkinObject> SkinClass, bool bForceUpdate, bool bForceReInit) {
    return true;
}

void ASDISkinnedActorSkeletalMesh::OnRep_ReplicatedSkinData(const FSDISkinReplicationData& OldReplicatedSkinData) {
}

void ASDISkinnedActorSkeletalMesh::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASDISkinnedActorSkeletalMesh, ReplicatedSkinData);
}

ASDISkinnedActorSkeletalMesh::ASDISkinnedActorSkeletalMesh() {
    this->SkinComponent = NULL;
}

