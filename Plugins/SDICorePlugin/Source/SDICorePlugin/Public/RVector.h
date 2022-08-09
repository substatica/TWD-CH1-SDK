#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RVector.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FRVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector MinVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector MaxVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseRange;
    
    FRVector();
};

