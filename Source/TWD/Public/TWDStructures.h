#pragma once
#include "CoreMinimal.h"
#include "TWDNonVRMeleeAttackDetails.h"
#include "Attachmentset.h"
#include "SDIVRPlayerStructures.h"
#include "TWDNonVRMeleeAttackHitDetails.h"
#include "TWDStructures.generated.h"

class AActor;

UCLASS()
class UTWDStructures : public USDIVRPlayerStructures {
    GENERATED_BODY()
public:
    UTWDStructures();
    UFUNCTION(BlueprintCallable)
    static void RestoreAttachments(const FAttachmentset& Attachmentset);
    
    UFUNCTION(BlueprintPure)
    static bool GetLastNonVRMeleeAttackHitOn(AActor* Actor, const FTWDNonVRMeleeAttackDetails& Details, FTWDNonVRMeleeAttackHitDetails& OutHit);
    
    UFUNCTION(BlueprintPure)
    static bool GetLastNonVRMeleeAttackHit(const FTWDNonVRMeleeAttackDetails& Details, FTWDNonVRMeleeAttackHitDetails& OutHit);
    
    UFUNCTION(BlueprintCallable)
    static void CacheAttachments(UPARAM(Ref) FAttachmentset& Attachmentset, AActor* Actor);
    
};

