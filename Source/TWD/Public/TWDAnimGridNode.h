#pragma once
#include "CoreMinimal.h"
#include "TWDAnimGridNode.generated.h"

USTRUCT(BlueprintType)
struct FTWDAnimGridNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 HashKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> FreeAnimIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> ReservedAnimIds;
    
    TWD_API FTWDAnimGridNode();
};

