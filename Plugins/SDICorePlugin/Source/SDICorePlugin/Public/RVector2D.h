#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RVector2D.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FRVector2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MinVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MaxVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRange;
    
    FRVector2D();
};

