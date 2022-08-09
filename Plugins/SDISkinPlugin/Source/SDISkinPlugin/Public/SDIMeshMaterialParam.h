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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESDIMeshMaterialParamType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    FSDIMeshMaterialParam();
};

