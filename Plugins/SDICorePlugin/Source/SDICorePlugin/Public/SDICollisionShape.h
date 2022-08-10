#pragma once
#include "CoreMinimal.h"
#include "CollisionShape2.h"
#include "UObject/NoExportTypes.h"
#include "SDICollisionShape.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICollisionShape {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionShape2> ShapeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ShapeExtent;
    
public:
    FSDICollisionShape();
};

