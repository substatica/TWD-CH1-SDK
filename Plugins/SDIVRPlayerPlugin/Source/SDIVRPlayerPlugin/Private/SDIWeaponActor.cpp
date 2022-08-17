#include "SDIWeaponActor.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class ASDIWeaponAttachment;
class AActor;

void ASDIWeaponActor::WeaponAttachmentDetached_Implementation(ASDIWeaponAttachment* Attachment, bool bRemove) {
}

void ASDIWeaponActor::WeaponAttachmentAttached_Implementation(ASDIWeaponAttachment* Attachment) {
}

void ASDIWeaponActor::ServerRemoveWeaponAttachment_Implementation(TSubclassOf<ASDIWeaponAttachment> AttachmentClass) {
}
bool ASDIWeaponActor::ServerRemoveWeaponAttachment_Validate(TSubclassOf<ASDIWeaponAttachment> AttachmentClass) {
    return true;
}

void ASDIWeaponActor::ServerRemoveAllWeaponAttachments_Implementation() {
}
bool ASDIWeaponActor::ServerRemoveAllWeaponAttachments_Validate() {
    return true;
}

void ASDIWeaponActor::ServerDetachWeaponAttachment_Implementation(TSubclassOf<ASDIWeaponAttachment> AttachmentClass) {
}
bool ASDIWeaponActor::ServerDetachWeaponAttachment_Validate(TSubclassOf<ASDIWeaponAttachment> AttachmentClass) {
    return true;
}

void ASDIWeaponActor::ServerDetachAllWeaponAttachments_Implementation() {
}
bool ASDIWeaponActor::ServerDetachAllWeaponAttachments_Validate() {
    return true;
}

void ASDIWeaponActor::ServerAttachWeaponAttachment_Implementation(TSubclassOf<ASDIWeaponAttachment> AttachmentClass) {
}
bool ASDIWeaponActor::ServerAttachWeaponAttachment_Validate(TSubclassOf<ASDIWeaponAttachment> AttachmentClass) {
    return true;
}

void ASDIWeaponActor::ServerAddWeaponAttachmentInstance_Implementation(ASDIWeaponAttachment* Attachment) {
}
bool ASDIWeaponActor::ServerAddWeaponAttachmentInstance_Validate(ASDIWeaponAttachment* Attachment) {
    return true;
}

void ASDIWeaponActor::ServerAddWeaponAttachment_Implementation(TSubclassOf<ASDIWeaponAttachment> AttachmentClass) {
}
bool ASDIWeaponActor::ServerAddWeaponAttachment_Validate(TSubclassOf<ASDIWeaponAttachment> AttachmentClass) {
    return true;
}

void ASDIWeaponActor::RemoveWeaponAttachment(TSubclassOf<ASDIWeaponAttachment> AttachmentClass) {
}

void ASDIWeaponActor::RemoveSpawnedActor(AActor* Actor) {
}

void ASDIWeaponActor::RemoveAllWeaponAttachments() {
}

void ASDIWeaponActor::OnRep_RepSpawnedActors(const TArray<AActor*>& OldRepSpawnedActors) {
}

void ASDIWeaponActor::OnRep_RepAttachments(const TArray<ASDIWeaponAttachment*>& OldRepAttachments) {
}

bool ASDIWeaponActor::IsValidAttachment(TSubclassOf<ASDIWeaponAttachment> AttachmentClass) const {
    return false;
}

bool ASDIWeaponActor::IsAttachmentAttached(TSubclassOf<ASDIWeaponAttachment> AttachmentClass) const {
    return false;
}

int32 ASDIWeaponActor::GetValidAttachmentsByType(ESDIWeaponAttachmentType Type, TArray<TSubclassOf<ASDIWeaponAttachment>>& AttachmentClasses) const {
    return 0;
}

int32 ASDIWeaponActor::GetAttachmentsByType(ESDIWeaponAttachmentType Type, TArray<ASDIWeaponAttachment*>& Attachments, bool bAttachedOnly) const {
    return 0;
}

int32 ASDIWeaponActor::GetAttachments(TArray<ASDIWeaponAttachment*>& Attachments, bool bAttachedOnly) const {
    return 0;
}

ASDIWeaponAttachment* ASDIWeaponActor::GetAttachment(TSubclassOf<ASDIWeaponAttachment> AttachmentClass) const {
    return NULL;
}

void ASDIWeaponActor::DetachWeaponAttachment(TSubclassOf<ASDIWeaponAttachment> AttachmentClass) {
}

void ASDIWeaponActor::DetachAllWeaponAttachments() {
}

bool ASDIWeaponActor::AttachWeaponAttachment(TSubclassOf<ASDIWeaponAttachment> AttachmentClass) {
    return false;
}

bool ASDIWeaponActor::AddWeaponAttachmentInstance(ASDIWeaponAttachment* Attachment, bool bAttach) {
    return false;
}

bool ASDIWeaponActor::AddWeaponAttachment(TSubclassOf<ASDIWeaponAttachment> AttachmentClass, bool bAttach) {
    return false;
}

void ASDIWeaponActor::AddSpawnedActor(AActor* Actor) {
}

void ASDIWeaponActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASDIWeaponActor, RepSpawnedActors);
    DOREPLIFETIME(ASDIWeaponActor, RepAttachments);
}

ASDIWeaponActor::ASDIWeaponActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSwappingAttachments = false;
}

