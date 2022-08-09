#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SDICachedCollisionInfoShapeScaleOverride.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICachedCollisionInfoShapeScaleOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BoneNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShapeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NonUniformShapeScale;
    
    FSDICachedCollisionInfoShapeScaleOverride();
};

