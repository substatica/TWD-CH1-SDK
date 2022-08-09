#pragma once
#include "CoreMinimal.h"
#include "SDIAssetLookupTable_Image.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIAssetLookupTable_Image {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName Key;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> Image;
    
    FSDIAssetLookupTable_Image();
};

