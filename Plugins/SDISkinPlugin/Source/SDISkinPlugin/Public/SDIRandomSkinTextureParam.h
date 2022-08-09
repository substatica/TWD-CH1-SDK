#pragma once
#include "CoreMinimal.h"
#include "SDIRandomSkinTextureParam.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct SDISKINPLUGIN_API FSDIRandomSkinTextureParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Param;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftObjectPtr<UTexture>> Values;
    
    FSDIRandomSkinTextureParam();
};

