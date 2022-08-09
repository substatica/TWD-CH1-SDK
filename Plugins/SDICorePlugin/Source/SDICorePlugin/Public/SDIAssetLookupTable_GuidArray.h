#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SDIAssetLookupTable_GuidArray.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIAssetLookupTable_GuidArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<FGuid> Guids;
    
    FSDIAssetLookupTable_GuidArray();
};

