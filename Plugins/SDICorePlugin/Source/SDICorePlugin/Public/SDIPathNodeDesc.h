#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "SDIPathNodeDesc.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIPathNodeDesc : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor Color;
    
    FSDIPathNodeDesc();
};

