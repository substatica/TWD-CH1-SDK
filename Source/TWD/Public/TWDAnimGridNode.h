#pragma once
#include "CoreMinimal.h"
#include "TWDAnimGridNode.generated.h"

USTRUCT(BlueprintType)
struct FTWDAnimGridNode {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 HashKey;
    
    UPROPERTY(Transient)
    TArray<int32> FreeAnimIds;
    
    UPROPERTY(Transient)
    TArray<int32> ReservedAnimIds;
    
    TWD_API FTWDAnimGridNode();
};

