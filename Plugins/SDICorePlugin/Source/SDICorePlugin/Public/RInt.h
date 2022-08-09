#pragma once
#include "CoreMinimal.h"
#include "RInt.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FRInt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MinVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseRange;
    
    FRInt();
};

