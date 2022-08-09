#pragma once
#include "CoreMinimal.h"
#include "InventoryItemMetadata.generated.h"

USTRUCT(BlueprintType)
struct NETWORKMANAGERPLUGIN_API FInventoryItemMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Durability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SerializationString;
    
    FInventoryItemMetadata();
};

