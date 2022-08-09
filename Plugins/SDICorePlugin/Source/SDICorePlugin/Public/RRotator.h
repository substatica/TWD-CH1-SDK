#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RRotator.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FRRotator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator MinVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator MaxVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRange;
    
    FRRotator();
};

