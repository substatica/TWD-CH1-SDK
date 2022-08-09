#pragma once
#include "CoreMinimal.h"
#include "QVector2D.h"
#include "QVector2DExp.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FQVector2DExp : public FQVector2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Exp;
    
    FQVector2DExp();
};

