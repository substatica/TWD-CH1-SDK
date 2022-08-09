#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SDITransform_NetQuantize.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDITransform_NetQuantize : public FTransform {
    GENERATED_BODY()
public:
    FSDITransform_NetQuantize();
};

