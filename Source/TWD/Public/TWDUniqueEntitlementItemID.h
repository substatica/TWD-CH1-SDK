#pragma once
#include "CoreMinimal.h"
#include "TWDUniqueEntitlementItemID.generated.h"

USTRUCT(BlueprintType)
struct FTWDUniqueEntitlementItemID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Oculus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 STEAM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString PS4;
    
    TWD_API FTWDUniqueEntitlementItemID();
};

