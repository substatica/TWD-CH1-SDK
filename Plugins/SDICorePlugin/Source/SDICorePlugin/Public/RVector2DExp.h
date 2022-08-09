#pragma once
#include "CoreMinimal.h"
#include "RVector2D.h"
#include "RVector2DExp.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FRVector2DExp : public FRVector2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Exp;
    
    FRVector2DExp();
};

