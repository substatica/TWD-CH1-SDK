#pragma once
#include "CoreMinimal.h"
#include "SDISkinMaterial.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct SDISKINPLUGIN_API FSDISkinMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInterface>> Materials;
    
    FSDISkinMaterial();
};

