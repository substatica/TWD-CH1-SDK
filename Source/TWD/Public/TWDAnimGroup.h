#pragma once
#include "CoreMinimal.h"
#include "TWDAnimGridNode.h"
#include "TWDAnimGroup.generated.h"

USTRUCT(BlueprintType)
struct FTWDAnimGroup {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FName Name;
    
    UPROPERTY(Transient)
    TMap<int32, FTWDAnimGridNode> HashTable;
    
    UPROPERTY(Transient)
    TArray<int32> LRUList;
    
    UPROPERTY(EditAnywhere)
    int32 ReservedMaxLength;
    
    UPROPERTY(EditAnywhere)
    int32 MaxAnimIds;
    
    UPROPERTY(EditAnywhere)
    float GridSpotSize;
    
    UPROPERTY(EditAnywhere)
    int32 HashWidth;
    
    UPROPERTY(EditAnywhere)
    int32 MaxLRU;
    
    TWD_API FTWDAnimGroup();
};

