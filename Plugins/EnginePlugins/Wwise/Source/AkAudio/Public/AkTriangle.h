#pragma once
#include "CoreMinimal.h"
#include "AkTriangle.generated.h"

USTRUCT(BlueprintType)
struct FAkTriangle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint16 Point0;
    
    UPROPERTY(EditAnywhere)
    uint16 Point1;
    
    UPROPERTY(EditAnywhere)
    uint16 Point2;
    
    UPROPERTY(EditAnywhere)
    uint16 Surface;
    
    AKAUDIO_API FAkTriangle();
};

