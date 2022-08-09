#pragma once
#include "CoreMinimal.h"
#include "SDISkinMaterial.h"
#include "SDISkinChildComponentMaterial.generated.h"

USTRUCT(BlueprintType)
struct SDISKINPLUGIN_API FSDISkinChildComponentMaterial : public FSDISkinMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChildComponentName;
    
    FSDISkinChildComponentMaterial();
};

