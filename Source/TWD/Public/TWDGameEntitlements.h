#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TWDUniqueEntitlementItemID.h"
#include "TWDGameEntitlements.generated.h"

UCLASS(BlueprintType)
class TWD_API UTWDGameEntitlements : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    bool bEntitlementSystemReady;
    
public:
    UTWDGameEntitlements();
    UFUNCTION(BlueprintPure)
    bool IsEntitlementSystemReady() const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckItemEntitlement(const FTWDUniqueEntitlementItemID& ItemId);
    
};

