#pragma once
#include "CoreMinimal.h"
#include "RVector.h"
#include "RVectorExp.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FRVectorExp : public FRVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Exp;
    
    FRVectorExp();
};

