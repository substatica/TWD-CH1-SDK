#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TWDUniqueEntitlementItemID.h"
#include "TWDGameEntitlements.generated.h"

UCLASS(Blueprintable)
class TWD_API UTWDGameEntitlements : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEntitlementSystemReady;
    
public:
    UTWDGameEntitlements();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEntitlementSystemReady() const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckItemEntitlement(const FTWDUniqueEntitlementItemID& ItemId);
    
};

