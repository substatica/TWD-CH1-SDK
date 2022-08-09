#pragma once
#include "CoreMinimal.h"
#include "TWDUniqueEntitlementItemID.generated.h"

USTRUCT(BlueprintType)
struct FTWDUniqueEntitlementItemID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Oculus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 STEAM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PS4;
    
    TWD_API FTWDUniqueEntitlementItemID();
};

