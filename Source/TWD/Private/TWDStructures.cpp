#include "TWDStructures.h"

class AActor;

void UTWDStructures::RestoreAttachments(const FAttachmentset& Attachmentset) {
}

bool UTWDStructures::GetLastNonVRMeleeAttackHitOn(AActor* Actor, const FTWDNonVRMeleeAttackDetails& Details, FTWDNonVRMeleeAttackHitDetails& OutHit) {
    return false;
}

bool UTWDStructures::GetLastNonVRMeleeAttackHit(const FTWDNonVRMeleeAttackDetails& Details, FTWDNonVRMeleeAttackHitDetails& OutHit) {
    return false;
}

void UTWDStructures::CacheAttachments(FAttachmentset& Attachmentset, AActor* Actor) {
}

UTWDStructures::UTWDStructures() {
}

