#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SDIAssetLookupTable_GuidReferences.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIAssetLookupTable_GuidReferences {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName Key;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FGuid> Guids;
    
    FSDIAssetLookupTable_GuidReferences();
};

