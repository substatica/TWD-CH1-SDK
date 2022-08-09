#pragma once
#include "CoreMinimal.h"
#include "QInt.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FQInt {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    bool bQueried;
    
    UPROPERTY(Transient)
    int32 Value;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MinVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseRange;
    
    FQInt();
};

