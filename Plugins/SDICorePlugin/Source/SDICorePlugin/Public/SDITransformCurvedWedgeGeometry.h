#pragma once
#include "CoreMinimal.h"
#include "SDICurvedWedgeGeometry.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDITransformCurvedWedgeGeometry.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDITransformCurvedWedgeGeometry : public FSDICurvedWedgeGeometry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Rotation;
    
public:
    FSDITransformCurvedWedgeGeometry();
};

