#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FloatOscillator.h"
#include "SphericalOscillator.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSphericalOscillator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator CurrentRotation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector Current;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFloatOscillator Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFloatOscillator Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFloatOscillator Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAbsoluteRotation;
    
    FSphericalOscillator();
};

