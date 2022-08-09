#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QVector2D.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FQVector2D {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    bool bQueried;
    
    UPROPERTY(Transient)
    FVector2D Value;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D MinVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D MaxVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseRange;
    
    FQVector2D();
};

