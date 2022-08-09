#pragma once
#include "CoreMinimal.h"
#include "SDITuningAttribute.h"
#include "SDITuningAttribute_SDICoreAttributeComponent.generated.h"

USTRUCT(BlueprintType)
struct SDITUNINGPLUGIN_API FSDITuningAttribute_SDICoreAttributeComponent : public FSDITuningAttribute {
    GENERATED_BODY()
public:
    FSDITuningAttribute_SDICoreAttributeComponent();
};

