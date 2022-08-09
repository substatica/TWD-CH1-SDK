#pragma once
#include "CoreMinimal.h"
#include "InventoryItemMetadata.generated.h"

USTRUCT(BlueprintType)
struct NETWORKMANAGERPLUGIN_API FInventoryItemMetadata {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Durability;
    
    UPROPERTY()
    FString SerializationString;
    
    FInventoryItemMetadata();
};

