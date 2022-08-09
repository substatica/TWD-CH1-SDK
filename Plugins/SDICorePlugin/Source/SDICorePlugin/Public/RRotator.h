#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RRotator.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FRRotator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator MinVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator MaxVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseRange;
    
    FRRotator();
};

