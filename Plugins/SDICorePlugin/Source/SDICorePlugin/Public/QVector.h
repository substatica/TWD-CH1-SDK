#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QVector.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FQVector {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    bool bQueried;
    
    UPROPERTY(Transient)
    FVector Value;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector MinVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector MaxVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseRange;
    
    FQVector();
};

