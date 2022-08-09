#pragma once
#include "CoreMinimal.h"
#include "RFloatExp.h"
#include "RFloat.h"
#include "SDITransformCollisionShape.h"
#include "SDIBlendOption.h"
#include "Curves/CurveFloat.h"
#include "SDICurvedWedgeGeometry.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICurvedWedgeGeometry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRFloat Distance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bFlattenWedge;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRFloatExp HeightRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUseAngleDegCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRFloat AngleDeg;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSDIBlendOption AngleDegBlend;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRuntimeFloatCurve AngleDegCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BoundingShapeStep;
    
    UPROPERTY(Transient)
    bool bIsDirty;
    
    UPROPERTY(Transient)
    FSDITransformCollisionShape BoundingShape;
    
public:
    FSDICurvedWedgeGeometry();
};

