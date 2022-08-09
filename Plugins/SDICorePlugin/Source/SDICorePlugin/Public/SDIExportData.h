#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SDIExportData.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIExportData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleDefaultsOnly)
    FGuid Guid;
    
    FSDIExportData();
};

