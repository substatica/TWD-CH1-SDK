#pragma once
#include "CoreMinimal.h"
#include "QVector.h"
#include "QVectorExp.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FQVectorExp : public FQVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Exp;
    
    FQVectorExp();
};

