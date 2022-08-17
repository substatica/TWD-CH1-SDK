#include "TWDDismemberActor.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class USDISkinObject;
class AActor;

void ATWDDismemberActor::ServerSetSkin_IFC_Implementation(TSubclassOf<USDISkinObject> SkinClass, bool bForceUpdate, bool bForceReInit) {
}
bool ATWDDismemberActor::ServerSetSkin_IFC_Validate(TSubclassOf<USDISkinObject> SkinClass, bool bForceUpdate, bool bForceReInit) {
    return true;
}

void ATWDDismemberActor::OnRep_ReplicatedSkinData(const FSDISkinReplicationData& OldReplicatedSkinData) {
}

bool ATWDDismemberActor::Kill_Implementation() {
    return false;
}

bool ATWDDismemberActor::IsDead() const {
    return false;
}

ETWDCharacterHitRegion ATWDDismemberActor::GetDismemberRegion() const {
    return ETWDCharacterHitRegion::None;
}

void ATWDDismemberActor::CopyAppearance_Implementation(AActor* Actor, ETWDCharacterHitRegion Region) {
}

void ATWDDismemberActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATWDDismemberActor, ReplicatedSkinData);
}

ATWDDismemberActor::ATWDDismemberActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)  {
    this->DismemberRegion = ETWDCharacterHitRegion::None;
    this->Gender = EGender::Invalid;
    this->bDead = false;
    this->bIsEliteWalker = false;
    this->bIsHumanSkelMesh = false;
}

