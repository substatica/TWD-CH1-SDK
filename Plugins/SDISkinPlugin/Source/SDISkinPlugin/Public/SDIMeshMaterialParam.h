#pragma once
#include "CoreMinimal.h"
#include "ESDIMeshMaterialParamType.h"
#include "UObject/NoExportTypes.h"
#include "SDIMeshMaterialParam.generated.h"

class UMaterialInterface;
class UTexture;

USTRUCT(BlueprintType)
struct SDISKINPLUGIN_API FSDIMeshMaterialParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    ESDIMeshMaterialParamType Type;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 Index;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FName Param;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FLinearColor Value;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UTexture* Texture;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UMaterialInterface* Material;
    
    FSDIMeshMaterialParam();
};

