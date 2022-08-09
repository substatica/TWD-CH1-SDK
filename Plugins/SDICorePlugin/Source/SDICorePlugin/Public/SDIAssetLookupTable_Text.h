#pragma once
#include "CoreMinimal.h"
#include "SDIAssetLookupTable_Text.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIAssetLookupTable_Text {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName Key;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText Text;
    
    FSDIAssetLookupTable_Text();
};

