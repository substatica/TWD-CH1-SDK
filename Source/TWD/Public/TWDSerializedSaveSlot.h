#pragma once
#include "CoreMinimal.h"
#include "TWDSerializedSaveSlot.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FTWDSerializedSaveSlot {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<uint8> SerializedData;
    
    FTWDSerializedSaveSlot();
};

