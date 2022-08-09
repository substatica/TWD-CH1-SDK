#pragma once
#include "CoreMinimal.h"
#include "SDIAssetLookupTable_Number.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIAssetLookupTable_Number {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName Key;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Number;
    
    FSDIAssetLookupTable_Number();
};

