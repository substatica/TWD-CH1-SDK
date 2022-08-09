#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SDICachedCollisionInfoShapeScaleOverride.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICachedCollisionInfoShapeScaleOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FName> BoneNames;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ShapeScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector NonUniformShapeScale;
    
    FSDICachedCollisionInfoShapeScaleOverride();
};

