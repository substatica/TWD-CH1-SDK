#pragma once
#include "CoreMinimal.h"
#include "PhysicsCore/Public/CollisionShape.h"
#include "UObject/NoExportTypes.h"
#include "SDICollisionShape.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICollisionShape {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    // ReSharper disable once UnrealHeaderToolParserError
    ECollisionShape::Type ShapeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ShapeExtent;
    
public:
    FSDICollisionShape();
};

