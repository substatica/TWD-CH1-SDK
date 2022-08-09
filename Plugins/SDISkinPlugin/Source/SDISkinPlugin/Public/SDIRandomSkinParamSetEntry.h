#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SDIRandomSkinParamSetEntry.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct SDISKINPLUGIN_API FSDIRandomSkinParamSetEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, float> Scalars;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, FLinearColor> Colors;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, TSoftObjectPtr<UTexture>> Textures;
    
    FSDIRandomSkinParamSetEntry();
};

