#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RVector.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FRVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MinVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MaxVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRange;
    
    FRVector();
};

