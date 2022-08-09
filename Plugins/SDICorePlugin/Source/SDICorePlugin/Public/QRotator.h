#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QRotator.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FQRotator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    bool bQueried;
    
    UPROPERTY(Transient)
    FRotator Value;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator MinVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator MaxVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseRange;
    
    FQRotator();
};

