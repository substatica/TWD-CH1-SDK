#include "SDIWeaponAttachment.h"
#include "Net/UnrealNetwork.h"

class ASDIWeaponActor;

void ASDIWeaponAttachment::WeaponOwnerUpdated_Implementation() {
}

void ASDIWeaponAttachment::SetWeaponOwner_Implementation(ASDIWeaponActor* NewOwner) {
}

void ASDIWeaponAttachment::ServerSetWeaponOwner_Implementation(ASDIWeaponActor* NewOwner) {
}
bool ASDIWeaponAttachment::ServerSetWeaponOwner_Validate(ASDIWeaponActor* NewOwner) {
    return true;
}

void ASDIWeaponAttachment::ServerDetachFromWeapon_Implementation() {
}
bool ASDIWeaponAttachment::ServerDetachFromWeapon_Validate() {
    return true;
}

void ASDIWeaponAttachment::ServerAttachToWeapon_Implementation() {
}
bool ASDIWeaponAttachment::ServerAttachToWeapon_Validate() {
    return true;
}

void ASDIWeaponAttachment::OnRep_RepWeaponOwner(ASDIWeaponActor* OldRepWeaponOwner) {
}

void ASDIWeaponAttachment::OnRep_bRepAttached(bool OldbRepAttached) {
}

bool ASDIWeaponAttachment::IsAttached() const {
    return false;
}

ASDIWeaponActor* ASDIWeaponAttachment::GetWeaponOwner() const {
    return NULL;
}

void ASDIWeaponAttachment::DetachFromWeapon_Implementation(bool bForce, bool bRemove, bool bReplicate) {
}

bool ASDIWeaponAttachment::AttachToWeapon_Implementation(bool bForce, bool bReplicate) {
    return false;
}

bool ASDIWeaponAttachment::AllowRemoval_Implementation() const {
    return false;
}

void ASDIWeaponAttachment::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASDIWeaponAttachment, RepWeaponOwner);
    DOREPLIFETIME(ASDIWeaponAttachment, bRepAttached);
}

ASDIWeaponAttachment::ASDIWeaponAttachment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttachmentType = ESDIWeaponAttachmentType::Tuner;
    this->bAllowRemoval = false;
    this->AttachDistance = 10.00f;
    this->RepWeaponOwner = NULL;
    this->LocalWeaponOwner = NULL;
    this->bRepAttached = false;
    this->bLocalAttached = false;
}

