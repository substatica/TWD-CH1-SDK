#pragma once
#include "CoreMinimal.h"
#include "QFloat.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FQFloat {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    bool bQueried;
    
    UPROPERTY(Transient)
    float Value;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseRange;
    
    FQFloat();
};

